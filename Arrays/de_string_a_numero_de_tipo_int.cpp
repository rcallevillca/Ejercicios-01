
#include <iostream>
#include <cmath>
using namespace std;

int version2(char nro[]);
int paso_string_a_un_numero(char nro[]);
/*
Funcion que convierte un string a un numero del tipo int ( uso float para que sea decimal) , muestra su parte entera
(pasar a otra base , uso un menu, lo unico que cambia es la base a octal hexa y binario).
*/

int main()
{
    char nro[10];
    int n = 0;
    
    cout<<"\tFuncion que convierte un numero de tipo string a un numero del tipo int numero es : "<<endl<<endl;
    cout<<"Ingrese un numero: ";
    cin>>nro;
     
    //n = paso_string_a_un_numero( nro );
    n = version2(char nro[]);
    cout<<"El numero es : "<<n;
   
    return 0;
}
    /*es un sist. de numeracion posicional de base 10
    lo convierto a un numero , multiplico por la base y su peso , y lo voy sumando 
    1º lo convierto a un numero , al caracter le resto 48 porque el valor ascii del cero es 48
    2º como no se como empieza(si es u,d,c) entonces recorro del final hacia el 
     inicio y lo voy multiplicando con su base y potencia
            ej:12
            parte entera
                1ºvuelta : 2 ,  2 * 10^0 = 2  ( n*base^peso )
                2ºvuelta : 1 ,  1 * 10^1 = 10
                2 + 10 = 12

                peso=0 y aumenta en 1, base=10 
                //ver como pasar de un nro decimal a otro sist. 
                numerico (octal,hexadecimal,binario)
            parte decimal , el peso es -1 -2....
                 uso la misma funcion
    */
    //voy al final = pos = i , hasta que el nro[i] != -1 , para incluir el cero
    /*
    version 1
    primer for uso el indice i=0
    12, pos = 0 ->1
        pos = 1 ->2
        pos = 2 no ingreso al for pero i=2
    
    termina el for
    pos=i-1
    segundo for        
        entonces pos = pos; hasta que pos=0 , pos--

        pos = 1     n = v[pos] - 48 , aca lo convierto a un numero
                    suma = suma + (n*base^peso)
                    peso++;
    */
/*
    version2:  luego hacerlo de forma recursiva
    tomo la ultima posicion 
    12  2*1 + 2*10 = 2 + 10 = 12
         u  d  c 
        (1,10,100)
*/
int version2(char nro[])
{
    int i, suma=0 , pos=0,n=0,base=10,peso=0;
    
    for( i=0 ; nro[i] != '\0'; i++ )
    {
    }
    pos = i - 1;
    for( pos = pos ; pos != -1 ; pos-- )
    {
        n = nro[pos] - 48;
        suma = suma + n*unidad
        unida *= 10;
    }
    return suma;
}
/*
    ej:12
            parte entera
                1ºvuelta : 2 es unidad 2 * 10^0 = 2// n*base^peso 
                2ºvuelta : 1 es decena 1 * 10^1 = 10
                2 + 10 = 12
    */
int paso_string_a_un_numero(char nro[]) 
{
    int i, suma=0 , pos=0,n=0,base=10,peso=0;
    
    //primer for
    for( i=0 ; nro[i] != '\0'; i++ )
    {
    }
    pos = i - 1;

    //segundo for
    for( pos = pos ; pos != -1 ; pos-- )//quiero que tome la posicion cero , mientras sea distinto del -1
    {
        n = nro[pos] - 48;
        suma = suma + ( n * pow(base,peso) );
        peso++;
    }
    return suma;
}
