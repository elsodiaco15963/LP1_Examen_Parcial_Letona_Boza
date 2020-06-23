/*Pregunta 01*/
#include<iostream>
using namespace std;
int i=1,numero,cont;
main(){
	
	cout << "Ingrese numero: ";
	cin >> numero;
	do{
		if(numero%i==0){
			cont++;
		}
		i++;
	}
	while(i<=numero);
	
	if(cont ==2){
		cout << "El numero es primo";
	}
	else{
		cout << "El numero no es primo";
	}
}
