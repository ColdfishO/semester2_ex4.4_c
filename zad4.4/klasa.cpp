#include<iostream>
#include"klasa.h"
using namespace std;
Tbudynek::Tbudynek() {
	for (int i = 0;i < 50;i++) {
		this->ulica[i] = NULL;
	}
	for (int i = 0;i < 5;i++) {
		this->nr_domu[i] = NULL;
	}
	for (int i = 0;i < 50;i++) {
		this->miejscowoœæ[i] = NULL;
	}
	for (int i = 0;i < 7;i++) {
		this->kod_pocztowy[i] = NULL;
	}
	for (int i = 0;i < 50;i++) {
		this->miejsc_poczty[i] = NULL;
	}
	for (int i = 0;i < 5;i++) {
		this->nr_mieszkania[i] = NULL;
	}
	cout << "Uruchamiany konstruktor klasy Tbudynek" << "\n\n";
}
Tbudynek::Tbudynek(char x[50], char y[5], char z[50], char a[7], char c[50], char b[5]) {
	for (int i = 0;i < 50;i++) {
		this->ulica[i] = x[i];
	}
	for (int i = 0;i < 5;i++) {
		this->nr_domu[i] = y[i];
	}
	for (int i = 0;i < 50;i++) {
		this->miejscowoœæ[i] = z[i];
	}
	for (int i = 0;i < 7;i++) {
		this->kod_pocztowy[i] = a[i];
	}
	for (int i = 0;i < 50;i++) {
		this->miejsc_poczty[i] = c[i];
	}
	for (int i = 0;i < 5;i++) {
		this->nr_mieszkania[i] = b[i];
	}
}
Tbudynek::~Tbudynek() {
	cout<<"Uruchamiany destruktor klasy Tbudynek"<<"\n\n" << endl;
}
Tbudynek Tbudynek::zwroc() {
	Tbudynek x;
	for (int i = 0;i < 50;i++) {
		x.ulica[i] = this->ulica[i];
	}
	for (int i = 0;i < 5;i++) {
		x.nr_domu[i] = this->nr_domu[i];
	}
	for (int i = 0;i < 50;i++) {
		x.miejscowoœæ[i] = this->miejscowoœæ[i];
	}
	for (int i = 0;i < 7;i++) {
		x.kod_pocztowy[i] = this->kod_pocztowy[i];
	}
	for (int i = 0;i < 50;i++) {
		x.miejsc_poczty[i] = this->miejsc_poczty[i];
	}
	for (int i = 0;i < 5;i++) {
		x.nr_mieszkania[i] = this->nr_mieszkania[i];
	}
	return x;
}
Tbudynek Tbudynek::operator<<(Tbudynek x) {
	cout << "Adres budynku:" << endl;
	cout << "ul. " << x.ulica << " " << x.nr_domu << " " << x.miejscowoœæ << " mieszkanie nr " << x.nr_mieszkania << endl;
	cout << x.kod_pocztowy << " " << x.miejsc_poczty << "\n\n";
	return x;
}
Tbudynekmieszkalny::Tbudynekmieszkalny() :Tbudynek() {
	this->LiczbaMieszkancow = 0;
	cout << "Uruchamiany konstruktor klasy Tbudynekmieszkalny" << "\n\n";
}
Tbudynekmieszkalny::Tbudynekmieszkalny(int x) {
	this->LiczbaMieszkancow = x;
}
Tbudynekmieszkalny::~Tbudynekmieszkalny() {
	cout << "Uruchamiany destruktor klasy Tbudynekmieszkalny" << "\n\n";
}
Tbudynekmieszkalny Tbudynekmieszkalny::zwroc() {
	Tbudynekmieszkalny x;
	x.LiczbaMieszkancow = this->LiczbaMieszkancow;
	return x;
}
Tbudynekmieszkalny Tbudynekmieszkalny::operator<<(Tbudynekmieszkalny x) {
	cout << "Liczba mieszkañców: " << x.LiczbaMieszkancow << "\n\n";
	return x;
}
Tdata::Tdata() {
	this->rok = 0;
	this->miesi¹c = 0;
	this->dzieñ = 0;
	cout << "Uruchamiany konstruktor klasy Tdata" << "\n\n";
}
Tdata::Tdata(int x, int y, int z) {
	this->rok = x;
	this->miesi¹c = y;
	this->dzieñ = z;
}
Tdata::~Tdata() {
	cout << "Uruchamiany destruktor klasy Tdata" << "\n\n";
}