/*=========================================================
* Name: app.cpp
* Function: 简易画图板
* Created: 2019-05-31
* Author: xxpcb(https://github.com/xxpcb)
* Modify: 2019-06-02 (v1.1) 完善底部的交互式状态栏
==========================================================*/

// For compilers that support precompilation, includes "wx/wx.h".  
#include <wx/wxprec.h>  
#ifndef WX_PRECOMP  
#include <wx/wx.h>  
#endif  
#include "drawPanel.h"
#include <wx/colordlg.h>
#include "icon.h"

bool falg_OnPaintPannel = FALSE;

class calcApp : public wxApp
{
public:
	virtual bool OnInit();
};

//主窗口类(继承于设计的MyFrame1)
class picFrame : public MyFrame1
{
public:
	//Mat imcv0;
	wxImage imwx;
	picFrame();// : MyFrame1(NULL, wxID_ANY) {};
private:
	void OnPenClick(wxCommandEvent& event) { SetStatusText("mode: pen", 1); flag_operate = 1; };
	void OnEraserClick(wxCommandEvent& event) { SetStatusText("mode: eraser", 1); flag_operate = 2; };

	void OnColorClick(wxCommandEvent& event);
	void On_C1click(wxMouseEvent& event);
	void On_C2click(wxMouseEvent& event);
	void On_C3click(wxMouseEvent& event);
	void On_C4click(wxMouseEvent& event);
	void On_C5click(wxMouseEvent& event);
	void On_C6click(wxMouseEvent& event);
	void On_C7click(wxMouseEvent& event);
	void On_C8click(wxMouseEvent& event);

	void OnLeftDown(wxMouseEvent& event);
	void OnLeftUp(wxMouseEvent& event);
	void OnMotion(wxMouseEvent& event);
	void OnRightDown(wxMouseEvent& event);
	void OnRightUp(wxMouseEvent& event);

	void OnMotion_Pen(wxMouseEvent& event) { SetStatusText("pen",0); };
	void OnMotion_Eraser(wxMouseEvent& event) { SetStatusText("eraser", 0); };
	void OnMotion_Color(wxMouseEvent& event) { SetStatusText("use custom colors", 0); };
	void OnMotion_C1(wxMouseEvent& event) { SetStatusText("color 1", 0); };
	void OnMotion_C2(wxMouseEvent& event) { SetStatusText("color 2", 0); };
	void OnMotion_rB(wxMouseEvent& event) { SetStatusText("select to change color", 0); };
	void OnMotion_Cplan(wxMouseEvent& event) { SetStatusText("use this color", 0); };


	void OnMouseMove(wxMouseEvent& event);//Frame上的鼠标移动
	wxDECLARE_EVENT_TABLE();
protected:
	bool isLDown, isRDown;     //记录鼠标是否处于按下状态
	wxPoint penPos;  //鼠标位置
	wxPen pen;
	int flag_operate = 1;//1:画笔 2:橡皮 3:颜色
};
BEGIN_EVENT_TABLE(picFrame, MyFrame1)
EVT_MOTION(picFrame::OnMouseMove)
END_EVENT_TABLE()

picFrame::picFrame() : MyFrame1(NULL, wxID_ANY) 
{
	SetIcon(wxIcon(icon_xpm));
	Centre();

	isLDown = false;
	isRDown = false;
	pen = wxPen(wxColor(0, 0, 0), 2, wxSOLID);

	SetStatusText("mode: pen", 1);
	SetStatusText("※",2);
}

wxIMPLEMENT_APP(calcApp);//开始执行

bool calcApp::OnInit()
{
	picFrame *frame = new picFrame();//窗口名称
	frame->Show(true);//显示窗口

	return true;
}

void picFrame::OnColorClick(wxCommandEvent& event)
{
	SetStatusText("mode: select color", 1);
	flag_operate = 3;
	wxStaticBitmap * m_bitmap_color = m_radioBtn_color1->GetValue()? m_bitmap_color1: m_bitmap_color2;
	wxColourData colourData;
	wxColour colour = m_bitmap_color->GetBackgroundColour();
	colourData.SetColour(colour);
	colourData.SetChooseFull(true);
	wxColourDialog *dlg = new wxColourDialog(this, &colourData);
	if (dlg->ShowModal() == wxID_OK)
	{
		colourData = dlg->GetColourData();
		m_bitmap_color->SetBackgroundColour(colourData.GetColour());
		m_bitmap_color->Refresh();
	}
	dlg->Destroy();
}

