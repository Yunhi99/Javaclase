/*
Escriba una expresi�n l�gica que sea verdadera si una variable de tipo car�cter llamada letra es 
una letra min�scula y falso en otro caso. Escriba una expresi�n l�gica que sea verdadera si una 
variable de tipo entero llamada edad es menor de 18 o mayor de 65. Escriba una expresi�n l�gica 
que sea verdadera si una variable de tipo entero llamada adivine est� entre 1 y 100. Escribauna
expresi�nl�gicaqueseaverdaderasiuna�oesbisiesto.Losa�osbisiestos son aquellos que o bien son 
divisibles por 4 pero no por 100, o bien son divisibles por 400. Escriba un programa que lea las 
variables letra, edad, adivine y anio, calcule el valor de las expresiones l�gicas anteriores e 
imprima el resultado. Debe almacenarse el resultado de las expresiones l�gicas en variables de 
tipo bool. Tengaencuentaquecuandoseimprimeporpantalla(con cout)unaexpresi�nl�gica queestrue,se
imprime1.Siesfalse,seimprimeun0.Eneltema2veremoslaraz�n. 
Ejemplo de entrada: a 30 0 2017--Salida correcta: 1 0 0 0 
Ejemplo de entrada: A 17 30 2000--Salida correcta: 0 1 1 1 
*/

#include<iostream>

using namespace std;

int main(){
	char letra;
	int edad, adivine, anio;
	bool minuscula, anios, acierto, bisiesto;
	
	cout << "Introduzca una letra \n";
	cin >> letra;
	cout << "Introduzca una edad \n";
	cin >> edad;
	cout << "Introduzca un numero entre 1 y 100 \n";
	cin >> adivine;
	cout << "Introduzca un anio \n";
	cin >> anio;
	
	
	minuscula = letra > 96 && letra < 123;
	anios = edad < 18 || edad > 65;
	acierto = adivine > 0 && adivine <= 100;
	bisiesto = ((anio % 4 == 0) && (anio%100 != 0)) || anio%400 == 0;
	
	cout << minuscula << " " << anios << " " << acierto << " " << bisiesto;
		
}
