#include <cstdio>
#include <algorithm>

using namespace std;

void f(char *const W,int N,int *const PP,char *const T,int M,int *const R)
{
    for(int j,i=0,k=0;k<M;k+=j,i=max(0,i-j))
    {
	while(i<N && k+i<M && W[i]==T[k+i])
	    ++i;
	R[k]=i;
	for(j=1;j<i && j+PP[j]<i;++j)
	    R[j+k]=PP[j];
    }
}

int main()
{
    char *T=0;
    char *TR=0;
    char *W=0;
    char *WR=0;
    int *PP=0;
    int *PPR=0;
    int *R=0;
    int *RR=0;
    int z;
    scanf("%d\n",&z);
    while(z--)
    {
	int n,m;
	scanf("%d ",&n);
	W=new char[n+5];
	scanf("%s\n",W);
	scanf("%d ",&m);
	T=new char[m+5];
	scanf("%s\n",T);
	PP=new int[n+5];
	R=new int[m+5];
	WR=new char[n+5];
	TR=new char[m+5];
	PPR=new int[n+5];
	RR=new int[m+5];
	for(int i=n-1;i>=0;--i)
	    WR[n-i-1]=W[i];
	for(int i=m-1;i>=0;--i)
	    TR[m-i-1]=T[i];
	WR[n]=0;
	TR[m]=0;
	f(W,n,PP,W+1,n-1,PP+1);
	f(WR,n,PPR,WR+1,n-1,PPR+1);
	f(W,n,PP,T,m,R);
	f(WR,n,PPR,TR,m,RR);

	/*printf("%d %d\n%s\n%s\n%s\n%s\n",n,m,W,WR,T,TR);

	for(int i=0;i<n;++i)
	    printf("%d ",PP[i]);
	printf("\n");
	for(int i=0;i<n;++i)
	    printf("%d ",PPR[i]);
	printf("\n");
	for(int i=0;i<m;++i)
	    printf("%d ",R[i]);
	printf("\n");
	for(int i=m-1;i>=0;--i)
	    printf("%d ",RR[i]);
	printf("\n");
	for(int i=0;i<=m;++i)
	    printf("%d ",RR[i]);
	printf("\n");*/

	delete [] T;
	delete [] TR;
	delete [] W;
	delete [] WR;
	delete [] PP;
	delete [] PPR;

	int w=0;
	int *ppp=new int[m+5];
	int *ptr=ppp;

	if(R[0]==n)
	{
	    ++w;
	    *ptr++=0;
	}
	for(int i=1;i<m;++i)
	{
	    if(RR[m-i]==n)
		--RR[m-i];
	    for(;R[i]+RR[m-i]>=n;++w,--RR[m-i])
	    {
		if((ptr!=ppp) && (*(ptr-1)>=(i-RR[m-i])))
		{
		    --w;
		    continue;
		}
		*ptr++=i-RR[m-i];
	    }
	}

	printf("%d",w);
	for(int i=0;i<w;++i)
	    printf(" %d",ppp[i]);
	printf("\n");

	delete [] R;
	delete [] RR;
	delete [] ppp;
    }
    return 0;
}
