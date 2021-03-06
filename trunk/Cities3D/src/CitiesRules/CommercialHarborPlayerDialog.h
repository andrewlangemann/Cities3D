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
#include "PlayerSelectionDialog.h"

//---------------------------- DEFINES          -----------------------------//

//---------------------------- TYPEDEFS         -----------------------------//

//---------------------------- CLASSES          -----------------------------//

//---------------------------------------------------------------------------//
// Class: wxCommercialHarborPlayerDialog
// 
// Displays a dialog where the user can select a player to trade with the
// commercial harbor card.
//
// Derived From:
//     <wxPlayerSelectionDialog>
//
// Project:
//     <Cities3D>
//
// Include:
//     CommercialHarborPlayerDialog.h
//
class wxCommercialHarborPlayerDialog : public wxPlayerSelectionDialog
{
	//-----------------------------------------------------------------------//
	// Section: Public
	//
public:
	//-----------------------------------------------------------------------//
	// Group: Constructors
	//

	//-----------------------------------------------------------------------//
	// Constructor: wxCommercialHarborPlayerDialog
	//
	// The wxCommercialHarborPlayerDialog constructor.
	//
	// Parameters:
	//     parent - The parent window of the dialog.
	//     game - The current <Game>.
	//
	wxCommercialHarborPlayerDialog(wxWindow *parent, 
		boost::weak_ptr<Game> game);
};

//---------------------------- PROTOTYPES       -----------------------------//

