#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

unsigned int z=2000;
unsigned int n=1000;

int main(int argc,char**argv)
{
    ofstream wyj(argv[1]);
    wyj<<z<<endl;
    srand(time(0));
    while(z--)
    {
        wyj<<n<<endl;
        for(unsigned int i=0;i<n;++i)
        {
            wyj<<rand()<<' '<<rand()<<endl;
        }
    }
    wyj.close();
}
