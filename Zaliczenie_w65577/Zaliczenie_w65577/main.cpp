#include <iostream>
#include "Paczka.h"
using namespace std;

void operator>>(istream& i, Paczka o) {
	o.dodajDane();
}

bool operator==(Paczka& t1, Paczka& t2) {
	return t1.sprDane(t2);
}


int main() {
	Paczka p1("2022.06.25", "Ul.Sucharskiego 2, Rzeszow", 60), p2("2022.06.25", "ul.Sucharskiego 2, Rzeszow");
	p1.piszDane();
	cout << endl;
	p1.zmienAdresNadania("ul.Strzyzowska 12, Rzeszow");
	p1.piszDane();
	cout << endl;
	cout << "Koszt nadania paczki wynosi: " << p1.podaj_koszt_nadania() << endl;
	p2.piszDane();
	//Paczka p3;
	//cin >> p3;
	//p3.piszDane();
	/*if (p1 == p2) {
		cout << "Paczki maja taki sam adres nadania i wage";
	}
	else
		cout << "Paczki sa rozne";*/
}