void picFrame::On_C1click(wxMouseEvent& event)
{
	wxStaticBitmap * m_bitmap_color = m_radioBtn_color1->GetValue() ? m_bitmap_color1 : m_bitmap_color2;
	m_bitmap_color->SetBackgroundColour(m_bitmap_c1->GetBackgroundColour());
	m_bitmap_color->Refresh();
}
void picFrame::On_C2click(wxMouseEvent& event)
{
	wxStaticBitmap * m_bitmap_color = m_radioBtn_color1->GetValue() ? m_bitmap_color1 : m_bitmap_color2;
	m_bitmap_color->SetBackgroundColour(m_bitmap_c2->GetBackgroundColour());
	m_bitmap_color->Refresh();
}
void picFrame::On_C3click(wxMouseEvent& event)
{
	wxStaticBitmap * m_bitmap_color = m_radioBtn_color1->GetValue() ? m_bitmap_color1 : m_bitmap_color2;
	m_bitmap_color->SetBackgroundColour(m_bitmap_c3->GetBackgroundColour());
	m_bitmap_color->Refresh();
}
void picFrame::On_C4click(wxMouseEvent& event)
{
	wxStaticBitmap * m_bitmap_color = m_radioBtn_color1->GetValue() ? m_bitmap_color1 : m_bitmap_color2;
	m_bitmap_color->SetBackgroundColour(m_bitmap_c4->GetBackgroundColour());
	m_bitmap_color->Refresh();
}
void picFrame::On_C5click(wxMouseEvent& event)
{
	wxStaticBitmap * m_bitmap_color = m_radioBtn_color1->GetValue() ? m_bitmap_color1 : m_bitmap_color2;
	m_bitmap_color->SetBackgroundColour(m_bitmap_c5->GetBackgroundColour());
	m_bitmap_color->Refresh();
}
void picFrame::On_C6click(wxMouseEvent& event)
{
	wxStaticBitmap * m_bitmap_color = m_radioBtn_color1->GetValue() ? m_bitmap_color1 : m_bitmap_color2;
	m_bitmap_color->SetBackgroundColour(m_bitmap_c6->GetBackgroundColour());
	m_bitmap_color->Refresh();
}
void picFrame::On_C7click(wxMouseEvent& event)
{
	wxStaticBitmap * m_bitmap_color = m_radioBtn_color1->GetValue() ? m_bitmap_color1 : m_bitmap_color2;
	m_bitmap_color->SetBackgroundColour(m_bitmap_c7->GetBackgroundColour());
	m_bitmap_color->Refresh();
}
void picFrame::On_C8click(wxMouseEvent& event)
{
	wxStaticBitmap * m_bitmap_color = m_radioBtn_color1->GetValue() ? m_bitmap_color1 : m_bitmap_color2;
	m_bitmap_color->SetBackgroundColour(m_bitmap_c8->GetBackgroundColour());
	m_bitmap_color->Refresh();
}

void picFrame::OnLeftDown(wxMouseEvent& event)
{
	isLDown = true;
	penPos = event.GetPosition();
}
void picFrame::OnLeftUp(wxMouseEvent& event)
{
	isLDown = false;
	pen.SetWidth(2);
}
void picFrame::OnMotion(wxMouseEvent& event)
{
	wxPoint mPos = event.GetPosition();
	wxString inf;
	inf.Printf(_T("※ %d,%d pixel"), mPos.x, mPos.y);
	SetStatusText(inf,2);
	wxClientDC dc(m_panel1);
	if (isLDown && event.Dragging() && flag_operate != 3)
	{
		if(flag_operate==1)//画笔
			pen.SetColour(m_bitmap_color1->GetBackgroundColour());
		else if (flag_operate == 2)//橡皮
		{
			pen.SetColour(wxColor(255, 255, 255));
			pen.SetWidth(12);
		}
		dc.SetPen(pen);
		dc.DrawLine(mPos, penPos);
		dc.SetPen(wxNullPen);
		penPos = mPos;
	}
	else if (isRDown && event.Dragging()&& flag_operate==1)
	{
		pen.SetColour(m_bitmap_color2->GetBackgroundColour());
		dc.SetPen(pen);
		dc.DrawLine(mPos, penPos);
		dc.SetPen(wxNullPen);
		penPos = mPos;
	}
}
void picFrame::OnRightDown(wxMouseEvent& event)
{
	isRDown = true;
	penPos = event.GetPosition();
}
void picFrame::OnRightUp(wxMouseEvent& event)
{
	isRDown = false;
}

void picFrame::OnMouseMove(wxMouseEvent& event)
{
	SetStatusText("", 0);
	switch (flag_operate)
	{
	case 1:SetStatusText("mode: pen", 1); break;
	case 2:SetStatusText("mode: eraser", 1); break;
	case 3:SetStatusText("mode: select color", 1); break;
	}
	SetStatusText("※", 2);
}