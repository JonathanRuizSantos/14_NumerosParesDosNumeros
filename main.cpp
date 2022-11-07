#include <iostream>

/* 
Programa que pide al usuario dos numeros y devuelve en pantalla todos los numeros
pares que se encuentran entre los dos numeros
 */

using namespace std;
int main(int argc, char** argv) {
	int numero1,numero2;
	
	cout<<"Programa que devuelve los numeros pares entre dos numeros"<<endl<<endl;
	
	cout<<"INGRESA DOS NUMEROS"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"Numero 1: ";
	cin>>numero1;
	cout<<"Numero 2: ";
	cin>>numero2;
	
	cout<<endl;
	if(numero1 >= numero2){
		cout<<"Numero 1 debe ser menor que Numero 2"<<endl;
		return 0;
	}
	
	int contador = numero1;
	while(contador <= numero2){
		if(contador % 2 == 0 && contador < numero2-1){
			cout<<contador<<", ";
		}else if(contador % 2 == 0 && contador < numero2){
			cout<<contador<<endl;
		}else if(contador % 2 == 0 && contador == numero2){
			cout<<contador<<endl;
		}
		contador++;
	}
	
	system("PAUSE");
	return 0;
}