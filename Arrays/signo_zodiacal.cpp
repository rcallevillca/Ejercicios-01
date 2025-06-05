/*
Escribir funciones que resuelvan los siguientes problemas:

Dado un año, que devuelva si es bisiesto. Nota: un año es bisiesto si es un número divisible por 4, 
pero no si es divisible por 100, excepto que también sea divisible por 400.
Dado un mes y un año, que devuelva la cantidad de días correspondientes.
Pedirle al usuario su día y mes de cumpleaños. El programa debe imprimir un mensaje indicando a qué signo 
corresponde el usuario.
armar una matriz

datos:    dia y mes 
marzo 
del 1 al 20 es piscis  marzo
dell 21 all 31 es aries
        if( strcmp(mes,"marzo"))
        {
            if( dia >=1 && dia <=20 )
                soy piscis
            if( dia >=21 && dia <=31 )
                soy aries
        }

...
sii mes == mayo o mes = abri l , entonces evaluo tod oabril y mayo
    antes viene abril 1 al 20 es aries
    intervalo(dia<1 && dia<=20) del 21 de abril a fin de abril 30
    es Tauro
    
    intervalo(dia>=20 && dia<=31)
    es geminis 
    

Tauro: 21 de abril al 20 de mayo.
Géminis: 21 de mayo al 21 de junio.


----

Aries: 21 de marzo al 20 de abril.
Tauro: 21 de abril al 20 de mayo.
Géminis: 21 de mayo al 21 de junio.
Cáncer: 22 de junio al 23 de julio.
Leo: 24 de julio al 23 de agosto.
Virgo: 24 de agosto al 23 de septiembre.
Libra: 24 de septiembre al 22 de octubre.
Escorpio: 23 de octubre al 22 de noviembre.
Sagitario: 23 de noviembre al 21 de diciembre.
Capricornio: 22 de diciembre al 20 de enero.
Acuario: 21 de enero al 19 de febrero.
Piscis: 20 de febrero al 20 de marzo.
 */
 #include <iostream>
#include <string.h>
using namespace std;

void te_digo_tu_signo_zodiacal(char mes[], int dia);

int main()
{
    int dia;
    char mes[10];
	cout<<"\t\tFuncion  que dice tu signo zodiacal."<<endl;

    cout<<"Ingresa el dia";
    cin>>dia;
    cout<<"Ingresa el mes";
    cin>>mes;

    te_digo_tu_signo_zodiacal( mes ,  dia);

	return 0;
}
//Optimizar !!
void te_digo_tu_signo_zodiacal(char mes[], int dia)
{
        if( strcmp(mes,"enero"))
        {
            if( dia >=1 && dia <=20 )
                cout<<endl<<"Soy capricornio";
            if( dia >=21 && dia <=31 )
                cout<<endl<<"Soy acuario";
        }
        if( strcmp(mes,"febrero"))
        {
            if( dia >=1 && dia <=19 )
                cout<<endl<<"Soy acuario";
            if( dia >=20 && dia <=28 )
                cout<<endl<<"Soy piscis";
        }
        if( strcmp(mes,"marzo"))
        {
            if( dia >=1 && dia <=20 )
                cout<<endl<<"Soy piscis";
            if( dia >=21 && dia <=31 )
                cout<<endl<<"Soy aries";
        }
        //------------
        //abri 30, mayo 31 , junio 30, jul31 , ag 31 sept 30 oct 31, nov 30,  dic 31 
        if( strcmp(mes,"abril"))
        {
            if( dia >=1 && dia <=20 )
                cout<<endl<<"Soy aries";
            if( dia >=21 && dia <=30 )
                cout<<endl<<"Soy tauro";
        }
        if( strcmp(mes,"mayo"))
        {
            if( dia >=1 && dia <=20 )
                cout<<endl<<"Soy tauro";
            if( dia >=21 && dia <=30 )
                cout<<endl<<"Soy geminis";
        }
        if( strcmp(mes,"junio"))
        {
            if( dia >=1 && dia <=21 )
                cout<<endl<<"Soy geminis";
            if( dia >=22 && dia <=30 )
                cout<<endl<<"Soy cancer";
        }
        if( strcmp(mes,"julio"))
        {
            if( dia >=1 && dia <=23 )
                cout<<endl<<"Soy cancer";
            if( dia >=24 && dia <=31 )
                cout<<endl<<"Soy leo";
        }
        if( strcmp(mes,"agosto"))
        {
            if( dia >=1 && dia <=23 )
                cout<<endl<<"Soy leo";
            if( dia >=24 && dia <=31 )
                cout<<endl<<"Soy virgo";
        }
        if( strcmp(mes,"septiembre"))
        {
            if( dia >=1 && dia <=23 )
                cout<<endl<<"Soy virgo";
            if( dia >=24 && dia <=30 )
                cout<<endl<<"Soy libra";
        }
        if( strcmp(mes,"octubre"))
        {
            if( dia >=1 && dia <=22 )
                cout<<endl<<"Soy libra";
            if( dia >=23 && dia <=31 )
                cout<<endl<<"Soy escorpio";
        }
        if( strcmp(mes,"noviembre"))
        {
            if( dia >=1 && dia <=22 )
                cout<<endl<<"Soy escorpio";
            if( dia >=23 && dia <=30 )
                cout<<endl<<"Soy sagitario";
        }
        if( strcmp(mes,"diciembre"))
        {
            if( dia >=1 && dia <=21 )
                cout<<endl<<"Soy sagitario";
            if( dia >=22 && dia <=31 )
                cout<<endl<<"Soy capricornio";
        }
 }

