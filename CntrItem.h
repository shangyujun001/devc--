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

// CntrItem.h : CMFCApplication2CntrItem ��Ľӿ�
//

#pragma once

class CMFCApplication2Doc;
class CMFCApplication2View;

class CMFCApplication2CntrItem : public CRichEditCntrItem
{
	DECLARE_SERIAL(CMFCApplication2CntrItem)

// ���캯��
public:
	CMFCApplication2CntrItem(REOBJECT* preo = NULL, CMFCApplication2Doc* pContainer = NULL);
		// ע��:  ���� pContainer Ϊ NULL ������ IMPLEMENT_SERIALIZE
		//  IMPLEMENT_SERIALIZE Ҫ������д���
		//  �����Ĺ��캯����  OLE ��ͨ������
		//  �� NULL �ĵ�ָ�빹���

// ����
public:
	CMFCApplication2Doc* GetDocument()
		{ return reinterpret_cast<CMFCApplication2Doc*>(CRichEditCntrItem::GetDocument()); }
	CMFCApplication2View* GetActiveView()
		{ return reinterpret_cast<CMFCApplication2View*>(CRichEditCntrItem::GetActiveView()); }

// ʵ��
public:
	~CMFCApplication2CntrItem();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

