#include <iostream>
#include <fstream>
using namespace std;

int main(int argc,char**argv)
{
    ifstream p1(argv[1]),p2(argv[2]);
    long long t1,t2;
    while(!p1.eof())
    {
        p1>>t1;
        p2>>t2;
        if(t1!=t2)
        {
            printf("Błąd: oczekiwano %lld a wczytano %lld\n",t1,t2);
        }
    }
    return 0;
}
