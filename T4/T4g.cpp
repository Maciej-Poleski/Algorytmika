#include <cstdio>
#include <cstdlib>
#include <ctime>

int main()
{
    int n=20;
    srand(time(0));

    printf("%d\n",n);
    while(n--)
    {
	int a=rand()%500000+1;
	int b=(rand()%(20))+1;
	printf("%d ",b);
	while(b--)
	    printf("%c",rand()%(2)+97);
	printf("\n");
	printf("%d ",a);
	while(a--)
	    printf("%c",rand()%(2)+97);
	printf("\n");
    }
    return 0;
}
