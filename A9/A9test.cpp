#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	cout<<"Podaj nazwe zestawu testowego: ";
	string nazwa_in;
	cin>>nazwa_in;
	cout<<"Podaj nazwe kodu do testowania: ";
	string kod;
	cin>>kod;
	cout<<"Kompilowanie..."<<endl;
	system(("g++ -O3 -fomit-frame-pointer -march=athlon-xp "+kod+".cpp -o "+kod).c_str());
	cout<<"Uruchamianie kodu..."<<endl;
	system(("./"+kod+" < "+nazwa_in+".in > "+nazwa_in+".tout").c_str());
	
	return 0;
}

