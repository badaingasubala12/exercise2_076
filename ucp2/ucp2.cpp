#include <iostream>
using namespace std;

class bidangDatar
{
private:
	int x;
public:
	bidangDatar() {
		x = 0;
	}
	virtual void input() {}
	virtual float Luas(int a){return 0;}
	virtual float Keliling(int a){ return 0; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
};


class Lingkaran :public bidangDatar{
private:
	float radius;
public:
	Lingkaran()
	{
		radius = 0;
	}
	void input()
	{
		cout << "masukan radius: ";
		cin >> radius;
		setX(radius);
	}
	float Luas(int a)
	{
		return 3.14 * radius * radius;
	}
	float Keliling(int a)
	{
		return 2 * 3.14 * radius;
	}


};

class Bujursangkar :public bidangDatar{
private:
	float sisi;
public:
	Bujursangkar()
	{
		sisi = 0;
	}
	void input()
	{
		cout << "masukan panjang sisi: ";
		cin >> sisi;
		setX(sisi);
	}
	float Luas(int a)
	{
		return sisi * sisi;
	}
	float Keliling(int a)
	{
		return 4 * sisi;
	}

};

int main() {
	bidangDatar* bd; // pointer objek polymorphic

	// Membuat objek Lingkaran
	cout << "Lingkaran dibuat" << endl;
	bd = new Lingkaran();
	bd->input();
	int radius = bd->getX();
	cout << "Luas Lingkaran = " << bd->Luas(r) << endl;
	cout << "Keliling Lingkaran = " << bd->Keliling(r) << endl;
	delete bd;

	// Membuat objek Bujursangkar
	cout << "Bujursangkar dibuat" << endl;
	bd = new Bujursangkar();
	bd->input();
	int sisi = bd->getX();
	cout << "Luas Bujursangkar = " << bd->Luas(sisi) << endl;
	cout << "Keliling Bujursangkar = " << bd->Keliling(sisi) << endl;
	delete bd;

	return 0;
}

