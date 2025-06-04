
#include <iostream>
using namespace std;

/*
Funcion que convierte un string a un numero del tipo int ( uso float para que sea decimal) , muestra su parte entera
(pasar a otra base , uso un menu, lo unico que cambia es la base a octal hexa y binario).
*/

int main()
{
    
}
void paso_string_a_un_numero() 
{
    /*es un sist. de numeracion posicional de base 10
    lo convierto a un numero , multiplico por la base y su peso , y lo voy sumando 
    1º lo convierto a un numero , al caracter le resto 48 porque el valor ascii del cero es 48
    2º como no se como empieza(si es u,d,c) entonces recorro del final hacia el 
     inicio y lo voy multiplicando con su base y potencia
            ej:12
            parte entera
                1ºvuelta : 2 es unidad 2 * 10^0 = 2// n*base^peso 
                2ºvuelta : 1 es decena 1 * 10^1 = 10
                2 + 10 = 12
                
                peso=0 y aumenta en 1, base=10 
                //ver como pasar de un nro decimal a otro sist. 
                numerico (octal,hexadecimal,binario)
            parte decimal , el peso es -1 -2....
                 uso la misma funcion
    */
    //voy al final = pos = i , hasta que el nro[i] != '\0'
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
    //primer for
    for( i=0 ; nro[i] != '\0'; i++ )
    {
        cout<<"\ni = "<<i;
    }
    pos = i - 1;
    //segundo for
        
}
