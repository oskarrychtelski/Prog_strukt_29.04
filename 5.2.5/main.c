#include <stdio.h>
#include <stdlib.h>

void przepisz_c (char*, char*);
void przepisz_wc (wchar_t*, wchar_t*);

int main()
{
    char s1[] = "ala";
    char s2[] = "kot";
    wchar_t s3[] = L"ala";
    wchar_t s4[] = L"kot";
    przepisz_c(s1,s2);
    przepisz_wc(s3,s4);
    return 0;
}

void przepisz_c (char* s1,char* s2)
{
    strcpy(s1,s2);
    puts(s2);
}
void przepisz_wc (wchar_t* s1,wchar_t* s2)
{
    wcscpy(s1,s2);
    _putws(s2);
}
