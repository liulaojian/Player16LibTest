
// Player16LibTest.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CPlayer16LibTestApp: 
// �йش����ʵ�֣������ Player16LibTest.cpp
//

class CPlayer16LibTestApp : public CWinApp
{
public:
	CPlayer16LibTestApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CPlayer16LibTestApp theApp;