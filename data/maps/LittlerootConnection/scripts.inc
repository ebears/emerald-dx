LittlerootConnection_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootConnection_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, LittlerootConnection_OnResume
	.byte 0

LittlerootConnection_OnTransition:
	special GetEncounterTime
	goto_if_eq VAR_RESULT, 3, LittlerootConnection_OnTransition_Night
	goto_if_eq VAR_RESULT, 2, LittlerootConnection_OnTransition_Evening
	goto_if_eq VAR_RESULT, 1, LittlerootConnection_OnTransition_Day
	goto_if_eq VAR_RESULT, 0, LittlerootConnection_OnTransition_Morning
	end

LittlerootConnection_OnTransition_Morning:
	setvar VAR_DAYNIGHT, 0
	end

LittlerootConnection_OnTransition_Day:
	setvar VAR_DAYNIGHT, 1
	end

LittlerootConnection_OnTransition_Evening:
	setvar VAR_DAYNIGHT, 2
	end

LittlerootConnection_OnTransition_Night:
	setvar VAR_DAYNIGHT, 3
	end

LittlerootConnection_OnResume:
	special GetEncounterTime
	goto_if_eq VAR_RESULT, 3, LittlerootConnection_OnResume_Night
	goto_if_eq VAR_RESULT, 2, LittlerootConnection_OnResume_Evening
	goto_if_eq VAR_RESULT, 1, LittlerootConnection_OnResume_Day
	goto_if_eq VAR_RESULT, 0, LittlerootConnection_OnResume_Morning
	end

LittlerootConnection_OnResume_Night:
	setvar VAR_DAYNIGHT, 3
	end
	
LittlerootConnection_OnResume_Evening:
	setvar VAR_DAYNIGHT, 2
	end

LittlerootConnection_OnResume_Day:
	setvar VAR_DAYNIGHT, 1
	end
	
LittlerootConnection_OnResume_Morning:
	setvar VAR_DAYNIGHT, 0
	end
