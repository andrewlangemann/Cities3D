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
#include "CornerObject.h"
#include "Controller.h"
#include "KnightObject.h"
#include "IRuleEngine.h"

//---------------------------- TYPEDEFS         -----------------------------//
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//---------------------------- STATICS          -----------------------------//

//---------------------------- RULES            -----------------------------//

//---------------------------------------------------------------------------//
// Class: RuleSelectAttackKnight
// 
// Removes the selected knight and sets things up for the player to select
// where they want to attack.
//
// Derived From:
//     <Rule>
//
// Project:
//     <CitiesRules>
//
// RuleSet:
//     <Cities>
//
// Rules Called:
//     <RuleRestartTurnAttackKnightPlacement>
//
// Game State:
//     TurnAttackKnightPlacement
//
class RuleSelectAttackKnight : public Rule
{
public:
	virtual void Execute(const DataObject &object)
	{
		// Get the id of the knight they picked.
		wxInt32 id = object.read<wxInt32>();

		// Find that ship in the player's list and remove it.
		PlayerGame::CornerObjectArray knights = 
			playerGame().getCornerObjects(shKnights);

		PlayerGame::CornerObjectArray::const_iterator it, 
			itEnd = knights.end();
		for(it = knights.begin(); it != itEnd; ++it)
		{
			CornerObjectPtr object = (*it);

			if(object->id() == id)
			{
				break;
			}
		}

		wxASSERT(itEnd != it);

		KnightObject* knight = static_cast<KnightObject*>((*it).get());

		// Save off the original location and turn so it can be recreated
		// after the attack.
		gameData<wxInt32>(shAttackKnightTile) = knight->tile1().first;
		gameData<wxInt32>(shAttackKnightCorner) = knight->tile1().second;
		gameData<wxInt32>(shAttackKnightTurn) = knight->turn();
		gameData<wxInt32>(shAttackKnightStrength) = knight->strength();
		gameData<wxInt32>(shAttackKnightUpgradeTurn) = knight->upgrade_turn();

		// Remove the object from the player.
		playerGame().removeCornerObject(shKnights, (*it));

        Controller::get().Transmit(shEventDirty, 0);

		RULE.Execute(shRulePlaySound, DataObject(SOUND_ATTACK_KNIGHT));

		// This is a new game state.
		gameData<HashString>(shState) = shTurnAttackKnightPlacement;

		// Just use the restart logic to set things up.
		RULE.Execute(shRuleRestartTurnAttackKnightPlacement, DataObject());
	}
};

IMPLEMENT_RULE(RuleSelectAttackKnight, CITIES)
