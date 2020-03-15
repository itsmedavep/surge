//-------------------------------------------------------------------------------------------------------
//	Copyright 2005 Claes Johanson & Vember Audio
//-------------------------------------------------------------------------------------------------------
#pragma once
#include "vstcontrols.h"
#include "Colors.h"

extern VSTGUI::CFontRef displayFont;

class CEffectLabel : public VSTGUI::CControl
{
public:
   CEffectLabel(const VSTGUI::CRect& size) : VSTGUI::CControl(size, 0, 0, 0)
   {}

   virtual void draw(VSTGUI::CDrawContext* dc)
   {
      VSTGUI::CRect size = getViewSize();
      VSTGUI::CRect bl(size);
      bl.top = bl.bottom - 2;

 //     VSTGUI::CColor gray = {106, 106, 106, 255};
      dc->setFillColor(col_fx_panel_hrule); // setting divider color
      dc->drawRect(bl, VSTGUI::kDrawFilled);

 //     VSTGUI::CColor dgray = {76, 76, 76, 255};
      dc->setFontColor(col_label_light_gray); //setting font color to match app
      dc->setFont(displayFont);
      dc->drawString(label.c_str(), size, VSTGUI::kLeftText, true);

      setDirty(false);
   }
   void setLabel(std::string s)
   {
      label = s;
   }

private:
   std::string label;

   CLASS_METHODS(CEffectLabel, VSTGUI::CControl)
};
