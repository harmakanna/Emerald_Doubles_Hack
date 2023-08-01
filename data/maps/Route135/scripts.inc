Route135_MapScripts::
	.byte 0

Route135_EventScript_Luca::
	trainerbattle_single TRAINER_LUCA, Route135_Text_LucaIntro, Route135_Text_LucaDefeat
	msgbox Route135_Text_LucaPostBattle, MSGBOX_AUTOCLOSE
	end

Route135_EventScript_Adrian::
	trainerbattle_single TRAINER_ADRIAN, Route135_Text_AdrianIntro, Route135_Text_AdrianDefeat
	msgbox Route135_Text_JackPostBattle, MSGBOX_AUTOCLOSE
	end

Route135_EventScript_Kristi::
	trainerbattle_single TRAINER_KRISTI, Route135_Text_KristiIntro, Route135_Text_KristiDefeat
	msgbox Route135_Text_KristiPostBattle, MSGBOX_AUTOCLOSE
	end
