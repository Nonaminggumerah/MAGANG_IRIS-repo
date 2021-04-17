#include <iostream>
using namespace std;

class Imaji{
	public:

	double x,y;

	Imaji(double nx, double ny){

	x=nx;y=ny;}
};

int main(){

	double bil1,bil2;
	cout << "Bilangan pertama \n";
	cout<< "Masukkan bilangan riil:";
	cin>> bil1;
	cout<< "Masukkan bilangan imajiner:";
	cin>> bil2;
	Imaji bilangan1(bil1,bil2);
	cout << "Bilangan kedua \n";
    double bil3,bil4;
	cout<< "Masukkan bilangan riil:";
	cin>> bil3;
	cout<< "Masukkan bilangan imajiner:";
	cin>> bil4;
	
	Imaji bilangan2(bil3,bil4);

	double real;

    real = bilangan1.x +bilangan2.x;

    double imaji;

    imaji = bilangan2.x + bilangan1.y;

    cout << "Penjumlahan bilangan rill adalah "<< real << "\n";
    cout << "Penjumlahan bilangan imajiner adalah "<<imaji;

    return 0;
}
