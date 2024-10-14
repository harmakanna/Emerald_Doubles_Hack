.set LOCALID_COURTNEY, 10
.set LOCALID_GRUNT_1, 11
.set LOCALID_GRUNT_2, 12
.set LOCALID_GRUNT_3, 13
.set LOCALID_GRUNT_4, 14
.set LOCALID_GRUNT_5, 15
.set LOCALID_GRUNT_6, 16
.set LOCALID_GRUNT_7, 17

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
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_GRUNT_3
	removeobject LOCALID_GRUNT_4
	removeobject LOCALID_GRUNT_5
	removeobject LOCALID_GRUNT_6
	removeobject LOCALID_GRUNT_7
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
	.string "COURTNEY: I've been charged with making\n"
	.string "sure no meddlesome brats get in the\l"
	.string "way of our aspirations.\p"
	.string "Word from Maxie is that you thwarted us\n"
	.string "at Mt. Chimney.\p"
	.string "But since then, we've gotten much, MUCH\n"
	.string "stronger.\p"
	.string "Do you think you have what it takes to\n"
	.string "challenge us now?$"

CratercrestTown_Text_CourtneyThoughtSo:
	.string "I knew you'd be all bark and no bite.\p"
	.string "Go back home to your mom and stay out\n"
	.string "of our way!$"

CratercrestTown_Text_CourtneyIntro:
	.string "So the little brat is up to the challenge,\n"
	.string "huh?\p"
	.string "No matter.\p"
	.string "I'll show you the full might that Team\n"
	.string "Magma has to offer!$"

CratercrestTown_Text_CourtneyDefeat:
	.string "What!? How were you able to best me?$"

CratercrestTown_Text_CourtneyPostBattle:
	.string "Grr… Team Magma will NEVER let you meddle\n"
	.string "in our affairs!$"

CratercrestTown_Text_ImNeverLeaving:
	.string "Life moves so slowly here…\p"
	.string "I never wanna leave.$"

CratercrestTown_Text_ICameToCamp:
	.string "I came to camp on Meteor Peak, but I\n"
	.string "forgot my snow coat!\p"
	.string "Do you know where I can buy one?$"

CratercrestTown_Text_FertileLand:
	.string "Ancient eruptions from Mt. Chimney gave\n"
	.string "us nutrient-rich land.\p"
	.string "Today, we grow the most food in all of\n"
	.string "Hoenn!$"

CratercrestTown_Text_Snowboarding:
	.string "Mt. Meteor is a world-renowned spot for\n"
	.string "snowboarding.\p"
	.string "Top boarders visit so often, it's almost\n"
	.string "like they're residents themselves!$"

CratercrestTown_Text_WelcomeToCratercrest:
	.string "Cratercrest Town\p"
	.string "The winter sport capital of Hoenn!$"

CratercrestTown_Text_SgtSneasel:
	.string "Sgt. Sneasel's\n"
	.string "Old Town Store\p"
	.string "Celebrating our 150th\n"
	.string "anniversary!$"

CratercrestTown_Text_MagmaGruntPass1:
	.string "We just tunneled our way through our\n"
	.string "old Jagged hideout.\p"
	.string "Don't mess this up for us!$"

CratercrestTown_Text_MagmaGruntPass2:
	.string "Cratercrest is ours!$"

CratercrestTown_Text_MagmaGruntPeak1:
	.string "There's a lot of strong POKéMON on\n"
	.string "Meteor Peak…$"

CratercrestTown_Text_MagmaGruntPeak2:
	.string "Once we're settled into the new base,\n"
	.string "we'll capture the toughest POKéMON on\l"
	.string "the mountaintops!$"

CratercrestTown_Text_MagmaGruntSgtSneasel:
	.string "Do you think I could buy lava cookies\n"
	.string "at Sargent Sneasel's General Store?$"

CratercrestTown_Text_MagmaGruntHouse1:
	.string "Nobody leaves while we're moving base.\p"
	.string "Scram!$"

CratercrestTown_Text_MagmaGruntHouse2:
	.string "Don't you have something better to be\n"
	.string "doing than screwing with us?$"
	