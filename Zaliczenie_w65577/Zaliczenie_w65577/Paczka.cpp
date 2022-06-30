#include "Paczka.h"

Paczka::Paczka()
{
	data = "Brak danych";
	adres = "Brak danych";
	waga = -1;
}

Paczka::Paczka(string data, string adres, int waga)
{
	this->data = data;
	this->adres = adres;
	this->waga = waga;
}

Paczka::Paczka(string data, string adres)
{
	this->data = data;
	this->adres = adres;
	this->waga = -1;
}

void Paczka::zmienAdresNadania(string adres)
{
	this->adres = adres;
}

void Paczka::dodajDane()
{
	cout << "Podaj date nadania: "; cin >> data;
	cout << "Podaj adres nadawcy: "; cin >> adres;
	cout << "Podaj wage: "; cin >> waga;
	cout << endl;
	
}

bool Paczka::sprDane(Paczka dif)
{
	if (this->adres == dif.adres && this->waga == dif.waga) {
		return 1;
	}
	return 0;
}

void Paczka::piszDane()
{
	cout << "Data nadania paczki: " << data << endl;
	cout << "Adres nadawcy: " << adres << endl;
	cout << "Waga paczki wynosi: " << waga << endl;
}

int Paczka::podaj_koszt_nadania()
{
	if (waga <= 0) {
		cout << "Podano bledna wage";
	}
	if (waga > 0 && waga < 10) {
		return 20;
	}
	else if (waga > 10 && waga < 50) {
		return 30;
	}
	else if (waga > 50) {
		return 50;
	}
	return 0;
}
