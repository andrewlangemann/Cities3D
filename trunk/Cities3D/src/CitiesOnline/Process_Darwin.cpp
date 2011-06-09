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

#if defined(__MACH__) && defined(__APPLE__)

//---------------------------- SYSTEM INCLUDES  -----------------------------//
//---------------------------- USER INCLUDES    -----------------------------//
#include "Process.h"

//---------------------------- TYPEDEFS         -----------------------------//
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//---------------------------- STATICS          -----------------------------//
namespace
{
}

//---------------------------- PUBLIC           -----------------------------//
void Process::TerminateOtherProcess(const wxString& exeName)
{
	// Get our executable name and look for it.
	wxFileName fileName(exeName);
	wxString exeFullName = fileName.GetFullName();

	// FIXME: implement me!
}

//---------------------------- PROTECTED        -----------------------------//

//---------------------------- PRIVATE          -----------------------------//

#endif // __MACH__ && __APPLE__ 

