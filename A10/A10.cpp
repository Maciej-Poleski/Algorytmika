#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

/*unsigned int abs(int a)
{
    if(a<0)
        return -a;
    return a;
}*/

struct kartez
{
    int x,y;
    
    kartez operator-(const kartez &o) const
    {
        kartez wynik;
        if(x<=0 and o.x>=0)
            wynik.x=o.x-x;
        else if(x>0 and o.x<0)
            wynik.x=x-o.x;
        else
            wynik.x=abs(abs(o.x)-abs(x));
        if(y<=0 and o.y>=0)
            wynik.y=o.y-y;
        else if(y>0 and o.y<0)
            wynik.y=y-o.y;
        else
            wynik.y=abs(abs(o.y)-abs(y));
        return wynik;
    }
};

inline bool sortx (kartez a,kartez b) { return (a.x<b.x); }
inline bool sorty (kartez a,kartez b) { return (a.y<b.y); }

unsigned int n;
kartez * punktyx,*endx;
vector<kartez> punktyy;

unsigned int find_min(vector<kartez> &y,unsigned int start,unsigned int stop)
{
    unsigned int size=stop-start;
    if(size>3)
    {
        unsigned int s=(stop+start)/2,www=punktyx[s].x,min1,min2,tm,xxx;
        kartez tmp;
        vector<kartez> y1,y2;
        
        for(vector<kartez>::iterator i=y.begin();i!=y.end();++i)
        {
            if(i->x<=www)
                y1.push_back(*i);
            else
                y2.push_back(*i);
        }
        
        //printf("Start, stop, s %u %u %u\n",start,stop,s);
        
        
        min1=find_min(y1,start,s);
        printf("Podzieliłem w %u\n",www);
        min2=find_min(y2,s,stop);
        
        //puts("A");
        
        
        tm=min1;
        if(tm>min2)
            tm=min2;
        
        vector<kartez> yp;
        
        for(unsigned int i=0;i<size;++i)
        {
            if(y[i].x>www-tm and y[i].x<www+tm)
                yp.push_back(y[i]);
        }
        
        //printf("%u\n",yp.size());
        
        //puts("B");
        
        for(int i=0;i<(int)yp.size()-7;++i)
        {
            //puts("D");
            for(unsigned int j=1;j<8;++j)
            {
                //puts("E");
                tmp=yp[i]-yp[i+j];
                xxx=tmp.x*tmp.x+tmp.y*tmp.y;
                if(tm>xxx)
                    tm=xxx;
            }
        }
        
        if(yp.size()<8)
        {
            puts("A1");
            for(unsigned int i=0;i<yp.size();++i)
            {
                for(unsigned int j=i+1;j<yp.size();++j)
                {
                    tmp=yp[i]-yp[i+j];
                     xxx=tmp.x*tmp.x+tmp.y*tmp.y;
                     if(tm>xxx)
                     {
                         printf("Lepsza: %u\n",xxx);
                         tm=xxx;
                     }
                }
            }
        }
        
        //puts("C");
        return tm;
    }
    else
    {
        if(size==2)
        {
            kartez tmp=y[0]-y[1];
            printf("%d %d %d %d | Min: %u\n",y[0].x,y[0].y,y[1].x,y[1].y,tmp.x*tmp.x+tmp.y*tmp.y);
            return tmp.x*tmp.x+tmp.y*tmp.y;
        }
        else
        {
            kartez a,b,c;
            a=y[0]-y[1];
            b=y[1]-y[2];
            c=y[2]-y[0];
            unsigned int a1=(a.x)*(a.x)+(a.y)*(a.y),b1=(b.x)*(b.x)+(b.y)*(b.y),c1=(c.x)*(c.x)+(c.y)*(c.y);
            if(c1<b1)
                b1=c1;
            if(b1<a1)
                a1=b1;
            printf("%u %u %u %u %u %u | Min tutaj: %u\n",y[0].x,y[0].y,y[1].x,y[1].y,y[2].x,y[2].y,a1);
            return a1;
        }
    }
}

int main()
{
    unsigned int z;
    scanf("%u",&z);
    while(z--)
    {
        scanf("%u",&n);
        punktyx=new kartez[n];
        endx=punktyx+n;
        punktyy.reserve(n);
        for(kartez *begin=punktyx;begin!=endx;++begin)
        {
            scanf("%d%d",&(begin->x),&(begin->y));
            punktyy.push_back(*begin);
        }/*
        for(unsigned int i=0;i<n;++i)
        {
            printf("%d %d\n",punktyx[i].x,punktyx[i].y);
        }
        for(unsigned int i=0;i<n;++i)
        {
            printf("%d %d\n",punktyy[i].x,punktyy[i].y);
        }
        puts("1");*/
        sort(punktyx,endx,sortx);
        sort(punktyy.begin(),punktyy.end(),sorty);
        /*for(unsigned int i=0;i<n;++i)
        {
            printf("%d %d\n",punktyx[i].x,punktyx[i].y);
        }
        for(unsigned int i=0;i<n;++i)
        {
            printf("%d %d\n",punktyy[i].x,punktyy[i].y);
        }*/
        printf("%u\n",find_min(punktyy,0,n));
        delete [] punktyx;
    }
    
    return 0;
}
