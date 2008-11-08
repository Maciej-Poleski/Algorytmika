#include <iostream>
#include <fstream>
using namespace std;

int main(int argc,char**argv)
{
	ios_base::sync_with_stdio(0);
	ofstream wyj(argv[1]);
	unsigned int z=1;
	unsigned int n=1000,m=n*(n+1)/2;
	wyj<<n<<' '<<m;
	for(unsigned int i=1;i<=n;++i)
		for(unsigned int j=i+1;j<=n;++j)
			wyj<<i<<' '<<j<<endl;

	wyj.close();

	return 0;
}
