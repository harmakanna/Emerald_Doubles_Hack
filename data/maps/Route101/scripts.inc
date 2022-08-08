.set LOCALID_RIVAL, 1
.set LOCALID_YOUNGSTER, 2
.set LOCALID_BIRCH, 3
.set LOCALID_BIRCH2, 4
.set LOCALID_ZIGZAGOON, 6
.set LOCALID_EEVEE, 7

Route101_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
	.byte 0

Route101_OnTransition:
	call ProfBirch_EventScript_UpdateLocation
	end

Route101_OnFrame:
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
	.2byte 0

Route101_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_ROUTE101_STATE, 1
	end

Route101_EventScript_StartBirchRescue::
	lockall
	playbgm MUS_HELP, TRUE
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
	closemessage
	setobjectxy LOCALID_BIRCH, 0, 15
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
	waitmovement 0
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
	waitmovement 0
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
	waitmovement 0
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
	closemessage
	setvar VAR_ROUTE101_STATE, 2
	releaseall
	end

	Route101_EventScript_StartBirchRescue2:: @ 81EBCDE
		lockall
		playbgm MUS_HELP, 1
		clearflag FLAG_HIDE_ROUTE_101_RIVAL
		clearflag FLAG_HIDE_ROUTE_101_EEVEE
		clearflag FLAG_HIDE_ROUTE_101_BIRCH_EEVEE_BATTLE
		msgbox Route101_Text_Dad, MSGBOX_DEFAULT
		closemessage
		setobjectxy LOCALID_BIRCH2, 1, 10
		setobjectxy LOCALID_EEVEE, 0, 10
		applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene2
		applymovement LOCALID_BIRCH2, Route101_Movement_BirchRunAway2
		applymovement LOCALID_EEVEE, Route101_Movement_EeveeChase2
		waitmovement 0
		applymovement LOCALID_EEVEE, Route101_Movement_EeveeChaseInCircles
		applymovement LOCALID_BIRCH2, Route101_Movement_BirchRunInCircles2
		waitmovement 0
		applymovement LOCALID_BIRCH2, Common_Movement_WalkInPlaceFasterUp
		waitmovement 0
		applymovement LOCALID_EEVEE, Route101_Movement_EeveeFaceBirch
		applymovement LOCALID_BIRCH2, Route101_Movement_BirchFaceEevee
		waitmovement 0
		msgbox Route101_Text_PleaseHelp2, MSGBOX_DEFAULT
		checkplayergender
		compare VAR_RESULT, MALE
		call_if_eq Route101_EventScript_MayDad
		compare VAR_RESULT, FEMALE
		call_if_eq Route101_EventScript_BrendanDad
		setvar VAR_ROUTE101_STATE, 4
		msgbox Route101_Text_DontLeaveMe2
		end

	Route101_EventScript_MayDad::
		msgbox Route101_Text_MayDad, MSGBOX_DEFAULT
		closemessage
		releaseall
		end

	Route101_EventScript_BrendanDad::
		msgbox Route101_Text_BrendanDad, MSGBOX_DEFAULT
		closemessage
		releaseall
		end

	Route101_EventScript_PreventExitSouth:: @ 81EBD4E
		lockall
		msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
		closemessage
		applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
		waitmovement 0
		releaseall
		end

	Route101_EventScript_PreventExitSouth2:: @ 81EBD4E
		lockall
		msgbox Route101_Text_DontLeaveMe2, MSGBOX_DEFAULT
		closemessage
		applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
		waitmovement 0
		releaseall
		end

	Route101_EventScript_PreventExitWest:: @ 81EBD64
		lockall
		msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
		closemessage
		applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
		waitmovement 0
		releaseall
		end


	Route101_EventScript_PreventExitEast:: @ 81EBD64
		lockall
		msgbox Route101_Text_DontLeaveMe2, MSGBOX_DEFAULT
		closemessage
		applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitEast
		waitmovement 0
		releaseall
		end

	Route101_EventScript_PreventExitNorth:: @ 81EBD7A
		lockall
		msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
		closemessage
		applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
		waitmovement 0
		releaseall
		end

	Route101_EventScript_PreventExitHopRight:: @ 81EBD7A
		lockall
		msgbox Route101_Text_DontLeaveMe2, MSGBOX_DEFAULT
		closemessage
		applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitHopRight
		waitmovement 0
		releaseall
		end

	Route101_EventScript_PreventExitHopLeft:: @ 81EBD7A
		lockall
		msgbox Route101_Text_DontLeaveMe2, MSGBOX_DEFAULT
		closemessage
		applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitHopLeft
		waitmovement 0
		releaseall
		end

	Route101_Movement_PreventExitSouth: @ 81EBD90
		walk_up
		step_end

	Route101_Movement_PreventExitWest: @ 81EBD92
		walk_right
		step_end

	Route101_Movement_PreventExitEast: @ 81EBD92
		walk_left
		step_end

	Route101_Movement_PreventExitNorth: @ 81EBD94
		walk_down
		step_end

	Route101_Movement_PreventExitHopRight: @ 81EBD94
		walk_left
		walk_left
		walk_left
		walk_up
		walk_up
		step_end

	Route101_Movement_PreventExitHopLeft:
		walk_left
		walk_up
		walk_up
		step_end

	Route101_Movement_ZigzagoonChaseInCircles: @ 81EBD96
		walk_fast_up
		walk_fast_up
		walk_fast_up
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_down
		walk_fast_down
		walk_fast_left
		walk_fast_left
		walk_fast_left
		walk_fast_up
		walk_fast_up
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_down
		walk_fast_down
		walk_fast_left
		walk_fast_left
		walk_fast_left
		walk_fast_up
		walk_fast_up
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_down
		walk_fast_down
		walk_fast_left
		walk_fast_left
		step_end

	Route101_Movement_EeveeChaseInCircles: @ 81EBD96
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_down
		walk_fast_down
		walk_fast_left
		walk_fast_left
		walk_fast_left
		walk_fast_up
		walk_fast_up
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_down
		walk_fast_down
		walk_fast_left
		walk_fast_left
		walk_fast_left
		walk_fast_up
		walk_fast_up
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_down
		step_end

	Route101_Movement_ZigzagoonChase1: @ 81EBDB5
		walk_fast_up
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_up
		step_end

	Route101_Movement_EeveeChase2: @ 81EBDB5
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_right
		step_end

	@ Leftover data? This command is unused.
		step_end

	Route101_Movement_ZigzagoonFaceBirch: @ 81EBDBD
		walk_in_place_fast_left
		walk_in_place_fast_left
		walk_in_place_fast_left
		walk_in_place_fast_left
		step_end

	Route101_Movement_EeveeFaceBirch: @ 81EBDBD
		walk_in_place_fast_down
		walk_in_place_fast_down
		walk_in_place_fast_down
		walk_in_place_fast_down
		step_end

	Route101_Movement_EnterScene: @ 81EBDC2
		walk_fast_up
		walk_fast_up
		walk_fast_up
		walk_fast_up
		walk_in_place_faster_left
		step_end

	Route101_Movement_EnterScene2: @ 81EBDC2
		walk_fast_down
		walk_fast_down
		walk_fast_down
		jump_2_down
		walk_fast_down
		walk_fast_down
		step_end

	Route101_Movement_BirchRunInCircles: @ 81EBDC8
		walk_fast_up
		walk_fast_up
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_down
		walk_fast_down
		walk_fast_left
		walk_fast_left
		walk_fast_left
		walk_fast_up
		walk_fast_up
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_down
		walk_fast_down
		walk_fast_left
		walk_fast_left
		walk_fast_left
		walk_fast_up
		walk_fast_up
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_down
		walk_fast_down
		walk_fast_left
		walk_fast_left
		walk_fast_left
		step_end

	Route101_Movement_BirchRunInCircles2: @ 81EBDC8
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_down
		walk_fast_down
		walk_fast_left
		walk_fast_left
		walk_fast_left
		walk_fast_up
		walk_fast_up
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_down
		walk_fast_down
		walk_fast_left
		walk_fast_left
		walk_fast_left
		walk_fast_up
		walk_fast_up
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_down
		walk_fast_down
		step_end

	Route101_Movement_BirchRunAway1: @ 81EBDE7
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_up
		walk_fast_up
		step_end

	Route101_Movement_BirchRunAway2: @ 81EBDE7
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_right
		walk_fast_right
		step_end

	@ Leftover data? This command is unused.
		step_end

	Route101_Movement_BirchFaceZigzagoon: @ 81EBDEF
		walk_in_place_fast_right
		walk_in_place_fast_right
		walk_in_place_fast_right
		walk_in_place_fast_right
		walk_in_place_fast_right
		step_end

	Route101_Movement_BirchFaceEevee: @ 81EBDEF
		walk_in_place_fast_up
		walk_in_place_fast_up
		walk_in_place_fast_up
		walk_in_place_fast_up
		walk_in_place_fast_up
		step_end

	Route101_Movement_RivalWalk:
		walk_down
		walk_down
		walk_down
		walk_right
		step_end

	Route101_Movement_Unused1: @ 81EBDF4
		walk_in_place_fast_up
		step_end

	Route101_Movement_Unused2: @ 81EBDF7
		walk_up
		walk_left
		walk_up
		step_end

	Route101_EventScript_Youngster:: @ 81EBDFB
		msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
		end

	Route101_EventScript_Boy:: @ 81EBE04
		msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
		end

	Route101_EventScript_Rival::
		lock
		checkplayergender
		compare VAR_RESULT, MALE
		call_if_eq Route101_EventScript_MaySigh
		compare VAR_RESULT, FEMALE
		call_if_eq Route101_EventScript_BrendanCmon
		closemessage
		release
		end

	Route101_EventScript_MaySigh::
		msgbox Route101_Text_MaySigh MSGBOX_NPC
		end

	Route101_EventScript_BrendanCmon::
		msgbox Route101_Text_BrendanCmon MSGBOX_NPC
		end

	Route101_EventScript_Birch::
		lockall
		msgbox Route101_Text_PleaseHelp2, MSGBOX_DEFAULT
		closemessage
		releaseall
		end

