#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdint.h>
using namespace std;

size_t z=10;
size_t n=1000000;

int main(int argc,char**argv)
{
	ios_base::sync_with_stdio(0);
	srand(time(0));
	ofstream wyj(argv[1]);
	wyj<<z<<endl;
	while(z--)
	{
		wyj<<n<<endl;
		for(size_t i=0;i<n;++i)
		{
			wyj<<char(rand()%25+65)<<char(rand()%25+65)<<rand()%10<<rand()%10<<rand()%10<<rand()%10<<rand()%10<<endl;
		}
		cout<<"\r    "<<z<<flush;
	}
	cout<<endl;
	wyj.close();
	return 0;
}

