
#include <iostream>
#include "Metodos.h"
#include <conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(int argc, char** argv) {
	int lim,lim2,lim3,n,i;
	srand(time(NULL));

	cout<<"\n\n\n\n\n\t\t************* INSERTOR DE PILAS *************"<<endl<<endl;
	cout<<"\t\tDigite el limite de la Pila: ";
	cin>>lim;
	Pila P(lim);
	system("cls");
	
	for(i=0;i<lim;i++)
	{
		n=100+rand()%(301-100);
		cout<<"Entero #"<<i+1<<" con el dato "<<n<<" asignado satisfactoriamente."<<endl;
		P.Apilar(n);
	}
	


	return 0;
}
