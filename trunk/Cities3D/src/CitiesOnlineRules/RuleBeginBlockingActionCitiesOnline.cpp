/*
 *  Cities3D - Copyright (C) 2001-2009 Jason Fugate (saladyears@gmail.com)
 * 
 *  This program is free software; you can redistribute it and/or modify it 
 *  under the terms of the GNU General Public License as published by the Free 
 *  Software Foundation; either version 2 of the License, or (at your option) 
 *  any later version.
 * 
 *  This program is distributed in the hope that it will be useful, but 
 *  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 *  or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 *  for more details.
 */
#include "stdwx.h"
#include "style.h"	//READ THIS BEFORE MAKING ANY CHANGES TO THIS FILE!!!

//---------------------------- SYSTEM INCLUDES  -----------------------------//

//---------------------------- USER INCLUDES    -----------------------------//
#include "Rule.h"
#include "RuleSetDatabase.h"

//---------------------------- TYPEDEFS         -----------------------------//
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//---------------------------- STATICS          -----------------------------//

//---------------------------- RULES            -----------------------------//

//---------------------------------------------------------------------------//
// Class: RuleBeginBlockingActionCitiesOnline
// 
// 
//
// Derived From:
//     <Rule>
//
// Project:
//     <CitiesRules>
//
// RuleSet:
//     <CitiesOnline>
//
// Mixin To:
//     <RuleBeginBlockingAction>
//
class RuleBeginBlockingActionCitiesOnline : public Rule
{
public:
	virtual void Execute(const DataObject &object)
	{
        wxInt32 player = object.read<wxInt32>();

        DataObject input(-1), output;
        RULE.Decide(shLogicIsThisPlayer, input, output);

        // If it's the player at this machine, start their passive countdown
        // timer.
        if(player == output.read<wxInt32>(1))
        {
            RULE.Execute(shRuleResetPassiveTime, DataObject(true));

            // If this player isn't the current player, notify them that they 
            // need to do something.
            if(false == output.read<bool>())
            {
                // Play a sound.
                RULE.Execute(shRulePlaySound, DataObject(SOUND_YOU_NEED_TO_DO_SOMETHING));
                
                Controller::get().Transmit(shEventRequestUserAttention, 0);
            }
        }

        // Mark this player as being on a passive turn timer.
        playerGameData<wxInt32>(shPassiveTurnTimer, player) = TRUE;
	}
};

IMPLEMENT_RULE_MIXIN(RuleBeginBlockingActionCitiesOnline, RuleBeginBlockingAction, 
    CITIESONLINE)
