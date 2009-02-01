#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <stdint.h>
#include <vector>

#define left(x)		((x)<<1)
#define right(x)	(((x)<<1)|1)
#define parent(x)	((x)>>1)

typedef int typ_kopca;

typ_kopca	*heap;				//Kopiec
size_t		heap_size;

void heap_down(size_t n)
{
	size_t i=n,st=n;
	typ_kopca tmp=heap[n];
	while(left(n)<=heap_size)
	{
		if(right(n)<=heap_size && heap[right(n)]<heap[left(n)])
			i=right(n);
		else
			i=left(n);
		
		if(heap[i]<heap[n])
		{
			heap[n]=heap[i];
			//Dowiązania
		}
		else
		{
			break;
		}
		n=i;
	}
	if(i!=st)
	{
		heap[i]=tmp;
		//Dowiązania
	}
}

void make_heap()									/********** PRZENUMEROWANIE KOPCA *************/
{
	--heap;
	for(size_t i=heap_size>>1;i>0;--i)
		heapdown(i);
}

int main()
{
	srand(time(0));
	heap=new typ_kopca[heap_size=10];
	for(int i=0;i<heap_size;++i)
		heap[i]=rand()%22;
	
	for(int i=0;i<heap_size;++i)
		printf("%d ",heap[i]);
	putchar('\n');
	
	make_heap();
	
	for(int i=1;i<=heap_size;++i)
		printf("%d ",heap[i]);
	putchar('\n');
	
	return 0;
}
