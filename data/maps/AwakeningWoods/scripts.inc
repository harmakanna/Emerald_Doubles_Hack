AwakeningWoods_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AwakeningWoods_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, AwakeningWoods_OnResume
	.byte 0

AwakeningWoods_OnTransition:
	setflag FLAG_LANDMARK_AWAKENING_WOOD
	end

AwakeningWoods_OnResume: @ 81F53FC
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, AwakeningWoods_EventScript_TryRemoveKecleon
	end

AwakeningWoods_EventScript_TryRemoveKecleon:: @ 81F4439
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

AwakeningWoods_EventScript_RainTrigger::
	@ setweather WEATHER_RAIN
	@ doweather
	end

AwakeningWoods_EventScript_SunTrigger::
	@ setweather WEATHER_SHADE
	@ doweather
	end

AwakeningWoods_EventScript_RemoveKecleonObject:: @ 81F5406
	compare VAR_0x8009, 0
	call_if_eq AwakeningWoods_EventScript_RemoveKecleon
	compare VAR_0x8009, 1
	call_if_eq AwakeningWoods_EventScript_RemoveKecleon
	compare VAR_0x8009, 2
	call_if_eq AwakeningWoods_EventScript_RemoveKecleon
	compare VAR_0x8009, 3
	call_if_eq AwakeningWoods_EventScript_RemoveKecleon
	compare VAR_0x8009, 4
	call_if_eq AwakeningWoods_EventScript_RemoveKecleon
	compare VAR_0x8009, 5
	call_if_eq AwakeningWoods_EventScript_RemoveKecleon
	return

AwakeningWoods_EventScript_RemoveKecleon:: @ 81F5460
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Common_EventScript_NopReturn
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

AwakeningWoods_Text_PhoebeAboutTheForest:
	.string "Phoebe: A really long time ago,\n"
	.string "this forest was a part of\l"
	.string "Fortree City.\p"
	.string "Because of how in-tune they are\n"
	.string "with the nearby nature, Celebi\l"
	.string "took on the role of the city's\l"
	.string "protector.\p"
	.string "But over time, the people noticed\n"
	.string "Celebi looking frailer and their\l"
	.string "power growing weaker.\p"
	.string "Realizing that the city's\n"
	.string "expansion through the forest really\l"
	.string "hurt Celebi, they demolished their\l"
	.string "settlement here.\p"
	.string "Now, they're the leading force in\n"
	.string "wildlife preservation in Hoenn!\p"
	.string "They only let in us Elites,\n"
	.string "Prof. Birch, forest rangers,\l"
	.string "and my gram and gramp.\p"
	.string "Pretty awesome, huh? It's the\n"
	.string "perfect place to commune with\l"
	.string "Pokémon!$"

AwakeningWoods_Text_ShrineMysticalAura:
	.string "The shrine gives off\n"
	.string "a mystical aura.$"

AwakeningWoods_Text_SeemsToBeASlot:
	.string "There seems to be a slot for\n"
	.string "a shrine offering…$"

AwakeningWoods_Text_InsertPureIncense:
	.string "Would you like to place the\n"
	.string "Pure Incense in the slot?$"

AwakeningWoods_Text_DidntInsertPureIncense:
	.string "You didn't insert the Incense.\n"
	.string "You feel a strange air of\l"
	.string "disappointment…$"

AwakeningWoods_Text_IncenseInShrine:
	.string "The shrine seems strangely\n"
	.string "revitalized…$"
