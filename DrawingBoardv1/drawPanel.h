///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __DRAWPANEL_H__
#define __DRAWPANEL_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/bmpbuttn.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/statline.h>
#include <wx/statbmp.h>
#include <wx/radiobut.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/statusbr.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
private:

protected:
	wxBitmapButton* m_bpButton1;
	wxBitmapButton* m_bpButton2;
	wxStaticLine* m_staticline1;
	wxStaticBitmap* m_bitmap_color1;
	wxStaticBitmap* m_bitmap_color2;
	wxRadioButton* m_radioBtn_color1;
	wxRadioButton* m_radioBtn_color2;
	wxStaticLine* m_staticline2;
	wxStaticBitmap* m_bitmap_c1;
	wxStaticBitmap* m_bitmap_c2;
	wxStaticBitmap* m_bitmap_c3;
	wxStaticBitmap* m_bitmap_c4;
	wxStaticBitmap* m_bitmap_c5;
	wxStaticBitmap* m_bitmap_c6;
	wxStaticBitmap* m_bitmap_c7;
	wxStaticBitmap* m_bitmap_c8;
	wxBitmapButton* m_bpButton4;
	wxPanel* m_panel1;
	wxStatusBar* m_statusBar1;

	// Virtual event handlers, overide them in your derived class
	virtual void OnPenClick(wxCommandEvent& event) { event.Skip(); }
	virtual void OnMotion_Pen(wxMouseEvent& event) { event.Skip(); }
	virtual void OnEraserClick(wxCommandEvent& event) { event.Skip(); }
	virtual void OnMotion_Eraser(wxMouseEvent& event) { event.Skip(); }
	virtual void OnMotion_C1(wxMouseEvent& event) { event.Skip(); }
	virtual void OnMotion_C2(wxMouseEvent& event) { event.Skip(); }
	virtual void OnMotion_rB(wxMouseEvent& event) { event.Skip(); }
	virtual void On_C1click(wxMouseEvent& event) { event.Skip(); }
	virtual void OnMotion_Cplan(wxMouseEvent& event) { event.Skip(); }
	virtual void On_C2click(wxMouseEvent& event) { event.Skip(); }
	virtual void On_C3click(wxMouseEvent& event) { event.Skip(); }
	virtual void On_C4click(wxMouseEvent& event) { event.Skip(); }
	virtual void On_C5click(wxMouseEvent& event) { event.Skip(); }
	virtual void On_C6click(wxMouseEvent& event) { event.Skip(); }
	virtual void On_C7click(wxMouseEvent& event) { event.Skip(); }
	virtual void On_C8click(wxMouseEvent& event) { event.Skip(); }
	virtual void OnColorClick(wxCommandEvent& event) { event.Skip(); }
	virtual void OnMotion_Color(wxMouseEvent& event) { event.Skip(); }
	virtual void OnLeftDown(wxMouseEvent& event) { event.Skip(); }
	virtual void OnLeftUp(wxMouseEvent& event) { event.Skip(); }
	virtual void OnMotion(wxMouseEvent& event) { event.Skip(); }
	virtual void OnRightDown(wxMouseEvent& event) { event.Skip(); }
	virtual void OnRightUp(wxMouseEvent& event) { event.Skip(); }


public:

	MyFrame1(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("¼òÒ×»­°åv1.1"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(725, 545), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

	~MyFrame1();

};

#endif //__DRAWPANEL_H__
