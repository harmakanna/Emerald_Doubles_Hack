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

Meteor_Peak_EventScript_Leo::
	trainerbattle_single TRAINER_LEO, Meteor_Peak_Text_LeoIntro, Meteor_Peak_Text_LeoDefeat
	msgbox Meteor_Peak_Text_LeoPostBattle, MSGBOX_AUTOCLOSE
	end

Meteor_Peak_EventScript_Sasha::
	trainerbattle_single TRAINER_SASHA, Meteor_Peak_Text_SashaIntro, Meteor_Peak_Text_SashaDefeat
	msgbox Meteor_Peak_Text_SashaPostBattle, MSGBOX_AUTOCLOSE
	end

Meteor_Peak_EventScript_Vlad::
	trainerbattle_single TRAINER_VLAD, Meteor_Peak_Text_VladIntro, Meteor_Peak_Text_VladDefeat
	msgbox Meteor_Peak_Text_VladPostBattle, MSGBOX_AUTOCLOSE
	end

Meteor_Peak_EventScript_Pearl::
	trainerbattle_single TRAINER_PEARL, Meteor_Peak_Text_PearlIntro, Meteor_Peak_Text_PearlDefeat
	msgbox Meteor_Peak_Text_PearlPostBattle, MSGBOX_AUTOCLOSE
	end

Meteor_Peak_EventScript_Shae::
	trainerbattle_single TRAINER_SHAE, Meteor_Peak_Text_ShaeIntro, Meteor_Peak_Text_ShaeDefeat
	msgbox Meteor_Peak_Text_ShaePostBattle, MSGBOX_AUTOCLOSE
	end

Meteor_Peak_EventScript_Mateo::
	trainerbattle_single TRAINER_MATEO, Meteor_Peak_Text_MateoIntro, Meteor_Peak_Text_MateoDefeat
	msgbox Meteor_Peak_Text_MateoPostBattle, MSGBOX_AUTOCLOSE
	end

Meteor_Peak_EventScript_Erik::
	trainerbattle_single TRAINER_ERIK, Meteor_Peak_Text_ErikIntro, Meteor_Peak_Text_ErikDefeat
	msgbox Meteor_Peak_Text_ErikPostBattle, MSGBOX_AUTOCLOSE
	end

MeteorPeak_EventScript_ChimneysInnSign::
	msgbox MeteorPeak_Text_ChimneysInnSign, MSGBOX_SIGN
	end

MeteorPeak_Text_ChimneysInnSign:
	.string "Chimney's Inn\p"
	.string "A respite from the\n"
	.string "frigid mountain winds.$"
