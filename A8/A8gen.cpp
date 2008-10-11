#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    srand(time(0));
    cout<<"Podaj nazwę pliku wyjściowego: ";
    string n;
    cin>>n;
    ofstream plik(n.c_str());
    unsigned int z=5000;
    plik<<z<<endl;
    while(z--)
    {
        unsigned int k=80,m=1000000000;
        plik<<k<<' '<<m<<endl;
        for(unsigned int i=0;i<k;++i)
            plik<<rand()<<' ';
        plik<<endl;
        for(unsigned int i=0;i<k;++i)
            plik<<rand()<<' ';
        plik<<endl;
    }
    plik.close();

    return 0;
}
