#include <iostream>
#include <fstream>

using namespace std;

uint32_t		z=1;
uint32_t		n=10000;
uint32_t		m=n*10;
uint32_t		l=10000;

uint32_t		p;

int main(int argc,char **argv)
{
	ios_base::sync_with_stdio(0);
	ofstream wyj(argv[1]);
	ifstream wej("/dev/urandom");
	wyj<<z<<endl;
	while(z--)
	{
		wyj<<n<<' '<<1<<' '<<n<<endl;
		for(uint32_t i=1;i<=n;++i)
		{
			p=wej.get();
			wyj<<p<<' '<<n/n;
			for(uint32_t j=i;j<i+1;++j)
			{
				wyj<<' '<<j%n+1<<' '<<l;
			}
			wyj<<endl;
		}
	}
	wyj.close();
	wej.close();
	return 0;
}
