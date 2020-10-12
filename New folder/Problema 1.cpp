#include <iostream>




class forma
{
protected:
	float ancho, altura;
public:
	void set_data (float x, float y)
	{
		ancho = x;
		altura = y;
	}
};

class Rectangulo: public forma
{
public:
	float area ()
	{
		return (ancho * altura);
	}
};

class Triangulo: public forma
{
public:
	float area ()
	{
		return (ancho * altura / 2);
	}
};

int main (){

	Rectangulo rect;
	Triangulo tri;
	rect.set_data (5,3);
	tri.set_data (2,5);
	cout << rect.area() << endl;
	cout << tri.area() << endl;
	return 0;
}