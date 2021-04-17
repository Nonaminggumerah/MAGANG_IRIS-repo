#include <iostream>

using namespace std;

class Bentuk
{
protected:
	float lebar, tinggi;
public:
	void set_data (float a, float b)
	{
		lebar = a;
		tinggi = b;
	}
};

class Segi4: public Bentuk
{
public:
	float luas ()
	{
		return (lebar * tinggi);
	}
};

class Segi3 : public Bentuk
{
public:
	float luas ()
	{
		return (lebar * tinggi / 2);
	}
};

int main (){

	Segi4 Se4;
	Segi3 Se3;
	Se4.set_data (7,3);
	Se3.set_data (2,9);
	cout << Se4.luas() << endl;
	cout << Se3.luas() << endl;
	return 0;
}
