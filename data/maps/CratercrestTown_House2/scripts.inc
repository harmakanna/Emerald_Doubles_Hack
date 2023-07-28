CratercrestTown_House2_MapScripts::
	.byte 0

CratercrestTown_House2_EventScript_LegendOfTheGolems::
	msgbox CratercrestTown_House2_Text_LegendOfTheGolems, MSGBOX_NPC
	end

CratercrestTown_House2_EventScript_BigSister::
	msgbox CratercrestTown_House2_Text_MyBigSister, MSGBOX_NPC
	end

CratercrestTown_House2_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox CratercrestTown_House2_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CratercrestTown_House2_Text_LegendOfTheGolems:
	.string "Long ago, humans lived in peace\n"
	.string "with the six legendary golems.\p"
	.string "But one day, that peace was\n"
	.string "was threatened by a thief who\l"
	.string "brought ruinous treasures from\l"
	.string "a distant land.\p"
	.string "The golems protected the people,\n"
	.string "but were severely damaged.\p"
	.string "It's said that today, those golems\n"
	.string "are resting in remote caves across\l"
	.string "Hoenn.$"

CratercrestTown_House2_Text_MyBigSister::
	.string "My big sister protects nature!\p"
	.string "Isn't she so cool?$"

CratercrestTown_House2_Text_Skitty:
	.string "Myu! Myu!$"
