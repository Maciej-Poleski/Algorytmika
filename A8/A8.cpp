#include <cstdio>

unsigned int matrix[80];
unsigned int k,m;
unsigned int *tab;

inline void iloczyn()
{
    unsigned int *tmp=new unsigned int[80];
    tmp[0]=0;
    for(unsigned int i=0;i<k;++i)
        tmp[0]+=matrix[i]*tab[i];
    for(unsigned int i=1;i<k;++i)
        tmp[i]=tab[i-1];

    tmp[0]%=1000;
    delete [] tab;
    tab=tmp;
}

inline void wypisz(unsigned int p)
{
    unsigned int tmp=tab[p];
    printf("%u%u%u\n",tmp/100,(tmp%100)/10,tmp%10);
}

int main()
{
    unsigned int z;
    scanf("%u",&z);
    tab=new unsigned int[80];
    while(z--)
    {

        scanf("%u%u",&k,&m);

        for(unsigned int i=0;i<k;++i)
            scanf("%u",matrix+i);
        for(unsigned int i=0;i<k;++i)
            scanf("%u",tab+i);

        if(k>=m)
        {
            wypisz(k-m);
            continue;
        }

        for(unsigned int q=0;q<m-k;++q)
            iloczyn();

        wypisz(0);
    }

    return 0;
}
