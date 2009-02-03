#include <iostream>
#include <fstream>
#include <stdint.h>
#include <vector>

using namespace std;

uint32_t		z=1;
uint32_t		n=200;
uint32_t		m=(n-1)*n/2;

vector<string>	osiedle;
uint8_t			temp;
uint8_t			temp32;
char			tmp[11];

int main(int argc,char**argv)
{
	ios_base::sync_with_stdio(0);
	ofstream wyj(argv[1]);
	ifstream wej("/dev/urandom");
	wyj<<z<<endl;
	while(z--)
	{
		wyj<<n<<endl;
		for(uint32_t i=0;i<n;++i)
		{
			for(uint32_t j=0;j<10;++j)
			{
				wej>>temp;
				tmp[j]=(temp%('Z'-'A'))+'A';
			}
			tmp[10]=0;
			wyj<<tmp<<'\n';
			osiedle.push_back(tmp);
		}
		
		wyj<<m<<endl;
		
		for(uint32_t i=0;i<m;++i)
		{
			wej>>temp32>>temp;
			temp32=temp32%n;
			temp%=n;
			if(osiedle[temp32]!=osiedle[temp])
			{
				wyj<<osiedle[temp32]<<' ';
				wyj<<osiedle[temp]<<' '<<1000000<<endl;
			}
			else
			{
				--i;
				continue;
			}
		}
		osiedle.clear();
	}
	wej.close();
	wyj.close();
	return 0;
}
