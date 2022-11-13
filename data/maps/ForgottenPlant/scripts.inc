ForgottenPlant_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, ForgottenPlant_OnResume
	map_script MAP_SCRIPT_ON_LOAD, ForgottenPlant_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, ForgottenPlant_OnTransition
	.byte 0

ForgottenPlant_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ForgottenPlant_EventScript_TryRemoveRegieleki
	end

ForgottenPlant_EventScript_TryRemoveRegieleki::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

ForgottenPlant_OnTransition:
	setflag FLAG_LANDMARK_FORGOTTEN_PLANT
	call_if_unset FLAG_DEFEATED_REGIELEKI, ForgottenPlant_EventScript_ShowRegieleki
	end

ForgottenPlant_EventScript_ShowRegieleki::
	clearflag FLAG_HIDE_REGIELEKI
	return

ForgottenPlant_OnLoad:
	call_if_unset FLAG_SYS_REGIELEKI_PUZZLE_COMPLETED, ForgottenPlant_EventScript_HideRegiEntrance
	end

ForgottenPlant_EventScript_HideRegiEntrance::
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return

ForgottenPlant_EventScript_CaveEntranceMiddle::
	lockall
	goto_if_set FLAG_SYS_REGIELEKI_PUZZLE_COMPLETED, ForgottenPlant_EventScript_BigHoleInWall
	braillemsgbox ForgottenPlant_Braille_CastYourLure
	releaseall
	end

ForgottenPlant_EventScript_BigHoleInWall::
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
	releaseall
	end

ForgottenPlant_EventScript_CaveEntranceSide::
	lockall
	braillemsgbox ForgottenPlant_Braille_CastYourLure
	releaseall
	end

ForgottenPlant_EventScript_Regieleki::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGIELEKI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGIELEKI, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ForgottenPlant_EventScript_DefeatedRegieleki
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ForgottenPlant_EventScript_RanFromRegieleki
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ForgottenPlant_EventScript_RanFromRegieleki
	setflag FLAG_DEFEATED_REGIELEKI
	release
	end

ForgottenPlant_EventScript_DefeatedRegieleki::
	setflag FLAG_DEFEATED_REGIELEKI
	goto Common_EventScript_RemoveStaticPokemon
	end

ForgottenPlant_EventScript_RanFromRegieleki::
	setvar VAR_0x8004, SPECIES_REGIELEKI
	goto Common_EventScript_LegendaryFlewAway
	end
