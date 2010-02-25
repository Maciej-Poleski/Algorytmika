#include <stdio.h>

int main(void)
{
    do
    {
	system("./T4g > T4t02.in");
	system("./T4  < T4t02.in > T4t02.tout");
	system("./T4f < T4t02.in > T4t02.out");
    } while(!system("diff T4t02.out T4t02.tout"));
    return 1;
}
