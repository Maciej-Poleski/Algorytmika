#include <iostream>
#include <fstream>

using namespace std;

int main(int argc,char**argv)
{
    ofstream wyj(argv[1]);
    int n=500;
    int m=n*(n-1)/2;
    int s=1;
    int t=n;
    wyj<<1<<endl<<n<<' '<<m<<' '<<s<<' '<<t<<endl;
    for(int i=1;i<=n;++i)
        for(int j=i+1;j<=n;++j)
            wyj<<i<<' '<<j<<endl;
    wyj.close();
    return 0;
}
