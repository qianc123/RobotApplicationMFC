#pragma once
#include "VisionDataTypeDef.h"

// VisionDetectionDlg 对话框

class VisionDetectionDlg : public CDialogEx
{
	DECLARE_DYNAMIC(VisionDetectionDlg)

public:
	VisionDetectionDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~VisionDetectionDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_DETECTION };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
