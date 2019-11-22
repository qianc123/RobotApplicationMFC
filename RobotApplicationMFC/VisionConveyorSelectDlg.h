#pragma once
#include "VisionDataTypeDef.h"

// VisionConveyorSelectDlg 对话框

class VisionConveyorSelectDlg : public CDialogEx
{
	DECLARE_DYNAMIC(VisionConveyorSelectDlg)

public:
	VisionConveyorSelectDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~VisionConveyorSelectDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CONVEYOR };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedButtonWhiteConveyor();
    afx_msg void OnBnClickedButtonGreenConveyor();

    // 选择的传送带
    EnConveyorColor SelectedConveyor;
    afx_msg void OnBnClickedButtonReturn();
};
