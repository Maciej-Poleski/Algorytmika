#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	cout<<"Podaj nazwe zestawu testowego do wygenerowania: ";
	string nazwa;
	cin>>nazwa;
	cout<<"Podaj liczbe zestawów danych: ";
	unsigned int z;
	cin>>z;
	cout<<"Trwa generowanie..."<<endl;
	ofstream plik((nazwa+".in").c_str());
	plik<<z<<'\n';
	while(z--)
	{
		unsigned int n=rand()%100000+1;
		plik<<n<<'\n';
		while(n--)
		{
			plik<<rand()<<' ';
		}
		plik<<endl;
	}
	plik.close();
	
	cout<<"Trwa rozwiązywanie..."<<endl;
	
	system("g++ -O3 -fomit-frame-pointer -march=athlon-xp -g0 A9sort.cpp -o A9sort");
	system(("./A9sort < "+nazwa+".in"+" > "+nazwa+".out").c_str());
	
	cout<<"Wejście zapisano do pliku: "+nazwa+".in\n";
	cout<<"Wyjście zapisano do pliku: "+nazwa+".out\n";
	return 0;
}
