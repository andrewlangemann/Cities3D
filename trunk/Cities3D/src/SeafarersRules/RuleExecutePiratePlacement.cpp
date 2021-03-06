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
#include "Controller.h"
#include "IRuleEngine.h"

//---------------------------- TYPEDEFS         -----------------------------//
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//---------------------------- STATICS          -----------------------------//

//---------------------------- RULES            -----------------------------//

//---------------------------------------------------------------------------//
// Class: RuleExecutePiratePlacement
// 
// Places the pirate at the given tile.
//
// Derived From:
//     <Rule>
//
// Project:
//     <SeafarersRules>
//
// RuleSet:
//     <Seafarers>
//
class RuleExecutePiratePlacement : public Rule
{
public:
	virtual void Execute(const DataObject &object)
	{
		// Clear out all tile flags.
		RULE.Execute(shRuleResetTileFlags, DataObject());

		// Move the pirate on the board.
		RULE.Execute(shRulePlacePirate, object);

		RULE.Execute(shRulePlaySound, DataObject(SOUND_PLACE_PIRATE));

		// Steal a card.
		RULE.Execute(shRulePirateSteal, object);
	}
};

IMPLEMENT_RULE(RuleExecutePiratePlacement, SEAFARERS)
