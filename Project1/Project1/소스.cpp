#include <iostream>

using namespace std;

//������� ��� �� 2����Ʈ�� ����ϳ׿�
wchar_t strtest[] = L"TEST WCHAR_T";


int wmain(int argc, wchar_t* str[])
{
	int strsize = sizeof(strtest);
	int strlenth = wcslen(strtest);

	wprintf(L"W char Test");

	wprintf(L"Size : %d ",strsize);
	wprintf(L"length : %d ", strlenth);


	

	return 0;
}