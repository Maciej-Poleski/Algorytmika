#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	cout<<"Podaj nazwe zestawu danych do oceny: ";
	string nazwa;
	cin>>nazwa;
	ifstream plik1((nazwa+".out").c_str());
	ifstream plik2((nazwa+".tout").c_str());
	unsigned int q,w;
	do
	{
		plik1>>q;
		plik2>>w;
		if(q!=w)
			cout<<"Błąd: "<<w<<", a oczekiwano: "<<q<<endl;
	} while(plik1);
	
	return 0;
}

