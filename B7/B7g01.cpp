#include <iostream>
#include <fstream>
using namespace std;

int 	z=100;
int	n=50000;
int	m=500000;

int main(int argc,char**argv)
{
	ios_base::sync_with_stdio(0);
	ofstream wyj(argv[1]);
	wyj<<z<<endl;
	while(z--)
	{
		wyj<<n<<' '<<m<<endl;
		for(int i=1;i<=n;++i)
		{
			for(int j=0;j<10;++j)
			{
				wyj<<i<<' '<<(i+j)%(n)+1<<endl;
			}
		}
	}
	wyj.close();
	return 0;
}
