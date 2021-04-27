#include <stdio.h>
#include <stdlib.h>
void kopiujn_c(char*, char*, int n);
void kopiujn_wc(wchar_t*, wchar_t*, int n);
int main()
{
    char s1[] = "dzidzia";
    char s2[] = "prestidigitator";
    wchar_t s3[] = L"dzidzia";
    wchar_t s4[] = L"prestidigitator";
    kopiujn_c(s1,s2,8);
    kopiujn_wc(s3,s4,8);
    return 0;
}

void kopiujn_c(char* s1,char* s2, int n)
{
	int i;
	for(i=0;i<n && s1[i]!=0;i++)
	{
		s2[i]=s1[i];
	}
	s2[i]=0;
	puts(s2);
}
void kopiujn_wc(wchar_t* s1,wchar_t* s2, int n)
{
	int i;
	for(i=0;i<n && s1[i]!=0;i++)
	{
		s2[i]=s1[i];
	}
	s2[i]=0;
	_putws(s2);

}

