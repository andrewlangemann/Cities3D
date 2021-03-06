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
#include "BaseTextCtrl.h"
#include "GameEngine.h"
#include "IKeyMapEngine.h"

//---------------------------- TYPEDEFS         -----------------------------//
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//---------------------------- STATICS          -----------------------------//

//---------------------------- PUBLIC           -----------------------------//
wxBaseTextCtrl::wxBaseTextCtrl(wxWindow* parent, wxWindowID id, 
							   const wxPoint& pos, const wxSize& size, 
							   long style, const HashString &color,
							   const HashString &font)
: wxTextCtrl(parent, id, swEmpty, pos, size, style | wxTE_PROCESS_ENTER)
, BaseSkinMixin<wxBaseTextCtrl>(color, font, shInputBackground)
{
	OnSkin();
}

//---------------------------- PROTECTED        -----------------------------//

//---------------------------- PRIVATE          -----------------------------//
BEGIN_EVENT_TABLE(wxBaseTextCtrl, wxTextCtrl)
	EVT_TEXT_ENTER(wxID_ANY, wxBaseTextCtrl::OnTextEnter)
END_EVENT_TABLE()

void wxBaseTextCtrl::OnTextEnter(wxCommandEvent&)
{
	wxKeyEvent event;
	event.m_keyCode = WXK_RETURN;

    KEYMAP.ProcessKeyEvent(event);
}
