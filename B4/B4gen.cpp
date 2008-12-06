#include <iostream>
#include <fstream>
using namespace std;

int main(int argc,char**argv)
{
	ofstream wyj(argv[1]);
	unsigned int z,m=z=1;
	unsigned int n=100000;
	wyj<<z<<endl;
	while(z--)
	{
		wyj<<n<<' '<<n-1<<' '<<1<<endl;
		for(unsigned int i=1;i<n;++i)
			wyj<<i<<" sz "<<i+1<<endl;
		cout<<(double(m-z)/m)*100<<"%     \r"<<flush;
	}
	wyj.close();
	return 0;
}
