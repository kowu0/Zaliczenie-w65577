#pragma once
#include <string>
#include <iostream>
using namespace std;


class Paczka
{
	string data;
	string adres;
	int waga;
public:
	Paczka();
	Paczka(string data, string adres, int waga);
	Paczka(string data, string adres);

	void zmienAdresNadania(string adres);
	void piszDane();
	int podaj_koszt_nadania();
};

