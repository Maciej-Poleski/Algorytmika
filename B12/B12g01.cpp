#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

int	z=1;
int	n=15;
int	m=15;

int main(int argc,char**argv)
{
	int	l;
	int	k;
	srand(time(0));
	ofstream wyj(argv[1]);
	wyj<<z<<endl;
	while(z--)
	{
		wyj<<n<<' '<<m<<endl;

		for(int i=1;i<=n;++i)
		{
			wyj<<i<<' ';
			do
			{
				l=rand()%35+1;
			} while(l==i);
			wyj<<l<<' ';
			l=rand()%10000+1;
			wyj<<l<<' ';
			l=rand()%10000+1;
			wyj<<l<<' ';
			do
			{
				k=rand()%10000+1;
			} while(k>=l);
			wyj<<k<<' ';
			do
			{
				k=rand()%10000+1;
			} while(k>=l);
			wyj<<k<<endl;
		}			
	}
	wyj.close();
	return 0;
}

