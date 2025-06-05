/*
ej14.
c)Hacer una función que reciba una palabra y que imprima la palabra dada vuelta. 
  Ejemplo: Si se recibe “materia” se debe imprimir “airetam”.
*/
#include <iostream>
#include <string.h>
using namespace std;

void invertir_una_palabra( char in[], char out[]);

int main()
{
    char word[10];
    char inverse[10];
    cout<<"Enter a word: ";
    cin>>word;
    invertir_una_palabra( word , inverse);
    cout<<"The inverse of <"<<word<<"> is: <"<<inverse<<">";
    return 0;
}
/*
I go to the end of the string to be in the last position, copy and end the string.
*/
void invertir_una_palabra( char in[], char out[])
{
    int lenght = strlen(in) , i=0, j=0;
    for( i = lenght-1 ; i != -1 ; i-- )
    {
        out[j] = in[i];
        j++;
    }
    out[lenght] = '\0';
}
