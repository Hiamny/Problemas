
#include <iostream>
#include <cstring>


class Animal
{
	protected:
	 int age;char name[7];
	public:
	 void set_data (int a, char b[9])
	 {
		age = a;
		strcpy(b,name);
	 }

};

class Zebra:public Animal
{public:

void message_zebra()
{cout<< "The zebra named "<< name<<" is "<< age << "years old. The zebra comes from the Savanna. \n";}
};

class Dolphin: public Animal
{public:

void message_dolphin()
{cout<< "The dolphin named "<< name<< " is "<<age << "years old. The dolphin comes from the carribean.\n";}
};


int main ()
{
	Zebra zeb;
	Dolphin dol;
	char n1[7]="Ana";
	char n2[9]="Jin";

	zeb.set_data (5,n1);
	dol.set_data (2,n2);

	zeb.message_zebra() ;
	dol.message_dolphin() ;

	return 0;
}