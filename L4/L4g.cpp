#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <ctime>
using namespace std;

#define MAX 100000

int z=10000;
int n=4;
stringstream buf;

int prime[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101 };
int size=sizeof(prime)/sizeof(int);

int main(int argc,char **argv)
{
    ios_base::sync_with_stdio(0);
    if(argc<2)
	cerr<<"Podaj argumenty!\n",exit(1);
    ofstream wyj(argv[1]);
    srand(time(0));

    wyj<<z<<endl;
    for(int i=0;i<z;++i)
    {
	wyj<<n<<endl;
	int a=rand()%size;
	int b,c,d;
	while(a==(b=rand()%size));
	while((c=rand()%size)==a || c==b);
	while((d=rand()%size)==a || d==b || d==c);
	wyj<<rand()%MAX<<" "<<rand()%MAX<<" "<<prime[a]<<endl;
	wyj<<rand()%MAX<<" "<<rand()%MAX<<" "<<prime[b]<<endl;
	wyj<<rand()%MAX<<" "<<rand()%MAX<<" "<<prime[c]<<endl;
	wyj<<rand()%MAX<<" "<<rand()%MAX<<" "<<prime[d]<<endl;
    }
    wyj.close();
    return 0;
}
