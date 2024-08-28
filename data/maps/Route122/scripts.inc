.set LOCALID_GRUNT, 1

Route122_MapScripts::
	.byte 0

Route122_EventScript_AquaGrunt::
	lock
	applymovement LOCALID_GRUNT, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Route122_Text_AquaGrunt, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route122_Text_AquaGrunt:
.string "Grrr…\p"
.string "Archie left me behind to make\n"
.string "sure no punks like you got\l"
.string "in our way at the summit…\p"
.string "So beat it!$"
