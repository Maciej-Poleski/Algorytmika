#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

const int MAX=100000001;

bool *sito;

long long pow(long long n,int k)
{
    long long w=1;
    for(int i=0;i<k;++i)
	w*=n;
    return w;
}

int main()
{
    sito=new bool[MAX];
    memset(sito,0,MAX);

    for(int i=2;i<=MAX;++i)
    {
	if(sito[i])
	    continue;
	for(int j=i*2;j<=MAX;j+=i)
	    sito[j]=true;
    }

    int z;
    scanf("%d\n",&z);
    while(z--)
    {
	long long x,xx;
	scanf("%lld",&x);
	long long w=1;
	xx=x;

	for(int p=2;p<=MAX;++p)
	{
	    if(sito[p])
		continue;

	    int k=0;

	    while(x%p==0)
		++k,x/=p;

	    if(k==0)
		continue;

	    w*=pow(p,k-1)*(p-1);
	}

	if(x>1)
		w*=x-1;

	printf("%lld ",w);

	w=0;
	for(long long i=2;i*i<=xx;++i)
	{
	    w+=!sito[i];
	}

	printf("%lld\n",w);
    }
    delete [] sito;
    return 0;
}
