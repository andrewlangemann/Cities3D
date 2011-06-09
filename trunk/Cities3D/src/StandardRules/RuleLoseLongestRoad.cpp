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
#include "IUndoable.h"
#include "RuleSetDatabase.h"
#include "Controller.h"
#include "IRuleEngine.h"

//---------------------------- TYPEDEFS         -----------------------------//
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//---------------------------- STATICS          -----------------------------//

//---------------------------- RULES            -----------------------------//

//---------------------------------------------------------------------------//
// Class: RuleLoseLongestRoad
// 
// Removes Longest Road from the given player.
//
// Derived From:
//     <Rule>
//     <IUndoable>
//
// Project:
//     <StandardRules>
//
// RuleSet:
//     <Standard>
//
class RuleLoseLongestRoad 
	: public Rule
	, public IUndoable
{
public:
	virtual void Execute(const DataObject &object)
	{
		wxInt32 player = object.read<wxInt32>();

		gameData<wxInt32>(shLongestRoadPlayer) = -1;

		// Losing Longest Road subtracts two points from the player.
		RULE.Execute(shRuleAdjustPoints, DataObject(player, -2));

		RULE.Execute(shRuleUpdateNetworkUI, DataObject(stLosesLongestRoad, 
            player));
	}

	virtual void Unexecute(const DataObject &)
	{
		wxASSERT(false);
	}

	virtual bool CanUndo() const
	{
		// Changing Longest Road state can never be undone.
		return false;
	}
};

IMPLEMENT_RULE(RuleLoseLongestRoad, STANDARD)
