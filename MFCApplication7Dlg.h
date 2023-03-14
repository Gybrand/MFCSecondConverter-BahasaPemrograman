
// MFCApplication7Dlg.h : header file
//

#pragma once


// CMFCApplication7Dlg dialog
class CMFCApplication7Dlg : public CDialogEx
{
// Construction
public:
	CMFCApplication7Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION7_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit1();
//	CString m_jam;
//	CString m_menit;
//	CEdit m_hasil;
//	CString m_hasil;
//	float m_jam;
//	float m_menit;
//	CEdit m_hasil;
//	float m_detik;
	double m_detik;
};
