 /*
Escribir funciones que resuelvan los siguientes problemas:

Dado un año, que devuelva si es bisiesto. Nota: un año es bisiesto si es un número divisible por 4, 
pero no si es divisible por 100, excepto que también sea divisible por 400.
1.Dado un mes y un año, que devuelva la cantidad de días correspondientes.
2.Pedirle al usuario su día y mes de cumpleaños. El programa debe imprimir un mensaje indicando a qué signo 
corresponde el usuario.
armar una matriz

enero 31, febrero 28, marzo 31, abril 30, mayo 31 , junio 30, jul 31 , ag 31, sept 30, oct 31, nov 30,  dic 31 

...el unico mes qeu cambia la cant de dias es febrero
datos mes y año
2025
mes
tengo un vector con todos los meses, 0=enero, 1 =febrero
//
otro vector con dias 31 , 28 , 31

con i puedo imprimir todo el string
con j veo solo un caracte
i siempre es cero
si es mes = v[i] uso un j=i+1 para saltar a la sig linea e imprimro v[j]
                                     0   1    2
                                     j   j    j
                            0   i    en  feb  mar
                            1   i    31  28   31

    si es igual a enero seria igual a cero
retornar 30 
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

void determinar_signo_zodiacal(char mes[], int dia);

int main()
{
    int dia;
    char mes[10];
    cout<<"\t\tFuncion  que determina tu signo zodiacal."<<endl<<endl;

    cout<<"Ingresa el dia : ";
    cin>>dia;
    cout<<"Ingresa el mes : ";
    cin>>mes;

    determinar_signo_zodiacal( mes ,  dia);

	return 0;
}
/*todo ok pero falta Optimizar !!
datos:    dia y mes 
marzo 
del 1 al 20 es piscis  
dell 21 al 31 es aries

abril 30, mayo 31 , junio 30, jul 31 , ag 31, sept 30, oct 31, nov 30,  dic 31 
*/
//repito 2 veces el signo!, es necesario el 1? creo que no ya que seria un requisito previo
void determinar_signo_zodiacal(char mes[], int dia)
{
                if( ( 0==strcmp(mes,"enero") && dia>=21 )  || ( 0 == strcmp(mes,"febrero") && dia<=19 ) )
                    cout<<endl<<"Tu signo zodiacales es: acuario";
                if( ( 0 == strcmp(mes,"febrero") && dia<=28 ) ||( 0 == strcmp(mes,"marzo") && dia<=20 ) )
                    cout<<endl<<"Tu signo zodiacales es: piscis";
                if( (0==strcmp(mes,"marzo") &&dia <=31 ) || ( 0 == strcmp(mes,"abril")&&  dia<=20 ) )
                    cout<<endl<<"Tu signo zodiacales es: aries";
                if( ( 0 == strcmp(mes,"abril") && dia <=30 ) || ( 0 == strcmp(mes,"mayo") && dia<=20 ) )
                    cout<<endl<<"Tu signo zodiacales es: tauro";
                if( ( 0==strcmp(mes,"mayo") && dia<=30 )|| ( 0 == strcmp(mes,"junio") && dia <=21 ) )
                    cout<<endl<<"Tu signo zodiacales es: geminis";
                if( ( 0 == strcmp(mes,"junio")&&dia <=30 ) ||( 0 == strcmp(mes,"julio")&&dia <=23 ) )
                    cout<<endl<<"Tu signo zodiacales es: cancer";
                if( ( 0 == strcmp(mes,"julio")&&dia <=30 ) || ( 0 == strcmp(mes,"agosto" && dia<=23 ) )
                    cout<<endl<<"Tu signo zodiacales es: leo";
                if( ( 0 == strcmp(mes,"agosto")&&dia <=31 ) || ( 0 == strcmp(mes,"septiembre") && dia<=23 ) )
                    cout<<endl<<"Tu signo zodiacales es: virgo";
                if( ( 0 == strcmp(mes,"septiembre") && dia <=30 ) || ( 0 == strcmp(mes,"octubre")&& dia<=22 ) )
                    cout<<endl<<"Tu signo zodiacales es: libra";
                if( ( 0 == strcmp(mes,"octubre") && dia <=31 ) || ( 0 == strcmp(mes,"noviembre") && dia<=22 ) )
                    cout<<endl<<"Tu signo zodiacales es: escorpio";
                if( (0 == strcmp(mes,"noviembre") && dia <=30 ) || ( 0 == strcmp(mes,"diciembre") && dia<=21 ) )
                    cout<<endl<<"Tu signo zodiacales es: sagitario";
                if( ( 0 == strcmp(mes,"diciembre") && dia <=31 ) || ( 0 == strcmp(mes,"enero")  && dia<=20 ) )
                    cout<<endl<<"Tu signo zodiacales es: capricornio";
 }
