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
#include "CoreGLCanvas.h"

//---------------------------- DEFINES          -----------------------------//

//---------------------------- TYPEDEFS         -----------------------------//

//---------------------------- CLASSES          -----------------------------//

//---------------------------------------------------------------------------//
// Class: wxBaseGLCanvas
// 
// A class that provides basic OpenGL window management.
//
// Derived From:
//     <wxCoreGLCanvas>
//
// Project:
//     <GLCore>
//
// Include:
//     BaseGLCanvas.h
//
class GL_EXPORT_SPEC wxBaseGLCanvas : public wxCoreGLCanvas
{
	//-----------------------------------------------------------------------//
	// Section: Protected
	//
protected:
	//-----------------------------------------------------------------------//
	// Group: Constructors
	//

	//-----------------------------------------------------------------------//
	// Constructor: wxBaseGLCanvas
	// 
	// The wxBaseGLCanvas constructor.  Initializes the OpenGL context
	// with default settings, sets up lighting, and resizes the OpenGL
	// context to match the window's dimensions.
	// 
	// Parameters:
	//     parent - The parent window (must not be NULL).
	//     id - The id for message handling.
	//     pos - The starting position.
	//     size - The starting size.
	//     style - The window style, using wxWindow parameters.
	//     name - The name.
	//     attribute - Starting OpenGL implementation attributes.
	//
	wxBaseGLCanvas(wxWindow *parent, const wxWindowID id = -1, 
		const wxPoint& pos = wxDefaultPosition, 
		const wxSize& size = wxDefaultSize, long style = 0, 
		const wxString& name = swBaseGLCanvas, wxInt32 *attrib = NULL);

	//-----------------------------------------------------------------------//
	// Group: Virtual Functions
	//

	//-----------------------------------------------------------------------//
	// Function: GenerateDebugInfo
	//
	// Allows derived classes to output debug information of some kind to
	// the screen.
	// 
	// Parameters:
	//     str - A string of debug info generated by wxBaseGLCanvas.
	//
	virtual void GenerateDebugInfo(StringArray &) {}

	//-----------------------------------------------------------------------//
	// Section: Private
	//
private:
	//-----------------------------------------------------------------------//
	// Group: Pure Virtual Functions
	//

	//-----------------------------------------------------------------------//
	// Function: DrawScene
	//
	// Pure virtual function that derived classes must override to 
	// provide the OpenGL commands necessary to draw the scene.  All needed 
	// context and scene preparation is handled by wxBaseGLCanvas.
	//
	virtual void DrawScene()=0;

	//-----------------------------------------------------------------------//
	// Group: Virtual Functions
	//

	//-----------------------------------------------------------------------//
	// Function: Paint
	//
	// Paints the window.
	// 
	virtual void Paint();

	//-----------------------------------------------------------------------//
	// Group: Variables
	//

	//-----------------------------------------------------------------------//
	// Pointer: mpVendor
	//
	// A pointer to the name of the OpenGL vendor.
	//
	const GLubyte *mpVendor;
};

//---------------------------- PROTOTYPES       -----------------------------//
