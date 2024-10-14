MeteorPeak_RestHouse_MapScripts::
	.byte 0

MeteorPeak_RestHouse_WelcomeToChimneysInn::
	lock
	faceplayer
	msgbox MeteorPeak_RestHouse_Text_WelcomeToChimneysInn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MeteorPeak_RestHouse_EventScript_Heal
	goto_if_eq VAR_RESULT, NO, MeteorPeak_RestHouse_EventScript_NoHeal
	end

MeteorPeak_RestHouse_EventScript_Heal::
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	release
	end

MeteorPeak_RestHouse_EventScript_NoHeal::
	msgbox MeteorPeak_RestHouse_Text_IfYouSoDesire, MSGBOX_DEFAULT
	release
	end

MeteorPeak_RestHouse_MyBestYears::
	msgbox MeteorPeak_RestHouse_Text_MyBestYears, MSGBOX_NPC
	end

MeteorPeak_RestHouse_GoingOutSkiing::
	msgbox MeteorPeak_RestHouse_Text_GoingOutSkiing, MSGBOX_NPC
	end

MeteorPeak_RestHouse_NothingLikeANiceWarmBed::
	msgbox MeteorPeak_RestHouse_Text_NothingLikeANiceWarmBed, MSGBOX_NPC
	end

MeteorPeak_RestHouse_Text_WelcomeToChimneysInn:
	.string "Welcome to Chimney's Inn!\p"
	.string "All our beds are full now, but we're\n"
	.string "renovating soon to increase our space.\p
	.string "You can still quickly rest if you like.$"

MeteorPeak_RestHouse_Text_IfYouSoDesire:
	.string "Of course. If you need a quick nap, feel\n"
	.string "free to come by.$"
	
MeteorPeak_RestHouse_Text_MyBestYears:
	.string "I knew I shouldn't've climbed the\n"
	.string "mountain.\p"
	.string "I'm not as fit as I once was…$"

MeteorPeak_RestHouse_Text_GoingOutSkiing:
	.string "This inn is the place to be if you want\n"
	.string "to ski!\p"
	.string "You have to book beds so far in advance!$"

MeteorPeak_RestHouse_Text_NothingLikeANiceWarmBed:
	.string "Ah, nothing like a nice warm\n"
	.string "bed after a chilly hike!$"
