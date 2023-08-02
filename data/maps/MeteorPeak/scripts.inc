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

MeteorPeak_EventScript_Leo::
	trainerbattle_double TRAINER_LEO, MeteorPeak_Text_LeoIntro, MeteorPeak_Text_LeoDefeat
	msgbox MeteorPeak_Text_LeoPostBattle, MSGBOX_AUTOCLOSE
	end

MeteorPeak_EventScript_Sasha::
	trainerbattle_double TRAINER_SASHA, MeteorPeak_Text_SashaIntro, MeteorPeak_Text_SashaDefeat
	msgbox MeteorPeak_Text_SashaPostBattle, MSGBOX_AUTOCLOSE
	end

MeteorPeak_EventScript_Vlad::
	trainerbattle_double TRAINER_VLAD, MeteorPeak_Text_VladIntro, MeteorPeak_Text_VladDefeat
	msgbox MeteorPeak_Text_VladPostBattle, MSGBOX_AUTOCLOSE
	end

MeteorPeak_EventScript_Pearl::
	trainerbattle_double TRAINER_PEARL, MeteorPeak_Text_PearlIntro, MeteorPeak_Text_PearlDefeat
	msgbox MeteorPeak_Text_PearlPostBattle, MSGBOX_AUTOCLOSE
	end

MeteorPeak_EventScript_Shae::
	trainerbattle_double TRAINER_SHAE, MeteorPeak_Text_ShaeIntro, MeteorPeak_Text_ShaeDefeat
	msgbox MeteorPeak_Text_ShaePostBattle, MSGBOX_AUTOCLOSE
	end

MeteorPeak_EventScript_Mateo::
	trainerbattle_double TRAINER_MATEO, MeteorPeak_Text_MateoIntro, MeteorPeak_Text_MateoDefeat
	msgbox MeteorPeak_Text_MateoPostBattle, MSGBOX_AUTOCLOSE
	end

MeteorPeak_EventScript_Erik::
	trainerbattle_double TRAINER_ERIK, MeteorPeak_Text_ErikIntro, MeteorPeak_Text_ErikDefeat
	msgbox MeteorPeak_Text_ErikPostBattle, MSGBOX_AUTOCLOSE
	end

MeteorPeak_EventScript_ChimneysInnSign::
	msgbox MeteorPeak_Text_ChimneysInnSign, MSGBOX_SIGN
	end

MeteorPeak_Text_ChimneysInnSign:
	.string "Chimney's Inn\p"
	.string "A respite from the\n"
	.string "frigid mountain winds.$"
