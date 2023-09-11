FallarborTown_CozmosHouse_MapScripts::
	.byte 0

FallarborTown_CozmosHouse_EventScript_ProfCozmo::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM27, FallarborTown_CozmosHouse_EventScript_GaveMeteorite
	checkitem ITEM_METEORITE
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite::
	call_if_unset FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_NoticeMeteorite
	call_if_set FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_AskForMeteorite
	goto_if_eq VAR_RESULT, NO, FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite
	msgbox FallarborTown_CozmosHouse_Text_PleaseUseThisTM, MSGBOX_DEFAULT
	giveitem ITEM_TM27
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setvar VAR_0x8004, ITEM_METEORITE
	call Common_EventScript_PlayerHandedOverTheItem
	setflag FLAG_RECEIVED_TM27
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_NoticeMeteorite::
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
	msgbox FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt, MSGBOX_YESNO
	return

FallarborTown_CozmosHouse_EventScript_AskForMeteorite::
	msgbox FallarborTown_CozmosHouse_Text_MayIHaveMeteorite, MSGBOX_YESNO
	return

FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite::
	setflag FLAG_TEMP_2
	msgbox FallarborTown_CozmosHouse_Text_CrushedWithDisappointment, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_GaveMeteorite::
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosWife::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM27, FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
	msgbox FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmoIsHappy::
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosKid::
	lock
	faceplayer
	goto_if_set FLAG_COZMOS_KID_EVOLVED_EEVEE, FallarborTown_CozmosHouse_EventScript_EeveesTheBest
	goto_if_set FLAG_SPOKE_TO_COZMOS_KID, FallarborTown_CozmosHouse_EventScript_IWantToSeeEevee
	setflag FLAG_SPOKE_TO_COZMOS_KID
	msgbox FallarborTown_CozmosHouse_Text_NotResponsibleEnough, MSGBOX_DEFAULT
	goto FallarborTown_CozmosHouse_EventScript_IWantToSeeEevee
	end

FallarborTown_CozmosHouse_EventScript_IWantToSeeEevee::
	msgbox FallarborTown_CozmosHouse_Text_PleaseShowMe, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	lock
	faceplayer
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_CozmosHouse_EventScript_ExitSelect
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EEVEE, FallarborTown_CozmosHouse_EventScript_EvolveIntoWho
	msgbox FallarborTown_CozmosHouse_Text_ThatsNotEevee, MSGBOX_DEFAULT
	closemessage
	release
	end

FallarborTown_CozmosHouse_EventScript_EvolveIntoWho:: @ 8265284
	msgbox FallarborTown_CozmosHouse_Text_YouHaveAnEevee, MSGBOX_DEFAULT
	message FallarborTown_CozmosHouse_Text_WhatShouldEvolve
	waitmessage
	scrollingmultichoice 0, 0, 0, 6, TRUE
	switch VAR_RESULT
	case 0, FallarborTown_CozmosHouse_EventScript_ThunderStone
	case 1, FallarborTown_CozmosHouse_EventScript_WaterStone
	case 2, FallarborTown_CozmosHouse_EventScript_FireStone
	case 3, FallarborTown_CozmosHouse_EventScript_SunStone
	case 4, FallarborTown_CozmosHouse_EventScript_MoonStone
	case 5, FallarborTown_CozmosHouse_EventScript_LeafStone
	case 6, FallarborTown_CozmosHouse_EventScript_IceStone
	case 7, FallarborTown_CozmosHouse_EventScript_ShinyStone
	case MULTI_B_PRESSED, FallarborTown_CozmosHouse_EventScript_ExitSelect
	end

FallarborTown_CozmosHouse_EventScript_WaterStone::
	tryspecialevo EVO_VAPOREON_FORCED, FALSE, FALSE
	setflag FLAG_COZMOS_KID_EVOLVED_EEVEE
	goto FallarborTown_CozmosHouse_EventScript_EndEeveeEvo
	end

FallarborTown_CozmosHouse_EventScript_ThunderStone::
	tryspecialevo EVO_JOLTEON_FORCED, FALSE, FALSE
	setflag FLAG_COZMOS_KID_EVOLVED_EEVEE
	goto FallarborTown_CozmosHouse_EventScript_EndEeveeEvo
	end

FallarborTown_CozmosHouse_EventScript_FireStone::
	tryspecialevo EVO_FLAREON_FORCED, FALSE, FALSE
	setflag FLAG_COZMOS_KID_EVOLVED_EEVEE
	goto FallarborTown_CozmosHouse_EventScript_EndEeveeEvo
	end

FallarborTown_CozmosHouse_EventScript_SunStone::
	tryspecialevo EVO_ESPEON_FORCED, FALSE, FALSE
	setflag FLAG_COZMOS_KID_EVOLVED_EEVEE
	goto FallarborTown_CozmosHouse_EventScript_EndEeveeEvo
	end

FallarborTown_CozmosHouse_EventScript_MoonStone::
	tryspecialevo EVO_UMBREON_FORCED, FALSE, FALSE
	setflag FLAG_COZMOS_KID_EVOLVED_EEVEE
	goto FallarborTown_CozmosHouse_EventScript_EndEeveeEvo
	end

