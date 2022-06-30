#include <iostream>
#include "Paczka.h"
using namespace std;


int main() {
	Paczka p1("2022.06.25", "Uk.Sucharskiego2, Rzeszów", 15), p2("2022.06.25", "ul.Sucharskiego 2, Rzeszów");
	p1.piszDane();
	p1.zmienAdresNadania("ul.Strzyzowska 12, Rzeszów");
	p1.piszDane();
	cout << "Koszt nadania paczki wynosi: " << p1.podaj_koszt_nadania();
	p2.piszDane();
}