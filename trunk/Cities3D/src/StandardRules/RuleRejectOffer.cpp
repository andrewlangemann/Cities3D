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

//---------------------------- TYPEDEFS         -----------------------------//
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//---------------------------- STATICS          -----------------------------//

//---------------------------- RULES            -----------------------------//

//---------------------------------------------------------------------------//
// Class: RuleRejectOffer
// 
// Handles one player rejecting a trade offer.
//
// Derived From:
//     <Rule>
//
// Project:
//     <StandardRules>
//
// RuleSet:
//     <Standard>
//
class RuleRejectOffer : public Rule
{
public:
	virtual void Execute(const DataObject &object)
	{
		wxASSERT(1 <= object.numItems());
		
		wxInt32 player = object.read<wxInt32>();
		wxASSERT(-1 != player);

		RULE.Execute(shRulePlaySound, DataObject(SOUND_TRADE_REJECT));

		Controller::get().Transmit(shEventRejectOffer, player);
	}
};

IMPLEMENT_RULE(RuleRejectOffer, STANDARD)
