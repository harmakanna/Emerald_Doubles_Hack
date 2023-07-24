DecrepitCastle_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, DecrepitCastle_1F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, DecrepitCastle_1F_OnTransition
	.byte 0

DecrepitCastle_1F_OnTransition:
	setflag FLAG_LANDMARK_DECREPIT_CASTLE
	end

DecrepitCastle_1F_OnLoad:
	call_if_unset FLAG_SYS_DECREPIT_CASTLE_PUZZLE_COMPLETED, DecrepitCastle_1F_EventScript_HideRegiEntrance
	end

DecrepitCastle_1F_EventScript_HideRegiEntrance::
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return

DecrepitCastle_1F_EventScript_CaveEntranceMiddle::
	lockall
	goto_if_set FLAG_SYS_DECREPIT_CASTLE_PUZZLE_COMPLETED, DecrepitCastle_1F_EventScript_BigHoleInWall
	braillemessage DecrepitCastle_Braille_FiveComeTogether
	special BrailleDecrepitCastleCheck
	goto DecrepitCastle_1F_EventScript_CloseBrailleMsg
	end

DecrepitCastle_1F_EventScript_BigHoleInWall::
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
	releaseall
	end

DecrepitCastle_1F_EventScript_CaveEntranceSide::
	lockall
	braillemessage DecrepitCastle_Braille_FiveComeTogether
	goto_if_set FLAG_SYS_DECREPIT_CASTLE_PUZZLE_COMPLETED, DecrepitCastle_1F_EventScript_CloseBrailleMsg
	special BrailleDecrepitCastleCheck
	goto DecrepitCastle_1F_EventScript_CloseBrailleMsg
	end

DecrepitCastle_1F_EventScript_CloseBrailleMsg::
	waitbuttonpress
	closebraillemessage
	releaseall
	end

DecrepitCastle_1F_EventScript_OpenRegiEntrance::
	setmetatile 7, 19, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
	setmetatile 8, 19, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
	setmetatile 9, 19, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
	setmetatile 7, 20, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
	setmetatile 8, 20, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
	setmetatile 9, 20, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
	special DrawWholeMapView
	playse SE_BANG
	setflag FLAG_SYS_DECREPIT_CASTLE_PUZZLE_COMPLETED
	end
