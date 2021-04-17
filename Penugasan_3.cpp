#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
	protected:
	 int umur;char nama[10];
	public:
	 void set_data (int a, char b[10])
	 {
		umur = a;
		strcpy(b,nama);
	 }

};

class Zebra:public Animal
{public:

void message_zebra()
{cout<< "Zebra namanya "<<nama<<" berumur "<< umur << "tahun. Zebra suka minum kopi. \n";}
};

class Lumbalumba: public Animal
{public:

void message_lumbalumba()
{cout<< "Lumba-lumba namanya "<< nama << " berumur "<< umur << "tahun. Lumba-lumba suka makan cokelat.\n";}
};


int main ()
{
	Zebra zeb;
	Lumbalumba lumba;
	char n1[10]="Pi'i'";
	char n2[10]="Yoyon";

	zeb.set_data (20,n1);
	lumba.set_data (12,n2);

	zeb.message_zebra() ;
	lumba.message_lumbalumba() ;

	return 0;
}

