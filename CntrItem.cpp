// ��� MFC ʾ��Դ������ʾ���ʹ�� MFC Microsoft Office Fluent �û����� 
// (��Fluent UI��)����ʾ�������ο���
// ���Բ��䡶Microsoft ������ο����� 
// MFC C++ ������渽����ص����ĵ���  
// ���ơ�ʹ�û�ַ� Fluent UI ����������ǵ����ṩ�ġ�  
// ��Ҫ�˽��й� Fluent UI ��ɼƻ�����ϸ��Ϣ�������  
// http://go.microsoft.com/fwlink/?LinkId=238214��
//
// ��Ȩ����(C) Microsoft Corporation
// ��������Ȩ����

// CntrItem.cpp : CMFCApplication2CntrItem ���ʵ��
//

#include "stdafx.h"
#include "MFCApplication2.h"

#include "MFCApplication2Doc.h"
#include "MFCApplication2View.h"
#include "CntrItem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication2CntrItem ��ʵ��

IMPLEMENT_SERIAL(CMFCApplication2CntrItem, CRichEditCntrItem, 0)

CMFCApplication2CntrItem::CMFCApplication2CntrItem(REOBJECT* preo, CMFCApplication2Doc* pContainer)
	: CRichEditCntrItem(preo, pContainer)
{
	// TODO:  �ڴ����һ���Թ������
}

CMFCApplication2CntrItem::~CMFCApplication2CntrItem()
{
	// TODO:  �ڴ˴�����������
}


// CMFCApplication2CntrItem ���

#ifdef _DEBUG
void CMFCApplication2CntrItem::AssertValid() const
{
	CRichEditCntrItem::AssertValid();
}

void CMFCApplication2CntrItem::Dump(CDumpContext& dc) const
{
	CRichEditCntrItem::Dump(dc);
}
#endif

