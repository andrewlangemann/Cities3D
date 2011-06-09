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
#include "PlayerElement.h"

//---------------------------- DEFINES          -----------------------------//

//---------------------------- TYPEDEFS         -----------------------------//
class wxSettlersGLCanvas;

//---------------------------- CLASSES          -----------------------------//

//---------------------------------------------------------------------------//
// Class: PlayerGLElement
// 
// A <PlayerElement> that uses bitmaps generated by OpenGL.
//
// Derived From:
//     <PlayerElement>
//
// Project:
//     <Cities3D>
//
// Include:
//     PlayerGLElement.h
//
class PlayerGLElement : public PlayerElement
{
	//-----------------------------------------------------------------------//
	// Section: Public
	//
public:
	//-----------------------------------------------------------------------//
	// Group: Constructors
	//

	//-----------------------------------------------------------------------//
	// Constructor: PlayerGLElement
	//
	// The PlayerGLElement constructor.
	//
	// Parameters:
	//     parent - The parent window.  Must not be NULL.
	//     update - The update function that sets the counter.
	//     color - The update function that sets the color of the counter.
	//     right - A bool that is true if the counter text is displayed to the
	//             right of the bitmap and false if not.
	//     threshold - The counter value at which the PlayerElement should be
	//                 hidden.
	//     gameObject - The <GameObject> that the bitmap represents.
	//     drawObject - The <DrawObject> used to represent the <GameObject>.
	//     image - The backup image if GL rendering is off.
	//     mask - The backup image mask.
	//     text - The popup text for the element.
	//
	PlayerGLElement(wxWindow *parent, const PlayerUpdateFunc &update, 
		const PlayerColorFunc &color, const ColorType playerColor, 
		const wxInt32 threshold, const GameObjectPtr &gameObject, 
		const DrawObjectPtr &drawObject, const HashString &image,
		const HashString &mask, const wxString& text, 
		wxSettlersGLCanvas* canvas);

	//-----------------------------------------------------------------------//
	// Group: Virtual Functions
	//

	//-----------------------------------------------------------------------//
	// Function: SetPlayerColor
	//
	// Sets the internal <DrawObject> to use the given player color.
	//
	// Parameters:
	//     color - The color to use.
	//
	virtual void SetPlayerColor(const ColorType color);

	//-----------------------------------------------------------------------//
	// Section: Private
	//
private:
	//-----------------------------------------------------------------------//
	// Group: Virtual Functions
	//

	//-----------------------------------------------------------------------//
	// Function: GetBitmap
	//
	// Returns the bitmap from OpenGL or the <ImageEngine> at the given size.
	//
	// Parameters:
	//     size - The size of the bitmap.
	//
	virtual wxBitmap GetBitmap(const wxSize &size);

	//-----------------------------------------------------------------------//
	// Group: Variables
	//

	//-----------------------------------------------------------------------//
	// Int: mPlayerColor
	//
	// The color to render the bitmap in.
	//
	ColorType mPlayerColor;

	//-----------------------------------------------------------------------//
	// Pointer: mCanvas
	//
	// The <wxSettlersGLCanvas> that renders the bitmap.
	//
	wxSettlersGLCanvas *mCanvas;

	//-----------------------------------------------------------------------//
	// Object: mGameObject
	//
	// The <GameObject> that the bitmap represents.
	//
	GameObjectPtr mGameObject;

	//-----------------------------------------------------------------------//
	// Object: mGameObject
	//
	// The <DrawObject> that renders the bitmap.
	//
	DrawObjectPtr mDrawObject;

	//-----------------------------------------------------------------------//
	// String: mImage
	//
	// The backup bitmap image.
	//
	HashString mImage;

	//-----------------------------------------------------------------------//
	// String: mMask
	//
	// The backup bitmap image mask.
	//
	HashString mMask;
};

//---------------------------- PROTOTYPES       -----------------------------//

