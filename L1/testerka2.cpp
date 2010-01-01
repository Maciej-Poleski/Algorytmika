#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

const int z=100;
const long long MAX=10000000000000000LL;

int main(int argc,char**argv)
{
    ios_base::sync_with_stdio(0);

    for(long long i=MAX;i>0;i-=z)
    {
	ofstream wyj("temp2.in");
	wyj<<z<<endl;
	for(long long j=i;j>i-z;--j)
	    wyj<<j<<'\n';
	wyj.close();
	system("./L1 < temp2.in > temp2.tout");
	system("./L1t < temp2.in > temp2.out");
	if(system("diff temp2.out temp2.tout"))
	    return 1;
    }
    return 0;
}
