#include <stdio.h>
#include <stdlib.h>

void wytnijzn_c(char* ,char*);
void wytnijzn_wc(wchar_t* ,wchar_t*);

int main()
{
    char s1[] = "dzidzia";
    char s2[] = "prestidigitator";
    wchar_t s3[] = L"dzidzia";
    wchar_t s4[] = L"prestidigitator";
    wytnijzn_c(s1,s2);
    wytnijzn_wc(s3,s4);
    return 0;
}
void wytnijzn_c(char* s1,char*s2)
{
    int i,j;
    char pom[strlen(s1)+1];
    for(i=0;s1[i]!=0;i++)
    {
        for(j=0;s2[j]!=0;j++)
        {
            if (s1[i]==s2[j])
            {
                pom[i]=s2[j];
            }
        }
    }
    pom[i]=0;
    puts(pom);
}
void wytnijzn_wc(wchar_t* s1,wchar_t*s2)
{
    int i,j;
    char pom[wcslen(s1)+1];
    for(i=0;s1[i]!=0;i++)
    {
        for(j=0;s2[j]!=0;j++)
        {
            if (s1[i]==s2[j])
            {
                pom[i]=s2[j];
            }
        }
    }
    pom[i]=0;
    _putws(pom);
}
