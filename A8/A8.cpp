#include <iostream>
using namespace std;

template<class a>
a pow(a x,unsigned int n)
{
	a m=x,w=1;
	while(n)
	{
		if(n&1)
			w*=m;
		m*=m;
		n>>=1;
	}
	return w;
}

int main()
{
	ios_base::sync_with_stdio(0);
	unsigned int i=8;
	cout<<pow(0,i)<<'\n';
	return 0;
}

