#include <cstdio>
#include <map>
#include <string>

using namespace std;

typedef long long int64;
typedef unsigned long long uint64;
typedef long int32;
typedef unsigned long uint32;
typedef unsigned int uint;

map<string,string> R;

int main()
{
    uint64 z; scanf("%llu",&z);
    while(z--)
    {
	uint64 n; scanf("%llu",&n);
	int c=0;
	while(n--)
	{
	    char command[9];
	    char name[18];
	    char value[18];
	    int T;
	    map<string,string>::iterator it;
	    scanf("%s ",command);
	    switch(*command)
	    {
		case 'I':
		    scanf("%s %s\n",name,value);
		    R[name]=value;
		    break;
		case 'S':
		    scanf("%d\n",&T);
		    it=R.begin();
		    while(T--)
			it++;
		    printf("%s\n",(it!=R.end())?it->first.c_str():"ERROR");
		    fprintf(stderr,"\r%d",++c);
		    break;
		default:
		    scanf("%s\n",name);
		    it=R.find(name);
		    printf("%s\n",(it!=R.end())?it->second.c_str():"ERROR");
		    break;
	    }
	}
    }
    return 0;
}
