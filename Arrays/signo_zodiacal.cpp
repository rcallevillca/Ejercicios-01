/*
Guia 3. 
ej 5. Escribir funciones que resuelvan los siguientes problemas:
Dado un año, que devuelva si es bisiesto. Nota: un año es bisiesto si es un número divisible por 4, 
pero no si es divisible por 100, excepto que también sea divisible por 400.
1.Dado un mes y un año, que devuelva la cantidad de días correspondientes.
2.Pedirle al usuario su día y mes de cumpleaños. El programa debe imprimir un mensaje indicando a qué signo 
corresponde el usuario.

enero 31, febrero 28, marzo 31, abril 30, mayo 31 , junio 30, jul 31 , ag 31, sept 30, oct 31, nov 30,  dic 31 

datos mes y año
2025
mes
---

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

void determinar_signo_zodiacal(char mes[], int dia);

int main()
{
    int dia, flag = 0 , flag2 = 0 ;
    char opcion;
    char mes[10];
    cout<<"\t\tFuncion  que determina tu signo zodiacal."<<endl<<endl;
    while( !flag )
    {
	    	cout<<endl<<"-----------------------------";
		cout<<endl<<endl<<"\tIngrese una opcion";
		cout<<endl<<"a. Determinar signo"<<endl<<"b. Finalizar"<<endl<<endl<<"->";
		cin>>opcion;
		if( opcion == 'b' )flag++;
		if( opcion == 'a' )
    		{
	    	    	while( !flag2 )
		        {
		        	cout<<"Ingresa el dia : ";
		                cin>>dia;
		                cout<<"Ingresa el mes : ";
		                cin>>mes;
		
		                if( dia >= 1 && dia <= 31 )
		                {
		                    determinar_signo_zodiacal( mes ,  dia );
		                    flag2++;
		                }
	                	else cout<<"\tIngreso un dia invalido."<<endl;//hacer un for para que evalue el dia
	            	}
	            flag2 = 0;
    		}
        	if( opcion != 'a' && opcion != 'b' )cout<<"\tIngreso una opcion invalida. Ingrese nuevamente la opcion."<<endl;
    }
    return 0;
}
/*
datos:    dia y mes 
marzo 
del 1 al 20 es piscis  
del 21 al 31 es aries

abril 30, mayo 31 , junio 30, jul 31 , ag 31, sept 30, oct 31, nov 30,  dic 31 
*/
void determinar_signo_zodiacal(char mes[], int dia)
{
                if(      ( !strcmp(mes,"enero")      && dia>=21 ) || ( !strcmp(mes,"febrero")    && dia<=19 ) )cout<<endl<<"Tu signo zodiacal es: acuario";
                else if( ( !strcmp(mes,"febrero")    && dia<=28 ) || ( !strcmp(mes,"marzo")      && dia<=20 ) )cout<<endl<<"Tu signo zodiacal es: piscis";
                else if( ( !strcmp(mes,"marzo")      && dia<=31 ) || ( !strcmp(mes,"abril")      && dia<=20 ) )cout<<endl<<"Tu signo zodiacal es: aries";
                else if( ( !strcmp(mes,"abril")      && dia<=30 ) || ( !strcmp(mes,"mayo")       && dia<=20 ) )cout<<endl<<"Tu signo zodiacal es: tauro";
                else if( ( !strcmp(mes,"mayo")       && dia<=30 ) || ( !strcmp(mes,"junio")      && dia<=21 ) )cout<<endl<<"Tu signo zodiacal es: geminis";
                else if( ( !strcmp(mes,"junio")      && dia<=30 ) || ( !strcmp(mes,"julio")      && dia<=23 ) )cout<<endl<<"Tu signo zodiacal es: cancer";
                else if( ( !strcmp(mes,"julio")      && dia<=30 ) || ( !strcmp(mes,"agosto")     && dia<=23 ) )cout<<endl<<"Tu signo zodiacal es: leo";
                else if( ( !strcmp(mes,"agosto")     && dia<=31 ) || ( !strcmp(mes,"septiembre") && dia<=23 ) )cout<<endl<<"Tu signo zodiacal es: virgo";
                else if( ( !strcmp(mes,"septiembre") && dia<=30 ) || ( !strcmp(mes,"octubre")    && dia<=22 ) )cout<<endl<<"Tu signo zodiacal es: libra";
                else if( ( !strcmp(mes,"octubre")    && dia<=31 ) || ( !strcmp(mes,"noviembre")  && dia<=22 ) )cout<<endl<<"Tu signo zodiacal es: escorpio";
                else if( ( !strcmp(mes,"noviembre")  && dia<=30 ) || ( !strcmp(mes,"diciembre")  && dia<=21 ) )cout<<endl<<"Tu signo zodiacal es: sagitario";
                else if( ( !strcmp(mes,"diciembre")  && dia<=31 ) || ( !strcmp(mes,"enero")      && dia<=20 ) )cout<<endl<<"Tu signo zodiacal es: capricornio";
 }
