#include <iostream>

using namespace std;

//공백까지 모든 걸 2바이트로 취급하네요
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