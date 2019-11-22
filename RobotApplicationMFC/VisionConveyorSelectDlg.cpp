// VisionConveyorSelectDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "RobotApplicationMFC.h"
#include "VisionConveyorSelectDlg.h"
#include "afxdialogex.h"


// VisionConveyorSelectDlg 对话框

IMPLEMENT_DYNAMIC(VisionConveyorSelectDlg, CDialogEx)

VisionConveyorSelectDlg::VisionConveyorSelectDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_CONVEYOR, pParent)
    , SelectedConveyor(EnConveyorColor::VP_Color_Unknow)
{

}

VisionConveyorSelectDlg::~VisionConveyorSelectDlg()
{
}

void VisionConveyorSelectDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(VisionConveyorSelectDlg, CDialogEx)
    ON_BN_CLICKED(IDC_BUTTON_WHITE_CONVEYOR, &VisionConveyorSelectDlg::OnBnClickedButtonWhiteConveyor)
    ON_BN_CLICKED(IDC_BUTTON_GREEN_CONVEYOR, &VisionConveyorSelectDlg::OnBnClickedButtonGreenConveyor)
    ON_BN_CLICKED(IDC_BUTTON_RETURN, &VisionConveyorSelectDlg::OnBnClickedButtonReturn)
END_MESSAGE_MAP()


// VisionConveyorSelectDlg 消息处理程序


void VisionConveyorSelectDlg::OnBnClickedButtonWhiteConveyor()
{
    // TODO: 在此添加控件通知处理程序代码
    SelectedConveyor = EnConveyorColor::VP_Color_White;
    CDialogEx::OnOK();

}


void VisionConveyorSelectDlg::OnBnClickedButtonGreenConveyor()
{
    // TODO: 在此添加控件通知处理程序代码
    SelectedConveyor = EnConveyorColor::VP_Color_Green;
    CDialogEx::OnOK();
}


void VisionConveyorSelectDlg::OnBnClickedButtonReturn()
{
    // TODO: 在此添加控件通知处理程序代码
    SelectedConveyor = EnConveyorColor::VP_Color_Unknow;
    CDialogEx::OnOK();
}
