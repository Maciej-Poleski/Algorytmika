#include <iostream>
#include <fstream>
using namespace std;
#include <cstdlib>

size_t	z=1;
size_t	n=5000000;

int main(int argc,char**argv)
{
	srand(time(0));
	ofstream wyj(argv[1]);
	wyj<<z<<endl;
	while(z--)
	{
		wyj<<n<<endl;
		for(size_t i=0;i<n;++i)
			wyj<<rand()<<' ';
		wyj<<endl;
		cout<<"\r"<<z<<"      "<<flush;
	}
	cout<<'\r';
	wyj.close();
	return 0;
}
