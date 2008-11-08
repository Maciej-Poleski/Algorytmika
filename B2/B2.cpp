#include <cstdio>
#include <vector>
#include <list>
#include <queue>
using namespace std;

struct listy
{
	queue<unsigned int> out;
	list<unsigned int> in;
};

vector<listy> graf;
queue<unsigned int> kolejka;
queue<unsigned int> wyj;
unsigned int n,m;

void top_sort()
{
	while(!kolejka.empty())
	{
		unsigned int &vertex=kolejka.front();
		listy &lista=graf[vertex];
		wyj.push(vertex);
		while(!lista.out.empty())
		{
			unsigned int &element=lista.out.front();
			graf[element].in.remove(vertex);
			if(graf[element].in.empty())
				kolejka.push(element);
			lista.out.pop();
		}
		kolejka.pop();
	}
}

int main()
{
	unsigned int z;
	scanf("%u",&z);
	while(z--)
	{
		scanf("%u%u",&n,&m);
		graf.resize(n+1);
		unsigned int x,y;
		for(unsigned int i=0;i<m;++i)
		{
			scanf("%u%u",&x,&y);
			graf[x].out.push(y);
			graf[y].in.push_back(x);
		}
		for(unsigned int i=1;i<=n;++i)
		{
			if(graf[i].in.empty())
				kolejka.push(i);
		}
	
		top_sort();
	
		bool ok=true;
	
		for(unsigned int i=1;i<=n;++i)
		{
			if(!graf[i].out.empty())
				ok=false;
		}
		if(ok)
		{
			puts("OK");
			while(!wyj.empty())
			{
				printf("%u ",wyj.front());
				wyj.pop();
			}
			putchar('\n');
		}
		else
		{
			puts("CYKL");
			while(!wyj.empty())
				wyj.pop();
		}

		graf.clear();
	}
	
	return 0;
}