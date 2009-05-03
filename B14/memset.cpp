#include <cstdio>
#include <cstring>

int main()
{
    int n;
    scanf("%d",&n);

    int t[2][n];

    for(int i=0;i<2;++i)
    {
        for(int j=0;j<n;++j)
            t[i][j]=0xffffffff;
    }

    for(int i=0;i<2;++i)
    {
        for(int j=0;j<n;++j)
            printf("%d ",t[i][j]);
        putchar('\n');
    }

    memset(t,0,n*sizeof(int));

    for(int i=0;i<2;++i)
    {
        for(int j=0;j<n;++j)
            printf("%d ",t[i][j]);
        putchar('\n');
    }
    
    return 0;
}
