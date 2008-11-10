#include <iostream>
#include <fstream>
using namespace std;

#define n 1000000
#define q 2

int main(int argc,char**argv)
{
    ios_base::sync_with_stdio(0);
    ofstream wyj(argv[1]);
    wyj<<1<<endl;
    wyj<<n<<endl;
    for(unsigned int i=1;i<n;++i)
        wyj<<i<<' '<<i+1<<endl;
    wyj<<q<<endl;
    cout<<1<<endl;
    for(unsigned int i=0;i<q;++i)
        wyj<<1<<' '<<n<<endl;
    
    return 0;
}
