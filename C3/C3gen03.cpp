#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

size_t	z=40;
size_t	m=200000;

int main(int argc,char**argv)
{
	size_t a,b;
	srand(time(0));
	ios_base::sync_with_stdio(0);
	ofstream wyj(argv[1]);
	wyj<<z<<endl;
	while(z--)
	{
		wyj<<m<<endl;
		for(size_t i=0;i<m;++i)
		{
			a=rand();
			b=rand();
			wyj<<a<<' '<<a+rand()<<' '<<b<<' '<<b+rand()<<endl;
			cout<<z<<"     \r"<<flush;
		}
	}
	wyj.close();
	cout<<endl;
	return 0;
}