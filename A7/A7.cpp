#include <cstdio>

class binInteger
{
	char *wsk;
	unsigned int size;
	
	public:
	
	binInteger() : size(4000)
	{
		wsk=new char[4000];
	}
	
};

binInteger a,b;

int main()
{
	printf("Działa!\n");
	return 0;
}
