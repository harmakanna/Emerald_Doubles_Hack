.set LOCALID_NURSE, 1

CratercrestTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CratercrestTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

CratercrestTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_CRATERCREST_TOWN
	end

CratercrestTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

CratercrestTown_PokemonCenter_1F_EventScript_SoBeautiful::
	msgbox CratercrestTown_PokemonCenter_1F_Text_SoBeautiful, MSGBOX_NPC
	end

CratercrestTown_PokemonCenter_1F_EventScript_MeteorShards::
	msgbox CratercrestTown_PokemonCenter_1F_Text_MeteorShards, MSGBOX_NPC
	end

CratercrestTown_PokemonCenter_1F_EventScript_WereGaming::
	msgbox CratercrestTown_PokemonCenter_1F_Text_WereGaming, MSGBOX_NPC
	end

CratercrestTown_PokemonCenter_1F_Text_SoBeautiful:
	.string "The nature… The POKéMON…\p"
	.string "It's all so beautiful!\p"
	.string "You could never see something\n"
	.string "like this in Kanto!$"

CratercrestTown_PokemonCenter_1F_Text_MeteorShards:
	.string "Those meteor shards in the\n"
	.string "center of town?\p"
	.string "They're remnants of the meteor\n"
	.string "which created our town.\p"
	.string "I wonder how old they are…$"

CratercrestTown_PokemonCenter_1F_Text_WereGaming:
	.string "Shut up, we're gaming!$"
