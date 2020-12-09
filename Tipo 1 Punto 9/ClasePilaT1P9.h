#include <iostream>

using namespace std;

class Pila
{
	private:
		int Limite;
		int Tope;
		int *vec;
	
	public:
		Pila(int n);
		~Pila();
		int GetLimite();
		void SetLimite(int l);
		int GetTope();
		void SetTope(int t);
		int GetVector();
		void SetVector(int v);
		void Apilar(int d);
		int desapilar();
		bool PilaLlena();
		bool PilaVacia();
		void LlenarPila(Pila A);
		void MostrarPila();
		void InvertirPila();
		void LlenarDesdeFichero(int lim);
		
};