Route101_EventScript_RouteSign::
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
	end

Route101_EventScript_BirchsBag::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ZIGZAGOON
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	special ChooseStarter
	waitstate
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
	waitmovement 0
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
	special HealPlayerParty
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	setvar VAR_BIRCH_LAB_STATE, 2
	setvar VAR_ROUTE101_STATE, 3
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
	waitstate
	release
	end

Route101_EventScript_EeveeBattle::
	applymovement LOCALID_EEVEE Common_Movement_FacePlayer
	lockall
	applymovement LOCALID_BIRCH2 Common_Movement_FaceUp
	msgbox Route101_Text_EeveePreBattle MSGBOX_DEFAULT
	playmoncry SPECIES_EEVEE, 2
	waitmoncry
	closemessage
	setwildbattle SPECIES_EEVEE, 4, ITEM_NONE
	setvar VAR_0x8009, 0
	releaseall
	applymovement LOCALID_EEVEE Common_Movement_FacePlayer
	applymovement LOCALID_BIRCH2 Common_Movement_FaceUp
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	playbgm MUS_ROUTE101, 1
	dowildbattle
	applymovement LOCALID_RIVAL Route101_Movement_RivalWalk
	waitmovement 0
	applymovement LOCALID_BIRCH2 Common_Movement_FaceLeft
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route101_EventScript_EeveeHurt
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route101_EventScript_EeveeHappy
	end

