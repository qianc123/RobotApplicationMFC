// VisionControlDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "RobotApplicationMFC.h"
#include "VisionControlDlg.h"
#include "afxdialogex.h"


// VisionControlDlg 对话框

IMPLEMENT_DYNAMIC(VisionControlDlg, CDialogEx)

VisionControlDlg::VisionControlDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_VISIONCONTROL, pParent)
{

}

VisionControlDlg::~VisionControlDlg()
{
}

void VisionControlDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(VisionControlDlg, CDialogEx)
END_MESSAGE_MAP()


// VisionControlDlg 消息处理程序
