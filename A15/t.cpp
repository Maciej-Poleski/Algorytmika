#include <cstdio>
#include <cstring>

int main()
{
    char tab1[]="12345678";
    char tab2[]="abcdefghijklmno";
    int t1=sizeof(tab1);
    int t2=sizeof(tab2);

    for(int i=0;i<t1;++i)
        putchar(tab1[i]);
    putchar('\n');
    for(int i=0;i<t2;++i)
        putchar(tab2[i]);
    putchar('\n');

    strncpy(tab2,tab1,10);

    for(int i=0;i<t1;++i)
        putchar(tab1[i]);
    putchar('\n');
    for(int i=0;i<t2;++i)
        putchar(tab2[i]);
    putchar('\n');

    return 0;
}
