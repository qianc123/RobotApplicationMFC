#pragma once


// VisionControlDlg 对话框

class VisionControlDlg : public CDialogEx
{
	DECLARE_DYNAMIC(VisionControlDlg)

public:
	VisionControlDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~VisionControlDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_VISIONCONTROL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
