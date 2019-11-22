// VisionDetectionDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "RobotApplicationMFC.h"
#include "VisionDetectionDlg.h"
#include "afxdialogex.h"


// VisionDetectionDlg 对话框

IMPLEMENT_DYNAMIC(VisionDetectionDlg, CDialogEx)

VisionDetectionDlg::VisionDetectionDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_DETECTION, pParent)
{

}

VisionDetectionDlg::~VisionDetectionDlg()
{
}

void VisionDetectionDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(VisionDetectionDlg, CDialogEx)
END_MESSAGE_MAP()


// VisionDetectionDlg 消息处理程序
