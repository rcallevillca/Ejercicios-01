/*
12.Crear una función que le pida al usuario su nombre y apellido, e los imprima con 
el siguiente formato: “Apellido, Nombre”  
*/
/*
    Tengo 2 strings, uso un tercer string (aux) donde voy copiando todo
    ->en el for, termina al encontrar el \0, tengo un j que siempre va sumando, i vuelve a cero
    termino de copiar el string, j esta en la siguiente posicion, copio la ',' y el espacio
    luego copio el segundo string.
*/
#include <iostream>
using namespace std;

void pido_datos(char nombre[] , char apellido[] );
void muestro_datos( char string_final[] );
void copio_string( char aux[] , char str[] , int &j );
void inicial_en_mayuscula(char str[]);
void concatenar_palabras( char nombre[] , char apellido[] , char aux[] );

int main()
{
    char nombre[30];
    char apellido[30];
    char apellido_nombre[30];

    pido_datos( nombre , apellido );
    
    concatenar_palabras( nombre , apellido , apellido_nombre );

    muestro_datos( apellido_nombre );

    return 0;
}
void copio_string( char aux[] , char str[] , int &j )
{
    int i;
    /*
    Para realizar la funcion debo finalizar el aux
        .tengo una condicion, debo copiar al final ! lo soluciono al pasar j
        .si no paso la j-> voy al final del string, copio y finalizo el string largo
    */
    for( i = 0 ; str[i]!='\0' ; i++)
    {
        aux[j] = str[i];
        j++;
    }
    aux[j] = '\0';
}
void inicial_en_mayuscula(char str[])
{
    if( (str[0] > 'a') && (str[0] < 'z') )
        str[0] = str[0] - 32;//le resto 32, donde a=97 y al restar 32 va a ser igual a 65=A  que seria su valor en ascii
}
void concatenar_palabras( char nombre[] , char apellido[] , char aux[] )
{
    int i, j=0;

    inicial_en_mayuscula(nombre);
    inicial_en_mayuscula(apellido);

    copio_string( aux , apellido , j );//pasar la j, su posicion actual

    //termine de copiar el primer string

    aux[j] = ',';
    j++;
    aux[j] = ' ';
    j++;//para copiar despues del espacio
    copio_string( aux , nombre , j );
}
void pido_datos(char nombre[] , char apellido[] )
{
    cout<<"Ingrese su nombre : ";
    cin>>nombre;
    cout<<"Ingrese su apellido : ";
    cin>>apellido;
}
void muestro_datos( char string_final[] )
{
    cout<<endl<<"\t\tMuestro datos : "<<endl;
    cout<<"El string final es : <"<<string_final<<">"<<endl;
}
