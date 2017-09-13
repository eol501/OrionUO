﻿/***********************************************************************************
**
** GUIVirtireGump.h
**
** Компонента для отображения virture gump
**
** Copyright (C) May 2017 Hotride
**
************************************************************************************
*/
//----------------------------------------------------------------------------------
#ifndef GUIVIRTUREGUMP_H
#define GUIVIRTUREGUMP_H
//----------------------------------------------------------------------------------
class CGUIVirtureGump : public CGUIDrawObject
{
public:
	CGUIVirtureGump(const ushort &graphic, const int &x, const int &y);
	virtual ~CGUIVirtureGump();

	virtual bool Select();
};
//----------------------------------------------------------------------------------
#endif
//----------------------------------------------------------------------------------