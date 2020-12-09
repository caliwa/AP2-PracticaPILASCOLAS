#include <iostream>

using namespace std;

class Cola
{
	private:
		int Limite;
		int Tope;
		int *vec;
	
	public:
		Cola(int n);
		int GetTope();
		void Encolar(int d);
		bool ColaLlena();
		void LlenarCola(Cola A);
		void MostrarCola(int Tope);	
		void LlenarDesdeLista();	
 };
