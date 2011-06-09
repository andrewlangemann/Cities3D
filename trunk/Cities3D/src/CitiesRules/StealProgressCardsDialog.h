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
#pragma once

#include "style.h"	//READ THIS BEFORE MAKING ANY CHANGES TO THIS FILE!!!

//---------------------------- SYSTEM INCLUDES  -----------------------------//

//---------------------------- USER INCLUDES    -----------------------------//
#include "CardsDialog.h"

//---------------------------- DEFINES          -----------------------------//

//---------------------------- TYPEDEFS         -----------------------------//

//---------------------------- CLASSES          -----------------------------//

//---------------------------------------------------------------------------//
// Class: wxStealProgressCardsDialog
// 
// Displays progress cards in a dialog.
//
// Derived From:
//     <wxCardsDialog>
//
// Project:
//     <CitiesRules>
//
// Include:
//     StealProgressCardsDialog.h
//
class wxStealProgressCardsDialog : public wxCardsDialog
{
	//-----------------------------------------------------------------------//
	// Section: Public
	//
public:
	//-----------------------------------------------------------------------//
	// Group: Constructors
	//

	//-----------------------------------------------------------------------//
	// Constructor: wxStealProgressCardsDialog
	//
	// The wxStealProgressCardsDialog constructor.
	//
	// Parameters:
	//     parent - The parent window.
	//     game - The current <Game>.
	//     victim - The index of the victim.
	//
	wxStealProgressCardsDialog(wxWindow *parent, boost::weak_ptr<Game> game,
		wxInt32 victim);

	//-----------------------------------------------------------------------//
	// Section: Private
	//
private:
	//-----------------------------------------------------------------------//
	// Function: OnPlayCard
	//
	// Destroy the window on a card selection.
	//
	virtual void OnPlayCard()
	{
		Destroy();
	}
};

//---------------------------- PROTOTYPES       -----------------------------//

