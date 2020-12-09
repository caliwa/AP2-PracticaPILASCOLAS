#include <iostream>
#include "MetodosCola.h"
#include <conio.h>
using namespace std;
int main(int argc, char** argv) {
	int i;
	i=LeerLista();
	Cola c1(i);
	c1.LlenarDesdeLista(); 
	cout<<"************* SE INSERTO LA INFORMACION A LA COLA *************"<<endl;
	cout<<"*********************************************"<<endl;
	c1.MostrarCola(i);
	return 0;
}