Route101_EventScript_EeveeHurt::
	lock
	msgbox Route101_Text_EeveePostHurt MSGBOX_DEFAULT
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route101_EventScript_MalePlayerPostBattleHurt
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101_EventScript_FemalePlayerPostBattleHurt
	end

Route101_EventScript_EeveeHappy::
	lock
	msgbox Route101_Text_EeveePostHappy MSGBOX_DEFAULT
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route101_EventScript_MalePlayerPostBattleHappy
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101_EventScript_FemalePlayerPostBattleHappy
	end

Route101_EventScript_MalePlayerPostBattleHurt:
	msgbox Route101_Text_MayPostBattleHurt1 MSGBOX_DEFAULT
	closemessage
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 255, 6, 5
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_ROUTE_101_EEVEE
	setflag FLAG_HIDE_ROUTE_101_BIRCH_EEVEE_BATTLE
	setflag FLAG_HIDE_ROUTE_101_RIVAL
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_EEVEE
	setvar VAR_ROUTE101_STATE, 4
	release
	end

Route101_EventScript_FemalePlayerPostBattleHurt:
	msgbox Route101_Text_BrendanPostBattleHurt1 MSGBOX_DEFAULT
	closemessage
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 255, 6, 5
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_ROUTE_101_EEVEE
	setflag FLAG_HIDE_ROUTE_101_BIRCH_EEVEE_BATTLE
	setflag FLAG_HIDE_ROUTE_101_RIVAL
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_EEVEE
	setvar VAR_ROUTE101_STATE, 4
	release
	end

Route101_EventScript_MalePlayerPostBattleHappy:
	msgbox Route101_Text_MayPostBattleHappy1 MSGBOX_DEFAULT
	closemessage
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 255, 6, 5
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_ROUTE_101_EEVEE
	setflag FLAG_HIDE_ROUTE_101_BIRCH_EEVEE_BATTLE
	setflag FLAG_HIDE_ROUTE_101_RIVAL
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_EEVEE
	setvar VAR_ROUTE101_STATE, 4
	release
	end

