///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "drawPanel.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer(wxHORIZONTAL);

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer(wxVERTICAL);

	m_bpButton1 = new wxBitmapButton(this, wxID_ANY, wxBitmap(wxT("pen.bmp"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW);
	bSizer2->Add(m_bpButton1, 0, wxALL, 5);

	m_bpButton2 = new wxBitmapButton(this, wxID_ANY, wxBitmap(wxT("eraser.bmp"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW);
	bSizer2->Add(m_bpButton2, 0, wxALL, 5);

	m_staticline1 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);
	bSizer2->Add(m_staticline1, 0, wxEXPAND | wxALL, 2);

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer(0, 2, 0, 0);
	fgSizer1->SetFlexibleDirection(wxBOTH);
	fgSizer1->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	m_bitmap_color1 = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
	m_bitmap_color1->SetBackgroundColour(wxColour(0, 0, 0));

	fgSizer1->Add(m_bitmap_color1, 0, wxALL, 2);

	m_bitmap_color2 = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
	m_bitmap_color2->SetBackgroundColour(wxColour(255, 0, 0));

	fgSizer1->Add(m_bitmap_color2, 0, wxALL, 2);

	m_radioBtn_color1 = new wxRadioButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	m_radioBtn_color1->SetValue(true);
	fgSizer1->Add(m_radioBtn_color1, 0, wxALL, 2);

	m_radioBtn_color2 = new wxRadioButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	fgSizer1->Add(m_radioBtn_color2, 0, wxALL, 2);


	bSizer2->Add(fgSizer1, 0, 0, 5);

	m_staticline2 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);
	bSizer2->Add(m_staticline2, 0, wxEXPAND | wxALL, 2);

	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer(4, 2, 0, 0);

	m_bitmap_c1 = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(30, 30), 0);
	m_bitmap_c1->SetBackgroundColour(wxColour(255, 0, 0));

	gSizer1->Add(m_bitmap_c1, 0, wxALL, 2);

	m_bitmap_c2 = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(30, 30), 0);
	m_bitmap_c2->SetBackgroundColour(wxColour(255, 255, 0));

	gSizer1->Add(m_bitmap_c2, 0, wxALL, 2);

	m_bitmap_c3 = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(30, 30), 0);
	m_bitmap_c3->SetBackgroundColour(wxColour(0, 255, 0));

	gSizer1->Add(m_bitmap_c3, 0, wxALL, 2);

	m_bitmap_c4 = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(30, 30), 0);
	m_bitmap_c4->SetBackgroundColour(wxColour(0, 255, 255));

	gSizer1->Add(m_bitmap_c4, 0, wxALL, 2);

	m_bitmap_c5 = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(30, 30), 0);
	m_bitmap_c5->SetBackgroundColour(wxColour(0, 0, 255));

	gSizer1->Add(m_bitmap_c5, 0, wxALL, 2);

	m_bitmap_c6 = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(30, 30), 0);
	m_bitmap_c6->SetBackgroundColour(wxColour(255, 0, 255));

	gSizer1->Add(m_bitmap_c6, 0, wxALL, 2);

	m_bitmap_c7 = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(30, 30), 0);
	m_bitmap_c7->SetBackgroundColour(wxColour(255, 255, 255));

	gSizer1->Add(m_bitmap_c7, 0, wxALL, 2);

	m_bitmap_c8 = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(30, 30), 0);
	m_bitmap_c8->SetBackgroundColour(wxColour(0, 0, 0));

	gSizer1->Add(m_bitmap_c8, 0, wxALL, 2);


	bSizer2->Add(gSizer1, 0, 0, 5);

	m_bpButton4 = new wxBitmapButton(this, wxID_ANY, wxBitmap(wxT("color.bmp"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW);
	bSizer2->Add(m_bpButton4, 0, wxALL, 5);


	bSizer1->Add(bSizer2, 0, wxEXPAND, 5);

	m_panel1 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(640, 480), wxTAB_TRAVERSAL);
	m_panel1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHTTEXT));

	bSizer1->Add(m_panel1, 0, wxALL, 5);


	this->SetSizer(bSizer1);
	this->Layout();
	m_statusBar1 = this->CreateStatusBar(1, wxST_SIZEGRIP, wxID_ANY);

	this->Centre(wxBOTH);

	// Connect Events
	m_bpButton1->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::OnPenClick), NULL, this);
	m_bpButton2->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::OnEraserClick), NULL, this);
	m_bitmap_c1->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::On_C1click), NULL, this);
	m_bitmap_c2->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::On_C2click), NULL, this);
	m_bitmap_c3->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::On_C3click), NULL, this);
	m_bitmap_c4->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::On_C4click), NULL, this);
	m_bitmap_c5->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::On_C5click), NULL, this);
	m_bitmap_c6->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::On_C6click), NULL, this);
	m_bitmap_c7->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::On_C7click), NULL, this);
	m_bitmap_c8->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::On_C8click), NULL, this);
	m_bpButton4->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::OnColorClick), NULL, this);
	m_panel1->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(MyFrame1::OnLeftDown), NULL, this);
	m_panel1->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::OnLeftUp), NULL, this);
	m_panel1->Connect(wxEVT_MOTION, wxMouseEventHandler(MyFrame1::OnMotion), NULL, this);
	m_panel1->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(MyFrame1::OnRightDown), NULL, this);
	m_panel1->Connect(wxEVT_RIGHT_UP, wxMouseEventHandler(MyFrame1::OnRightUp), NULL, this);
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	m_bpButton1->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::OnPenClick), NULL, this);
	m_bpButton2->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::OnEraserClick), NULL, this);
	m_bitmap_c1->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::On_C1click), NULL, this);
	m_bitmap_c2->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::On_C2click), NULL, this);
	m_bitmap_c3->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::On_C3click), NULL, this);
	m_bitmap_c4->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::On_C4click), NULL, this);
	m_bitmap_c5->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::On_C5click), NULL, this);
	m_bitmap_c6->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::On_C6click), NULL, this);
	m_bitmap_c7->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::On_C7click), NULL, this);
	m_bitmap_c8->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::On_C8click), NULL, this);
	m_bpButton4->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::OnColorClick), NULL, this);
	m_panel1->Disconnect(wxEVT_LEFT_DOWN, wxMouseEventHandler(MyFrame1::OnLeftDown), NULL, this);
	m_panel1->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(MyFrame1::OnLeftUp), NULL, this);
	m_panel1->Disconnect(wxEVT_MOTION, wxMouseEventHandler(MyFrame1::OnMotion), NULL, this);
	m_panel1->Disconnect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(MyFrame1::OnRightDown), NULL, this);
	m_panel1->Disconnect(wxEVT_RIGHT_UP, wxMouseEventHandler(MyFrame1::OnRightUp), NULL, this);

}
