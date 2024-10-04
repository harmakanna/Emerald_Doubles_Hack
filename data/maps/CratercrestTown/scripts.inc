.set LOCALID_COURTNEY, 10

CratercrestTown_MapScripts::
	.byte 0

CratercrestTown_EventScript_Courtney:: @ 8234938
	lockall
	faceplayer
	msgbox CratercrestTown_Text_CourtneyBlockingTheWay, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CratercrestTown_EventScript_CourtneyBattle
	goto_if_eq VAR_RESULT, NO, CratercrestTown_EventScript_CourtneyThoughtSo
	end

CratercrestTown_EventScript_CourtneyBattle::
	msgbox CratercrestTown_Text_CourtneyIntro
	trainerbattle_no_intro TRAINER_COURTNEY_CRATERCREST, CratercrestTown_Text_CourtneyDefeat
	msgbox CratercrestTown_Text_CourtneyPostBattle, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_COURTNEY
	setflag FLAG_HIDE_CRATERCREST_GRUNTS
	clearflag FLAG_HIDE_CRATERCREST_CITIZENS
	fadedefaultbgm
	fadescreen FADE_FROM_BLACK
	releaseall
	end

CratercrestTown_EventScript_CourtneyThoughtSo::
	msgbox CratercrestTown_Text_CourtneyThoughtSo, MSGBOX_DEFAULT
	release
	end

CratercrestTown_EventScript_RunningTriathleteF::
	msgbox CratercrestTown_Text_Snowboarding, MSGBOX_NPC
	end

CratercrestTown_EventScript_Camper::
	msgbox CratercrestTown_Text_ICameToCamp, MSGBOX_NPC
	end

CratercrestTown_EventScript_Girl2::
	msgbox CratercrestTown_Text_ImNeverLeaving, MSGBOX_NPC
	end

CratercrestTown_EventScript_PokefanM::
	msgbox CratercrestTown_Text_FertileLand, MSGBOX_NPC
	end

CratercrestTown_EventScript_MagmaGruntPass1::
	msgbox CratercrestTown_Text_MagmaGruntPass1, MSGBOX_NPC
	end

CratercrestTown_EventScript_MagmaGruntPass2::
	msgbox CratercrestTown_Text_MagmaGruntPass2, MSGBOX_NPC
	end

CratercrestTown_EventScript_MagmaGruntPeak1::
	msgbox CratercrestTown_Text_MagmaGruntPeak1, MSGBOX_NPC
	end

CratercrestTown_EventScript_MagmaGruntPeak2::
	msgbox CratercrestTown_Text_MagmaGruntPeak2, MSGBOX_NPC
	end

CratercrestTown_EventScript_MagmaGruntSgtSneasel::
	msgbox CratercrestTown_Text_MagmaGruntSgtSneasel, MSGBOX_NPC
	end

CratercrestTown_EventScript_MagmaGruntHouse1::
	msgbox CratercrestTown_Text_MagmaGruntHouse1, MSGBOX_NPC
	end

CratercrestTown_EventScript_MagmaGruntHouse2::
	msgbox CratercrestTown_Text_MagmaGruntHouse2, MSGBOX_NPC
	end

CratercrestTown_EventScript_SgtSneaselsSign::
	msgbox CratercrestTown_Text_SgtSneasel, MSGBOX_SIGN
	end

CratercrestTown_EventScript_WelcomeSign::
	msgbox CratercrestTown_Text_WelcomeToCratercrest, MSGBOX_SIGN
	end

CratercrestTown_Text_CourtneyBlockingTheWay:
	.string "COURTNEY: I've been charged\n"
	.string "with making sure no meddlesome\l"
	.string "brats get in the way of our\l"
	.string "aspirations./p"
	.string "Word from Maxie is that you\n"
	.string "thwarted us at Mt. Chimney.\p"
	.string "But since then, we've gotten\n"
	.string "much, MUCH stronger.\p"
	.string "Do you think you have what it\n"
	.string "takes to challenge us now?$"

CratercrestTown_Text_CourtneyThoughtSo:
	.string "I knew you'd be all bark\n"
	.string "and no bite.\p"
	.string "Go back home to your mom\n"
	.string "and stay out of our way!$"

CratercrestTown_Text_CourtneyIntro:
	.string "So the little brat is up\n"
	.string "to the challenge, huh?\p"
	.string "No matter.\p"
	.string "I'll show you the full might\n"
	.string "that Team Magma has to offer!$"

CratercrestTown_Text_CourtneyDefeat:
	.string "What!? How were you able\n"
	.string "to best me!?$"

CratercrestTown_Text_CourtneyPostBattle:
	.string "Grr… Team Magma will NEVER\n"
	.string "let you meddle in our affairs!$"

CratercrestTown_Text_ImNeverLeaving:
	.string "Life moves so slowly here…\p"
	.string "I never wanna leave.$"

CratercrestTown_Text_ICameToCamp:
	.string "I came to camp on Meteor Peak,\n"
	.string "but I forgot my snow coat!\p"
	.string "Do you know where\n"
	.string "I can buy one?$"

CratercrestTown_Text_FertileLand:
	.string "Ancient eruptions from Mt. Chimney\n"
	.string "gave us nutrient-rich land.\p"
	.string "Today, we grow the most food\n"
	.string "in all of Hoenn!$"

CratercrestTown_Text_Snowboarding:
	.string "Mt. Meteor is a world-renowned\n"
	.string "spot for snowboarding.\p"
	.string "Top boarders visit so often,\n"
	.string "it's almost like they're\l"
	.string "residents themselves!$"

CratercrestTown_Text_WelcomeToCratercrest:
	.string "Cratercrest Town\n"
	.string "The winter sport capital\l"
	.string "of Hoenn!$"

CratercrestTown_Text_SgtSneasel:
	.string "Sgt. Sneasel's\n"
	.string "Old Town Store\p"
	.string "Celebrating our 150th\n"
	.string "anniversary!$"

CratercrestTown_Text_MagmaGruntPass1:
	.string "We just tunneled our way\n"
	.string "through our old Jagged\l"
	.string "hideout./p"
	.string "Don't mess this up for us!$"

CratercrestTown_Text_MagmaGruntPass2:
	.string "Cratercrest is ours!$"

CratercrestTown_Text_MagmaGruntPeak1:
	.string "There's a lot of strong\n"
	.string "POKéMON on Meteor Peak…\p"

CratercrestTown_Text_MagmaGruntPeak2:
	.string "Once we're settled into\n"
	.string "the new base, we'll capture\l"
	.string "the toughest POKéMON on the\l"
	.string "mountaintops!$"

CratercrestTown_Text_MagmaGruntSgtSneasel:
	.string "Do you think I could buy\n"
	.string "lava cookies at Sargent\l"
	.string "Sneasel's General Store?$"

CratercrestTown_Text_MagmaGruntHouse1:
	.string "Nobody gets in and out\n"
	.string "while we're moving base.\p"
	.string "Scram!$"

CratercrestTown_Text_MagmaGruntHouse2:
	.string "Don't you have something\n"
	.string "better to be doing than\l"
	.string "screwing with us?$"
	