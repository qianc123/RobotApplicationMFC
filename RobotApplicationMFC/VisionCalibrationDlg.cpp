// VisionCalibrationDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "RobotApplicationMFC.h"
#include "VisionCalibrationDlg.h"
#include "afxdialogex.h"


// VisionCalibrationDlg 对话框

IMPLEMENT_DYNAMIC(VisionCalibrationDlg, CDialogEx)

VisionCalibrationDlg::VisionCalibrationDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_CALIBRATION, pParent)
    , CalibrationMode(EnCalibrationMode::VP_Calib_Unknow)
{

}

VisionCalibrationDlg::~VisionCalibrationDlg()
{
}

void VisionCalibrationDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(VisionCalibrationDlg, CDialogEx)
    ON_BN_CLICKED(IDC_BUTTON_FIND_CIRCLES, &VisionCalibrationDlg::OnBnClickedButtonFindCircles)
    ON_BN_CLICKED(IDC_BUTTON_TEST_MODE, &VisionCalibrationDlg::OnBnClickedButtonTestMode)
    ON_BN_CLICKED(IDC_BUTTON_RETURN, &VisionCalibrationDlg::OnBnClickedButtonReturn)
END_MESSAGE_MAP()


// VisionCalibrationDlg 消息处理程序

//找圆
void VisionCalibrationDlg::OnBnClickedButtonFindCircles()
{
    // TODO: 在此添加控件通知处理程序代码
    CalibrationMode = EnCalibrationMode::VP_Calib_FindCircles;
    CDialogEx::OnOK();
}

//测试模式
void VisionCalibrationDlg::OnBnClickedButtonTestMode()
{
    // TODO: 在此添加控件通知处理程序代码
    CalibrationMode = EnCalibrationMode::VP_Calib_Test;
    CDialogEx::OnOK();
}

//返回
void VisionCalibrationDlg::OnBnClickedButtonReturn()
{
    // TODO: 在此添加控件通知处理程序代码
    CalibrationMode = EnCalibrationMode::VP_Calib_Quit;
    CDialogEx::OnOK();
}
