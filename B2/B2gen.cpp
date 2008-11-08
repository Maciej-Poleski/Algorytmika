#include <fstream>
#include <iostream>
using namespace std;

unsigned int z=1,n,m;

int main(int argc,char**argv)
{
    ios_base::sync_with_stdio(0);
    ofstream out(argv[1]);
    out<<z<<endl;
    while(z--)
    {
        n=1400;
        m=n*(n-1)/2.0;
        out<<n<<' '<<m<<endl;
        for(unsigned int i=1;i<n;++i)
        {
            for(unsigned int j=i+1;j<=n;++j)
            {
                out<<i<<' '<<j<<endl;
                --m;
                if(m==0.0)
                    break;
            }
            if(m==0.0)
                break;
            cout<<'\r';
            cout<<(double)i/n*100<<"%   "<<flush;
        }
        cout<<endl;
    }
    out.close();
    
    return 0;
}
