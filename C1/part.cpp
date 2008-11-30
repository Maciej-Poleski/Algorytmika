#include <iostream>
#include <fstream>
using namespace std;

string itoa(unsigned int a)
{
    string wynik="";
    while(a)
    {
        wynik=static_cast<char>(a%10+'0')+wynik;
        a/=10;
    }
    return wynik;
}

int main(int argc,char**argv)
{
    ifstream wej(argv[1]);
    unsigned int z,n,m;
    string tmp;
    wej>>z;
    for(unsigned int i=0;i<z;++i)
    {
        tmp=itoa(i+1)+".in";
        ofstream wyj(tmp.c_str());
        wej>>n>>m;
        getline(wej,tmp);
        wyj<<1<<endl<<n<<' '<<m<<endl;;
        for(unsigned int j=0;j<n+m;++j)
        {
            getline(wej,tmp);
            wyj<<tmp<<endl;;
        }
        cout<<"                    \r";
        wyj.close();
        cout<<(double)i/z*100<<'%'<<flush<<'\r';
    }
    return 0;
}
