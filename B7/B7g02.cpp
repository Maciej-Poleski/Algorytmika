#include <iostream>
#include <fstream>
using namespace std;

int	z=1;
int	n=50000;
int	m=n-1;

int main(int argc,char**argv)
{
	ios_base::sync_with_stdio(0);
	ofstream wyj(argv[1]);
	wyj<<z<<endl;
	while(z--)
	{
		wyj<<n<<' '<<m<<endl;
		for(int i=1;i<=m;++i)
			wyj<<1<<' '<<i+1<<endl;
		cout<<flush;
		cout<<z<<"          \r";
	}
	wyj.close();
}

