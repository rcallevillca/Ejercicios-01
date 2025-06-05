/*
15. Hacer una funcion que reciba una palabra, le borre todas las letras
“a” e imprima el resultado por pantalla. Pista: usar una función 
predefinida de Python. Ejemplo: Si se recibe “casa” se debe imprimir “cs”
*/
/*
version 1:
Copio en otro vector, uso un auxiliar copio solo si es distinto a la letra 
*/
/*
version 2:
Modifico el mismo array, si es igual a la letra entonces lo piso y arrrastro el resto
*/
/*
v[i] != \0  
    “casas”
    si es igual a letra
    cambio      j=1 v[1] = v[2]  , s
                j=2 v[2] = v[3]  , a
                j=3 v[3] = v[4]  , s
                j=4 v[4] = v[5]  , \0
                fin->i--;
    “csas”
                i=2 si i incrementa no se si la primer letra que copie es igual a la que busco
                entonces debo revisar de nuevo la posicion actual
*/
#include <iostream>
#include <string.h>
using namespace std;

void menu_para_borrar_una_letra();
void borra_letra(char palabra[], char letra_a_borrar);

int main()
{
	cout<<"\t\tFuncion  que borra x cantidad de letras de un texto."<<endl;

	menu_para_borrar_una_letra();

	return 0;
}
void menu_para_borrar_una_letra()
{
	char texto[50];
	char letra_a_borrar, opcion;
	int flag = 0;

	cout<<endl<<"Ingrese un texto: ";
	cin.getline( texto, 50 );

	while( !flag )
	{
		cout<<endl<<endl<<"\tIngrese una opcion";
		cout<<endl<<"a.Borrar una letra   b. Finalizar"<<endl<<endl<<"->";
		cin>>opcion;

		if( opcion == 'b' || 0 == strlen(texto) )//lo ubico antes para saber si tengo texto a eliminar
		{
			flag++;//levanto el flag y voy de una a evaluar el flag
			if( 0 == strlen(texto) )
				cout<<"Texto vacio, no hay nada para borrar.";
			else
			{
				cout<<endl<<"El nuevo texto es: "<<texto<<" , y su tamanio es "<<strlen(texto);
				cout<<endl<<"Fin del ejercicio.";
			}
		}
		else
		{
			if( opcion == 'a' )
			{
				cout<<"Ingrese la letra a borrar: ";
				cin>>letra_a_borrar;

				cout<<endl<<"El texto es: "<<texto<<" , y su tamanio es "<<strlen(texto);

				borra_letra( texto, letra_a_borrar);

				cout<<endl<<"El nuevo texto es: "<<texto<<" , y su tamanio es "<<strlen(texto);
			}
			else
				cout<<endl<<"\t\"Opcion erronea. Vuelva a intentarlo.\"";
		}
	}
}
void borra_letra(char texto[], char letra_a_borrar)
{
	int i, j;
	for( i = 0 ; texto[i] != '\0' ; i++ )
	{
		if( texto[i] == letra_a_borrar )
		{
			for( j = i ; texto[j] != '\0' ; j++ )
			{
				texto[j] = texto[j+1];
			}
			i--;
		}
	}
}
