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
		~Cola();
		int GetDigito();
		void SetDigito(int Dig);
		int GetLimite();
		void SetLimite(int l);
		int GetTope();
		void SetTope(int t);
		int GetVector();
		void SetVector(int v);
		void Encolar(int d);
		int Desencolar();
		bool ColaLlena();
		bool ColaVacia();
		void LlenarCola(Cola A);
		void MostrarCola();
		void InvertirCola();
		void EncolarUltDigito(Cola A, Cola B);
	
		
 };
