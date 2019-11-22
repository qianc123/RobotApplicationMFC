// VisionModeSelectDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "RobotApplicationMFC.h"
#include "VisionModeSelectDlg.h"
#include "afxdialogex.h"


// VisionModeSelectDlg 对话框

IMPLEMENT_DYNAMIC(VisionModeSelectDlg, CDialogEx)

VisionModeSelectDlg::VisionModeSelectDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_VISIONMODEL, pParent)
    , SelectedMode(EnVisionMode::VP_Vision_Unknow)
{

}

VisionModeSelectDlg::~VisionModeSelectDlg()
{
}

void VisionModeSelectDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(VisionModeSelectDlg, CDialogEx)
    ON_BN_CLICKED(IDC_BUTTON_CALIBRATION_MODE, &VisionModeSelectDlg::OnBnClickedButtonCalibrationMode)
    ON_BN_CLICKED(IDC_BUTTON_DETECTION_MODE, &VisionModeSelectDlg::OnBnClickedButtonDetectionMode)
    ON_BN_CLICKED(IDC_BUTTON_RETURN, &VisionModeSelectDlg::OnBnClickedButtonReturn)
END_MESSAGE_MAP()


// VisionModeSelectDlg 消息处理程序


void VisionModeSelectDlg::OnBnClickedButtonCalibrationMode()
{
    // TODO: 在此添加控件通知处理程序代码
    SelectedMode = EnVisionMode::VP_Vision_Calibration;
    CDialogEx::OnOK();
}


void VisionModeSelectDlg::OnBnClickedButtonDetectionMode()
{
    // TODO: 在此添加控件通知处理程序代码
    SelectedMode = EnVisionMode::VP_Vision_PolygonsDetection;
    CDialogEx::OnOK();
}


void VisionModeSelectDlg::OnBnClickedButtonReturn()
{
    // TODO: 在此添加控件通知处理程序代码
    SelectedMode = EnVisionMode::VP_Vision_Back;
    CDialogEx::OnOK();
}
