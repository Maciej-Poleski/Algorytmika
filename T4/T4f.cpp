#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

void kmp(char* const W,const int N,int* const PS,char* const T,const int M,int* const R)
{
    int t=-1;
    for(int j=0;j<=M;++j)
    {
	while(t>=0 && T[j-1]!=W[t])
	    t=PS[t];
	R[j]=++t;
	if(t==N)
	    t=PS[t];
    }
}

int main()
{
    int z;
    scanf("%d\n",&z);
    while(z--)
    {
	vector<int> w;
	int n,m;
	scanf("%d ",&n);
	char *W=new char[n+5];
	scanf("%s\n",W);
	char *T;
	scanf("%d ",&m);
	T=new char[m+5];
	int PS[n+1];
	scanf("%s\n",T);
	for(int i=0;i<n;++i)
	{
	    char *NW=new char[n+5];
	    NW[0]=W[n-1];
	    for(int i=1;i<n;++i)
		NW[i]=W[i-1];
	    NW[n]=0;
	    delete [] W;
	    W=NW;
	    //printf("%s\n",W);
	    PS[0]=-1;
	    kmp(W,n,PS,W+1,n-1,PS+1);
	    int A[m+1];
	    A[0]=-1;
	    kmp(W,n,PS,T,m,A);

	    for(int i=1;i<=m;++i)
		if(A[i]==n)
		    w.push_back(i-n);
	}
	sort(w.begin(),w.end());
	vector<int> w2;
	vector<int>::iterator it=unique(w.begin(),w.end());
	for(vector<int>::iterator i=w.begin(),e=it;i!=e;++i)
	    w2.push_back(*i);
	printf("%d",(int)w2.size());
	for(vector<int>::iterator i=w2.begin(),e=w2.end();i!=e;++i)
	    printf(" %d",*i);
	printf("\n");
	delete [] W;
	delete [] T;
    }
}
