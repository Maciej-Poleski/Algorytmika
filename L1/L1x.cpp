#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

#define min(a,b) (a<b ? a : b)
#define ull unsigned long long

ull input[100000], max_input;
int primes[10000000], counter = 0;

ull pow(ull a, int p) {
	ull ret = 1;
	ull temp = a;
	while(p>0) {
		if(p%2==1) {
			ret *= temp;
		}
		temp *= temp;
		p /= 2;
	}
	return ret;
}

int sqrt(ull i) {
	ull l=1, p=min(100000000, i), s;
	while(l<p) {
		s = (l+p)/2;
		if((s+1)*(s+1)<=i) {
			l = s+1;
		}
		else
		{
			p = s;
		}
	}
	
	return (int)l;
}

void make_primes() {
	int sq = sqrt(max_input);
	int sq2 = sqrt(sq);
	
	vector <bool> *sito;
	sito = new vector<bool> (sq/2);
	
	primes[counter++] = 2;
	
	int i, j;
	for(i=3; i<sq2; i+=2) {
		if((*sito)[i/2] == 1) continue;
		primes[counter++] = i;
		
		for(j=i*i; j<sq; j+=i+i) {
			(*sito)[j/2] = 1;
		}
	}
	
	for(; i<sq; i+=2) {
		if((*sito)[i/2] == 1) continue;
		primes[counter++] = i;
	}
	
	delete sito;
}

ull factorize_euler(ull l) {
	if(l==1LL) return 1;
	
	int i, j=1, n;
	ull ret = 1;
	bool done = false;
	
	for(i=0; (ull)j<l && l>1 && i<counter; i++) {
		j = primes[i];
		if(l%j != 0) continue;
	
		n = 0;
		while(l%j == 0) {
			n++;
			l /= j;
		}
		
		//printf("EULER says: *= %d ^ %d - %d ^ %d\n", j, n, j, n-1);
		done = true;
		ret *= pow(j, n) - pow(j, n-1);
	}
	
	if(l>1) {
		if(!done) {
			ret = l-1;
		}
		else
		{
			ret *= l-1;
		}
	}
	
	return ret;
}

inline int pi(int n) {
	return upper_bound(primes, primes+counter, n)-primes;
}

int main() {
	max_input = 10000000000000000LL;
	make_primes();
	for(int i=0; i<counter; i++) {
		printf("%d\n", primes[i]);
	}
	/*
	int z, i;
	max_input = 0;
	
	scanf("%d", &z);
	for(i=0; i<z; i++) {
		scanf("%llu", &(input[i]));
		if(max_input < input[i]) {
			max_input = input[i];
		}
	}
	
	make_primes();
	
	for(i=0; i<z; i++) {
		printf("%llu %d\n", factorize_euler(input[i]), pi(sqrt(input[i])));
	}
	
	return 0;
	*/
}
