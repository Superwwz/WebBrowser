
// WebBrowserView.h : CWebBrowserView ��Ľӿ�
//

#pragma once


class CWebBrowserView : public CHtmlView
{
protected: // �������л�����
	CWebBrowserView();
	DECLARE_DYNCREATE(CWebBrowserView)

// ����
public:
	CWebBrowserDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CWebBrowserView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	virtual void OnDocumentComplete(LPCTSTR lpszURL);
};

#ifndef _DEBUG  // WebBrowserView.cpp �еĵ��԰汾
inline CWebBrowserDoc* CWebBrowserView::GetDocument() const
   { return reinterpret_cast<CWebBrowserDoc*>(m_pDocument); }
#endif

