#include <stdlib.h>

int main()
{
	do
	{
		//system("cat B12.out");
		system("./B12g01 B12.in");
	} while(system("./B12 < B12.in >/dev/null")==0);



}
