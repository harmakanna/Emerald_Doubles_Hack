MtMeteor_1F_1R_MapScripts::
	.byte 0

MtMeteor_1F_1R_EventScript_Kingston::
	trainerbattle_single TRAINER_KINGSTON, MtMeteor_1F_1R_Text_KingstonIntro, MtMeteor_1F_1R_Text_KingstonDefeat
	msgbox MtMeteor_1F_1R_Text_KingstonPostBattle, MSGBOX_AUTOCLOSE
	end

MtMeteor_1F_1R_EventScript_Opal::
	trainerbattle_single TRAINER_OPAL, MtMeteor_1F_1R_Text_OpalIntro, MtMeteor_1F_1R_Text_OpalDefeat
	msgbox MtMeteor_1F_1R_Text_OpalPostBattle, MSGBOX_AUTOCLOSE
	end

MtMeteor_1F_1R_Text_KingstonIntro:
	.string "Some trainers test their skills in\n"
	.string "Ever Grande City, but for me,\p"
	.string "Mt. Meteor is by far the best\n"
	.string "place to hone my skills!$"

MtMeteor_1F_1R_Text_KingstonDefeat:
	.string "I will learn from this loss and\n"
	.string "become stronger!$"

MtMeteor_1F_1R_Text_KingstonPostBattle:
	.string "Mt. Meteor is known for two things -\n"
	.string "the rare POKéMON who make their home\l"
	.string "here and the strong battlers who test\l"
	.string "their might against one another!$"

MtMeteor_1F_1R_Text_OpalIntro:
	.string "I've been training in these caves\n"
	.string "for sixty years!\p"
	.string "There's nothing you can hit me with\n"
	.string "that I won't expect!$"

MtMeteor_1F_1R_Text_OpalDefeat:
	.string "Oh… I didn't expect that…$"

MtMeteor_1F_1R_Text_OpalPostBattle:
	.string "Even after sixty years, I'm still\n"
	.string "being surprised…\p"
	.string "Fufufu… You younguns have changed\n"
	.string "so much since my prime!$"
