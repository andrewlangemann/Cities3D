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
#include "Cities3DSocket.h"
#include "Controller.h"

//---------------------------- TYPEDEFS         -----------------------------//
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//---------------------------- STATICS          -----------------------------//

//---------------------------- RULES            -----------------------------//

//---------------------------------------------------------------------------//
// Class: NetworkRuleServerConnection
// 
// Handles a new connection to the server.
//
// Derived From:
//     <Rule>
//
// Project:
//     <NetworkRules>
//
// RuleSet:
//     <Network>
//
// Transmits To:
//     eventServerConnection
//
class NetworkRuleServerConnection : public Rule
{
public:
	virtual void Execute(const DataObject &object)
	{
		wxEvtHandler *handler = object.read<wxEvtHandler *>();
		wxCities3DSocket *socket = object.read<wxCities3DSocket *>(1);
		Controller::get().Transmit(shEventServerConnection, 
			DataObject(handler, socket, GetGame()));
	}
};

IMPLEMENT_RULE(NetworkRuleServerConnection, NETWORK)
