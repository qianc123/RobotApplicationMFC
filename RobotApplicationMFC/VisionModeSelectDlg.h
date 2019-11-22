#pragma once
#include "VisionDataTypeDef.h"

// VisionModeSelectDlg 对话框

class VisionModeSelectDlg : public CDialogEx
{
	DECLARE_DYNAMIC(VisionModeSelectDlg)

public:
	VisionModeSelectDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~VisionModeSelectDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_VISIONMODEL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedButtonCalibrationMode();
    afx_msg void OnBnClickedButtonDetectionMode();
    afx_msg void OnBnClickedButtonReturn();

    // 选择的传送带
    EnVisionMode SelectedMode;
};
