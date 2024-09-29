MtMeteor_2F_1R_MapScripts::
	.byte 0

MtMeteor_2F_1R_EventScript_SearchingForStones::
	lock
	faceplayer
	goto_if_set FLAG_ITEM_SHINY_STONE_MTMETEOR_2F_1R, MtMeteor_2F_1R_EventScript_IHavePlentyStones
	msgbox MtMeteor_2F_1R_Text_StonesInMtMeteor, MSGBOX_DEFAULT
	giveitem ITEM_SHINY_STONE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_ITEM_SHINY_STONE_MTMETEOR_2F_1R
	msgbox MtMeteor_2F_1R_Text_IHavePlentyStones, MSGBOX_DEFAULT
	release
	end

MtMeteor_2F_1R_EventScript_IHavePlentyStones::
	msgbox MtMeteor_2F_1R_Text_IHavePlentyStones, MSGBOX_DEFAULT
	release
	end

MtMeteor_2F_1R_EventScript_Miles::
	trainerbattle_double TRAINER_MILES, MtMeteor_2F_1R_Text_MilesIntro, MtMeteor_2F_1R_Text_MilesDefeat
	msgbox MtMeteor_2F_1R_Text_MilesPostBattle, MSGBOX_AUTOCLOSE
	end

MtMeteor_2F_1R_EventScript_Luna::
	trainerbattle_double TRAINER_LUNA, MtMeteor_2F_1R_Text_LunaIntro, MtMeteor_2F_1R_Text_LunaDefeat
	msgbox MtMeteor_2F_1R_Text_LunaPostBattle, MSGBOX_AUTOCLOSE
	end

MtMeteor_2F_1R_EventScript_Harper::
	trainerbattle_double TRAINER_HARPER, MtMeteor_2F_1R_Text_HarperIntro, MtMeteor_2F_1R_Text_HarperDefeat
	msgbox MtMeteor_2F_1R_Text_HarperPostBattle, MSGBOX_AUTOCLOSE
	end

MtMeteor_2F_1R_EventScript_Landon::
	trainerbattle_double TRAINER_LANDON, MtMeteor_2F_1R_Text_LandonIntro, MtMeteor_2F_1R_Text_LandonDefeat
	msgbox MtMeteor_2F_1R_Text_LandonPostBattle, MSGBOX_AUTOCLOSE
	end

MtMeteor_2F_1R_Text_StonesInMtMeteor:
	.string "I'm digging for stones!\p"
	.string "Scattered across these caves\n"
	.string "are many gems and evolutionary\l"
	.string "stones, which attract geologists\l"
	.string "like me.\p"
	.string "Here, have one for yourself!\p"

MtMeteor_2F_1R_Text_IHavePlentyStones:
	.string "Don't worry about me - I've\n"
	.string "already found plenty of stones!\p"
	.string "I'm sure this will be useful\n"
	.string "for a trainer like you.$"
