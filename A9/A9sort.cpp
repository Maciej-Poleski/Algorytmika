#include <cstdio>

template<class T>
void swap(T & l, T &p)
{
	T tmp=l;
	l=p;
	p=tmp;
}

template <class T>
unsigned int bublesort(T * tab,unsigned int size)
{
	unsigned int wynik=0;
	for(unsigned int i=1;i<size;++i)
		for(unsigned int j=size-1;j>i-1;--j)
		{
			if(tab[j-1]<tab[j])
			{
				swap(tab[j-1],tab[j]);
				++wynik;
			}
//			for(unsigned int ij=0;ij<size;++ij)
//				printf("%d ",tab[ij]);
//			printf("wynik: %u |i: %u| |j: %u|\n",wynik,i,j);
		}
	return wynik;
}

int main()
{
	unsigned int z;
	scanf("%u",&z);
	while(z--)
	{
		unsigned int n;
		scanf("%u",&n);
		int *tab=new int[n];
		for(unsigned int i=0;i<n;++i)
			scanf("%d",tab+i);
		printf("%u\n",bublesort(tab,n));
		delete [] tab;
	}
	
	return 0;
}
