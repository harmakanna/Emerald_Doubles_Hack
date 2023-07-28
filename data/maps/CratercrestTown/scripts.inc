CratercrestTown_MapScripts::
	.byte 0

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

CratercrestTown_EventScript_ChimneysInnSign::
	msgbox CratercrestTown_Text_ChimneysInn, MSGBOX_SIGN
	end

CratercrestTown_EventScript_WelcomeSign::
	msgbox CratercrestTown_Text_WelcomeToCratercrest, MSGBOX_SIGN
	end

CratercrestTown_Text_ImNeverLeaving:
	.string "Life moves so slowly here...\p"
	.string "I never wanna leave.$"

CratercrestTown_Text_ICameToCamp:
	.string "I came to camp on Meteor Peak,\n"
	.string "but I forgot my snow coat!\p"
	.string "Do you know where\n"
	.string "I can buy one?$"

CratercrestTown_Text_FertileLand:
	.string "Ancient eruptions from Mt. Chimney\n"
	.string "gave us such fertile land today.\p"
	.string "Despite our location, we grow\n"
	.string "the most food in all of Hoenn!$"

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

CratercrestTown_Text_ChimneysInn:
	.string "Chimney's Inn$"
