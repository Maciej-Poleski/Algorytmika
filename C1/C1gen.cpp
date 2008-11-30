#include <iostream>
#include <fstream>
using namespace std;
#include <ctime>

unsigned int z=1;
unsigned int n=50000;
unsigned int m=50000;

int main(int argc,char**argv)
{
    unsigned int tm1,tm2;
    ofstream wyj(argv[1]);
    wyj<<z<<endl;
    while(z--)
    {
        wyj<<n<<' '<<m<<endl;
        for(unsigned int i=0;i<n;++i)
        {
            wyj<<rand()<<' '<<i<<'\n';
        }
        for(unsigned int i=0;i<m;++i)
        {
            tm1=rand();
            tm2=rand();
            wyj<<tm1<<' '<<tm1+rand()<<' '<<tm2<<' '<<tm2+rand()<<'\n';
        }
    }
    return 0;
}
