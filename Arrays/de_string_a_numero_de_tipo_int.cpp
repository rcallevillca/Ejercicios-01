#include <iostream>
#include <cmath>
using namespace std;

int version2(char nro[]);
int paso__de_string_a_int(char nro[]);
/*
Funcion que convierte un numero de tipo string a un numero del tipo int.
*/
int main()
{
	char nro[10];
	int n = 0;

	cout<<"\tFuncion que convierte un numero de tipo string a un numero del tipo int."<<endl<<endl;
	cout<<"Ingrese un numero: ";
	cin>>nro;

	//n = paso__de_string_a_int( nro );
	n = version2( nro );

	cout<<"El numero es : "<<n;

	return 0;
}
/*
Es un sist. de numeracion posicional de base 10
lo convierto a un numero , multiplico por la base y su peso , y lo voy sumando
1ero: lo convierto a un numero , al caracter le resto 48 porque el valor ascii del cero es 48
2do: como no se el peso con el que inicia(si es u,d,c) entonces recorro del final hacia el
   inicio y lo voy multiplicando por la base y potencia
        ej:12
        parte entera
            1era vuelta : 2 ,  2 * 10^0 = 2  ( n*base^peso )
            2da vuelta : 1 ,  1 * 10^1 = 10
            2 + 10 = 12

            peso=0 y aumenta en 1, base=10
            parte decimal , el peso es -1 -2....
*/
/*
Version 1. funcion
primer for, voy al final del array
    12, pos = 0 ->1
        pos = 1 ->2
        pos = 2 no ingreso al for pero i=2

termina el for
pos=i-1
segundo for
    entonces pos = pos; hasta que pos=-1 , pos--

    pos = 1     n = v[pos] - 48 , aca lo convierto a un numero
                suma = suma + (n*base^peso)
                peso++;
*/
/*
Version2:  luego hacerlo de forma recursiva
tomo la ultima posicion
    12  2*1 + 2*10 = 2 + 10 = 12
         u  d  c
        (1,10,100)
*/
int version2(char nro[])
{
	int i, pos = 0, suma = 0, n = 0, unidad = 1;

	for( i = 0 ; nro[i] != '\0'; i++ )
	{
	}
	pos = i - 1;
	for( pos = pos ; pos != -1 ; pos-- )
	{
		n = nro[pos] - 48;
		suma = suma + ( n*unidad );
		unidad *= 10;
	}
	return suma;
}

int paso__de_string_a_int(char nro[] )
{
	int i, suma = 0, pos = 0,n = 0, peso = 0, base = 10;

	//primer for
	for( i=0 ; nro[i] != '\0'; i++ )
	{
	}
	pos = i - 1;

	//segundo for
	for( pos = pos ; pos != -1 ; pos-- )//!=-1 para que tome la posicion cero
	{
		n = nro[pos] - 48;
		suma = suma + ( n * pow(base,peso) );
		peso++;
	}
	return suma;
}
