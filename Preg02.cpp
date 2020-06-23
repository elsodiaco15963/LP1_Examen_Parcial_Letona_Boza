#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
main(){
	string validar = "@untels.edu.pe";
	char correo[20], nombre[15];
	
	
	cout<<"Digite el correo:";
	cin.getline(nombre,15,'\n');
	cout<<"Digite el tipo de correo: ";
	//ejemplo -> @untels.edu.pe
	cin.getline(correo,20,'\n');
	
	system("cls");
	cout<<nombre<<correo<<endl;
	
	if(correo == validar){
		cout<<" Si es correo de la UNTELS";
	}else{
		cout<<"No es correo de la UNTELS";
	}
}