Route101_EventScript_FemalePlayerPostBattleHappy:
	msgbox Route101_Text_BrendanPostBattleHappy1 MSGBOX_DEFAULT
	closemessage
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 255, 6, 5
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_ROUTE_101_EEVEE
	setflag FLAG_HIDE_ROUTE_101_BIRCH_EEVEE_BATTLE
	setflag FLAG_HIDE_ROUTE_101_RIVAL
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_EEVEE
	setvar VAR_ROUTE101_STATE, 4
	release
	end

Route101_EventScript_HideMayInBedroom::
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	return

Route101_EventScript_HideBrendanInBedroom::
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	return

Route101_Movement_BirchApproachPlayer:
	walk_right
	step_end

Route101_Text_EeveePreBattle:
	.string "Eevee: Vi!$"

Route101_Text_EeveePostHurt:
	.string "Eevee: Eev...$"

Route101_Text_EeveePostHappy:
	.string "Eevee: Vi! Vi!$"

Route101_Text_MayPostBattleHurt1:
	.string "May: The poor thing looks like it's\n"
	.string "going to collapse!\p"
	.string "Prof. Birch: Maybe I overreacted a\n"
	.string "bit...\p"
	.string "May: Either way, we need to hurry\n"
	.string "back to the Lab, now!$"

Route101_Text_BrendanPostBattleHurt1:
	.string "Brendan: I can't believe you were\n"
	.string "afraid of an Eevee, Dad...\p"
	.string "Prof. Birch: Perhaps I might have\n"
	.string "overreacted...\p"
	.string "Brendan: It looks like it's in\n"
	.string "rough shape, we need to rush back\l"
	.string "to the lab, pronto!$"

Route101_Text_MayPostBattleHappy1:
	.string "May: See, dad? It just really wanted\n"
	.string "to play!\p"
	.string "Prof. Birch: Sorry, I'm still a bit\n"
	.string "frazzled from last time...\p"
	.string "May: {PLAYER}, I think it's time we\n"
	.string "head back to the Lab!$"

Route101_Text_BrendanPostBattleHappy1:
	.string "Brendan: The little thing just got\n"
	.string "a bit excited, Dad - nothing to lose\l"
	.string "your cool over.\p"
	.string "Prof. Birch: I'm still a little on\n"
	.string "edge from last time, sorry...\p"
	.string "Brendan: Dad, {PLAYER}, let's get\n"
	.string "back to the Lab now.$"

Route101_Text_HelpMe: @ 81EBE8F
	.string "H-help me!$"

Route101_Text_Dad: @ 81EBE8F
	.string "Dad!$"

Route101_Text_PleaseHelp: @ 81EBE9A
	.string "Hello! You over there!\n"
	.string "Please! Help!\p"
	.string "In my Bag!\n"
	.string "There's a Poké Ball!$"

Route101_Text_PleaseHelp2: @ 81EBE9A
	.string "Prof. Birch: {PLAYER}{KUN}!\n"
	.string "Please! Help!$"

Route101_Text_BrendanDad:
	.string "Brendan: Uhh... dad?\n"
	.string "You're not in danger...\p"
	.string "Prof. Birch: HELP!$"

Route101_Text_BrendanCmon:
	.string "Brendan: C'mon, dad...$"

Route101_Text_MayDad:
	.string "May: Really, dad? You're running\n"
	.string "away from THAT!?\p"
	.string "Prof. Birch: HELP!$"

Route101_Text_MaySigh:
	.string "May: Ugh...$"

Route101_Text_DontLeaveMe: @ 81EBEDF
	.string "Wh-Where are you going?!\n"
	.string "Don't leave me like this!$"

Route101_Text_DontLeaveMe2: @ 81EBEDF
	.string "HELP!$"

Route101_Text_YouSavedMe: @ 81EBF12
	.string "Prof. Birch: Whew…\p"
	.string "I was in the tall grass studying wild\n"
	.string "Pokémon when I was jumped.\p"
	.string "You saved me.\n"
	.string "Thanks a lot!\p"
	.string "Oh?\p"
	.string "Hi, you're {PLAYER}{KUN}!\p"
	.string "This is not the place to chat, so come\n"
	.string "by my Pokémon Lab later, okay?$"

Route101_Text_TakeTiredPokemonToPokeCenter: @ 81EBFDD
	.string "If Pokémon get tired, take them to\n"
	.string "a Pokémon Center.\p"
	.string "There's a Pokémon Center in Oldale\n"
	.string "Town right close by.$"

Route101_Text_WildPokemonInTallGrass: @ 81EC04A
	.string "Wild Pokémon will jump out at you in\n"
	.string "tall grass.\p"
	.string "If you want to catch Pokémon, you have\n"
	.string "to go into the tall grass and search.$"

Route101_Text_RouteSign: @ 81EC0C8
	.string "Route 101\n"
	.string "{UP_ARROW} Oldale Town$"
