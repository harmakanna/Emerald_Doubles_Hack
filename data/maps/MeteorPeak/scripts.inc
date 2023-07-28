MeteorPeak_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MeteorPeak_OnLoad
	.byte 0

MeteorPeak_OnLoad:
	call_if_unset FLAG_REGI_DOORS_OPENED, MeteorPeak_EventScript_CloseDecrepitCastle
	end

MeteorPeak_EventScript_CloseDecrepitCastle::
	setmetatile 22, 10, METATILE_General_RockWall_RockBase, TRUE
	setmetatile 22, 11, METATILE_General_RockWall_SandBase, TRUE
	return

MeteorPeak_EventScript_ChimneysInnSign::
	msgbox MeteorPeak_Text_ChimneysInnSign, MSGBOX_SIGN
	end

MeteorPeak_Text_ChimneysInnSign:
	.string "Chimney's Inn\p"
	.string "A respite from the\n"
	.string "frigid mountain winds.$"
