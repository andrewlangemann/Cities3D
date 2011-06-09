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
#include "TransientConnectCommand.h"
#include "GameEngine.h"
#include "INetworkEngine.h"
#include "Controller.h"
#include "GameEngine.h"
#include "IRuleEngine.h"
#include "DataObject.h"
#include "NetworkPlayers.h"

//---------------------------- TYPEDEFS         -----------------------------//
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//---------------------------- STATICS          -----------------------------//

//---------------------------- PUBLIC           -----------------------------//
void TransientConnectCommand::Execute()
{
	NET.StartClient(mAddress, mPlayer);

	// If we successfully connected, join the game.
	if(true == NET.IsConnected())
	{
		// Get things going.
		RULE.AsynchExecute(shRuleStartConnectCommandGame, DataObject());

		// Immediately check to see if this player takes any of the seats
		// in the game.
		RULE.Execute(shNetworkRuleTakeSeat, 
			DataObject(NET.Players().GetThisPlayer(), false));
	}
	// We did not connect, even after 3 tries.  Report to the site as a
	// disconnect.
	else
	{
		HashString command = HashString::Format(shDisconnectCmd.c_str(),
			mGameID, mPlayer.Id());
		Controller::get().Transmit(shEventSynchronize, command);
	}
}

//---------------------------- PROTECTED        -----------------------------//

//---------------------------- PRIVATE          -----------------------------//
