#pragma once
#include "VisionDataTypeDef.h"

// VisionCalibrationDlg 对话框

class VisionCalibrationDlg : public CDialogEx
{
	DECLARE_DYNAMIC(VisionCalibrationDlg)

public:
	VisionCalibrationDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~VisionCalibrationDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CALIBRATION };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedButtonFindCircles();
    afx_msg void OnBnClickedButtonTestMode();
    afx_msg void OnBnClickedButtonReturn();

    EnCalibrationMode CalibrationMode;
};
