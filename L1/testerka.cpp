#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

const int z=100;
const long long MAX=10000000000000000LL;

int main(int argc,char**argv)
{
    ios_base::sync_with_stdio(0);

    for(long long i=1;i<=MAX;i+=z)
    {
	ofstream wyj("temp.in");
	wyj<<z<<endl;
	for(long long j=i;j<i+z;++j)
	    wyj<<(((static_cast<long long>(rand()))<<32)|(rand()))%1000000LL<<'\n';
	wyj.close();
	system("./L1 < temp.in > temp.tout");
	system("./L1t < temp.in > temp.out");
	if(system("diff temp.out temp.tout"))
	    return 1;
    }
    return 0;
}
