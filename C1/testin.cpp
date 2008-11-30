#include <iostream>
#include <fstream>
using namespace std;
int main(int argc,char**argv)
{
    ifstream plik(argv[1]);
    unsigned int n;
    plik>>n;
    for(unsigned int i=0;i<n;++i)
    {
        unsigned int a,b;
        plik>>a>>b;
        if(a>b)
            cout<<"!!!!!!"<<endl;
    }
    return 0;
}
