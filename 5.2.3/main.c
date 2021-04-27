#include <stdio.h>
#include <stdlib.h>
int porownaj_c(char*, char*);
int porownaj_wc(wchar_t*, wchar_t*);
int main()
{
    char s1[] = "dzidzia";
    char s2[] = "dzidzi";
    wchar_t s3[] = L"dzidzia";
    wchar_t s4[] = L"dzidzi";
    printf ( "%d \n", porownaj_c(s1,s2) );
    printf ( "%d \n", porownaj_wc(s3,s4) );
    return 0;
}

int porownaj_c(char* s1,char* s2)
{
	int i;

	for(i=0;s1[i]!=0 && s2[i]!=0;i++)
	{
		if(s1[i]!=s2[i])
		{
			return 0;
		}
	}

	if (s1[i]==s2[i])
	{
		return 1;
	}

	return 0;
}
int porownaj_wc(wchar_t* s1,wchar_t* s2)
{
	int i;

	for(i=0;s1[i]!=0 && s2[i]!=0;i++)
	{
		if(s1[i]!=s2[i])
		{
			return 0;
		}
	}

	if (s1[i]==s2[i])
	{
		return 1;
	}

	return 0;
}

