/*
C�lculo de Ra�ces de una Ecuaci�n Cuadr�tica: Crea un programa que calcule las ra�ces de una 
ecuaci�n cuadr�tica utilizando la f�rmula general. Utiliza la funci�n sqrt de la librer�a cmath para 
calcular la ra�z cuadrada. Solicita al usuario los coeficientes de la ecuaci�n (a, b, c) y muestra las 
ra�ces obtenidas. Considera los casos en los que las ra�ces son reales o complejas.
*/
#include <iostream>
#include <cmath>

using namespace std;
int main () {
	int a,b,c;
	double xp, xn, raiz;
	cout << "Ingresa los valores de a,b,c:  " << endl;
	cin >> a;
	cin >> b;
	cin >> c;	
	
	raiz = (pow(b,2)-1*(4*(a*c)));
	
	if (raiz > 0){
		// Casos con numeros reales
		raiz = sqrt(raiz);
		xp = ((-1*b) + raiz ) / 2*a;
		xn = ((-1*b) - raiz ) / 2*a;
		cout << " Los resultados posibles son: " << xp << "  y  " << xn << endl;
	}else{
		//Casos con numeros complejos
		raiz = -1*raiz;
		raiz = sqrt(raiz);
		
		
		raiz = raiz/2*a;
		xp = (-1*b)/ 2*a;
		xn = (-1*b) / 2*a;
		
		cout << " Los resultados son: " << xp << " + " << raiz << "i   "<< endl;
		cout << " Los resultados son: " << xn << " - " << raiz << "i   "<< endl;
		
	}
	

	return 0;
}
