#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int     z=1;
int     n=100000;
int     m=4;

int main(int argc,char**argv,char**env)
{
    ios_base::sync_with_stdio(0);
    srand(time(0));
    ofstream wyj(argv[1]);
    wyj<<z<<endl;
    while(z--)
    {
        wyj<<n<<endl;
        for(int i=0;i<n-1;++i)
        {
            wyj<<i<<endl;
        }
        wyj<<m<<endl;
        for(int i=0;i<m;++i)
        {
            int a=rand()%(n-1)+1;
            int b;
            do {
                b=rand()%(n-1)+1;
            } while(a==b);
            wyj<<a<<' '<<b<<endl;
        }
    }
    return 0;
}
