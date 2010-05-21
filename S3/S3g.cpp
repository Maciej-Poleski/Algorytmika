#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <utility>
#include <string>

using namespace std;

typedef long long int64;
typedef unsigned long long uint64;
typedef long int32;
typedef unsigned long uint32;
typedef unsigned int uint;

vector<pair<string,string> > insert;

int main()
{
    srand(time(0));
    uint64 z=1; printf("%llu\n",z);
    while(z--)
    {
	uint64 n=500000;

	insert.reserve(n+5);

	for(int i=n;i>0;--i)
	{
	    uint l=15;
	    string name="";
	    string value="";

	    while(l--)
	    {
		name+=rand()%(91-65)+65;
		value+=rand()%(58-48)+48;
	    }

	    insert.push_back((make_pair(name,value)));
	}

	uint64 f=20000;
	uint64 o=2*n+f;

	printf("%llu\n",o);

	for(int i=0;i<n;++i)
	    printf("INSERT %s %s\n",insert[i].first.c_str(),insert[i].second.c_str());
	for(int i=0;i<n;++i)
	    printf("FIND %s\n",insert[i].first.c_str());
	for(int i=0;i<f;++i)
	    printf("SELECT %u\n",rand()%insert.size());
    }
    return 0;
}
