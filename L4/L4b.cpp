#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int z;
    scanf("%d",&z);
    while(z--)
    {
	int m;
	scanf("%d",&m);
	long long a[m],b[m],n[m];
	for(int i=0;i<m;++i)
	    scanf("%lld%lld%lld",a+i,b+i,n+i);
	for(int i=0;i<m;++i)
	{
	    if(a[i])
		a[i]%=n[i];
	    if(b[i])
		b[i]%=n[i];
	}
	long long M=1LL;
	for(int i=0;i<m;++i)
	    M*=n[i];
	vector<long long> s[m+1];
	s[0].resize(M);
	for(long long i=0;i<M;++i)
	    s[0].push_back(i);
	for(int i=0;i<m;++i)
	{
	    for(vector<long long>::iterator x=s[i].begin(),e=s[i].end();x!=e;++x)
	    {
		if((a[i]*(*x)-b[i])%n[i]==0)
		    s[i+1].push_back(*x);
	    }
	    vector<long long> t;
	    s[i].swap(t);
	}
	switch(s[m].size())
	{
	    case 0:
		printf("NIE\n");
		break;
	    case 1:
		printf("%lld %lld\n",s[m][0],s[m][0]+M);
		break;
	    default:
		printf("%lld %lld\n",s[m][0],s[m][1]);
		break;
	}
    }
    return 0;
}