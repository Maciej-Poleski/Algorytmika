#include <cstdio>

template <class T>
inline T min(T a,T b)
{
    if(a<b)
        return a;
    return b;
}

template <class T>
        inline T max(T a,T b)
{
    if(a<b)
        return b;
    return a;
}

struct kartez
{
    int x,y;
    
    bool operator<(const kartez &o) const
    {
        if(x<o.x or (x==o.x and y<o.y))
            return true;
        return false;
    }
    
    bool operator==(const kartez &o) const
    {
        if(x==o.x and y==o.y)
            return true;
        return false;
    }
    
    long long operator-(const kartez &o) const
    {
        long long e1=(max(x,o.x)-min(x,o.x));
        long long e2=(max(y,o.y)-min(y,o.y));
        e1*=e1;
        e2*=e2;
        return e1+e2; 
    }
};

long long wynik;

int main()
{
    unsigned int z,n;
    scanf("%u",&z);
    while(z--)
    {
        scanf("%u",&n);
        kartez punkty[n];
        for(unsigned int i=0;i<n;++i)
        {
            scanf("%d%d",&punkty[i].x,&punkty[i].y);
        }
        wynik=punkty[0]-punkty[1];
        
        for(unsigned int i=0;i<n;++i)
        {
            for(unsigned int j=i+1;j<n;++j)
            {
                if(punkty[i]-punkty[j]<wynik)
                    wynik=punkty[i]-punkty[j];
            }
        }
        printf("%lld\n",wynik);
    }
    return 0;
}
