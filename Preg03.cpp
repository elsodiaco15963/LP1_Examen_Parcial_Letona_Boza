#include <iostream>
#include <string.h>
using namespace std;
char a[100];
int contador,caracteres,espacio=0,letras=0;
main()
{
	cout<<"Ingrese una frase: "<<endl;
	gets(a);
	caracteres=strlen(a);
	for(contador=0;contador<=caracteres;contador++)
	{
		if(a[contador]==' ')
		{
			espacio++;
		}
	}
	letras=caracteres-espacio;
	cout<<"Letras : "<<letras<<endl;
}