FallarborTown_CozmosHouse_EventScript_LeafStone::
	tryspecialevo EVO_LEAFEON_FORCED, FALSE, FALSE
	setflag FLAG_COZMOS_KID_EVOLVED_EEVEE
	goto FallarborTown_CozmosHouse_EventScript_EndEeveeEvo
	end

FallarborTown_CozmosHouse_EventScript_IceStone::
	tryspecialevo EVO_GLACEON_FORCED, FALSE, FALSE
	setflag FLAG_COZMOS_KID_EVOLVED_EEVEE
	goto FallarborTown_CozmosHouse_EventScript_EndEeveeEvo
	end

FallarborTown_CozmosHouse_EventScript_ShinyStone::
	tryspecialevo EVO_SYLVEON_FORCED, FALSE, FALSE
	setflag FLAG_COZMOS_KID_EVOLVED_EEVEE
	goto FallarborTown_CozmosHouse_EventScript_EndEeveeEvo
	end

FallarborTown_CozmosHouse_EventScript_EndEeveeEvo::
	closemessage
	release
	end

FallarborTown_CozmosHouse_EventScript_EeveesTheBest::
	msgbox FallarborTown_CozmosHouse_Text_EeveesSoCute, MSGBOX_DEFAULT
	closemessage
	release
	end

FallarborTown_CozmosHouse_EventScript_ExitSelect::
	msgbox FallarborTown_CozmosHouse_Text_AreYouSure, MSGBOX_DEFAULT
	closemessage
	release
	end

FallarborTown_CozmosHouse_EventScript_NotAnEevee::
	msgbox FallarborTown_CozmosHouse_Text_ThatsNotEevee, MSGBOX_DEFAULT
	closemessage
	release
	end

FallarborTown_CozmosHouse_Text_NotResponsibleEnough:
	.string "Eevee is the best!\p"
	.string "My mom and dad won't let me get one\n"
	.string "though, they say I'm not responsible\l"
	.string "enough for a Pokémon yet?\p"
	.string "What lame-os!$"

FallarborTown_CozmosHouse_Text_PleaseShowMe:
	.string "Hey, if you have an Eevee, can you\n"
	.string "please please please show me?$"

FallarborTown_CozmosHouse_Text_ThatsNotEevee:
	.string "That's not an Eevee…$"

FallarborTown_CozmosHouse_Text_YouHaveAnEevee:
	.string "Wow! You have an Eevee?\p"
	.string "I've always wanted to see one evolve\n"
	.string "in real life!\p"
	.string "If you want, I can use one of my\n"
	.string "dad's evolution stones.\p"
	.string "Don't worry, he won't notice it's\n"
	.string "missing!$"

FallarborTown_CozmosHouse_Text_WhatShouldEvolve:
	.string "Who should Eevee evolve into?$"

FallarborTown_CozmosHouse_Text_EeveesSoCute:
	.string "Eevee's so cute!\n"
	.string "Isn't it the best?$"

FallarborTown_CozmosHouse_Text_AreYouSure:
	.string "Are you sure?\n"
	.string "I so wanted to see Eevee evolve…$"

FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow:
	.string "PROF. COZMO: Oh…\n"
	.string "I never should have let myself be\l"
	.string "conned into telling TEAM MAGMA where\l"
	.string "you can find METEORITES…\p"
	.string "That METEORITE from METEOR FALLS…\n"
	.string "It's never going to be mine now…$"

FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt:
	.string "Oh!\n"
	.string "Hah?\p"
	.string "That item…\p"
	.string "Could it be?\p"
	.string "Is it the METEORITE that TEAM MAGMA\n"
	.string "took from METEOR FALLS?\p"
	.string "Please, may I have it?\p"
	.string "I'm not asking for it for free.\n"
	.string "How about in exchange for this TM?$"

FallarborTown_CozmosHouse_Text_PleaseUseThisTM:
	.string "PROF. COZMO: This TM, it represents\n"
	.string "my feeling of gratitude.\l"
	.string "Please use it!$"

FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch:
	.string "PROF. COZMO: Oh, I can't believe it.\n"
	.string "This is really, really great!\p"
	.string "This is really going to help my research!$"

FallarborTown_CozmosHouse_Text_CrushedWithDisappointment:
	.string "PROF. COZMO: Oh, but…\n"
	.string "I'm crushed with disappointment…$"

FallarborTown_CozmosHouse_Text_MayIHaveMeteorite:
	.string "PROF. COZMO: Please, may I have that\n"
	.string "METEORITE?\p"
	.string "I'm not asking for it for free.\n"
	.string "How about in exchange for this TM?$"

FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls:
	.string "PROF. COZMO went off to METEOR FALLS\n"
	.string "on ROUTE 114 with some people from\l"
	.string "TEAM MAGMA.$"

FallarborTown_CozmosHouse_Text_FeelSorryForCozmo:
	.string "Poor PROF. COZMO…\n"
	.string "He's so depressed… I feel sorry for him.$"

FallarborTown_CozmosHouse_Text_CozmoIsSoHappy:
	.string "Look at PROF. COZMO…\n"
	.string "He's so happy! I think it's cute.$"
