#ifndef KLASA_H
#define KLASA_H
class Tdata {
private:
	int rok;
	int miesi¹c;
	int dzieñ;
public:
	Tdata();
	Tdata(int x, int y, int z);
	~Tdata();
};
class Tbudynek {
private:
	char miejscowoœæ[50];
	char ulica[50];
	char nr_domu[5];
	char kod_pocztowy[57];
	char miejsc_poczty[50];
	char nr_mieszkania[5];
public:
	Tbudynek();
	Tbudynek(char x[50], char y[5], char z[50], char a[7], char c[50], char b[5]);
	~Tbudynek();
	Tbudynek zwroc();
	Tbudynek operator<<(Tbudynek x);
};
class Tbudynekmieszkalny : public Tbudynek {
private:
	int LiczbaMieszkancow;
	Tdata DataZasiedlenia;
public:
	Tbudynekmieszkalny();
	Tbudynekmieszkalny(int x);
	~Tbudynekmieszkalny();
	Tbudynekmieszkalny zwroc();
	Tbudynekmieszkalny operator<<(Tbudynekmieszkalny x);
};

#endif