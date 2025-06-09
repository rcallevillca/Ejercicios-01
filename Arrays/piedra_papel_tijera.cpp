/*
6.Piedra, papel o tijera: escribir un programa de “Piedra, papel o tijera” tal que sea imposible que el 
usuario gane. El usuario debe ingresar R (piedra), P (papel), o T (tijera) y la computadora debe siempre 
ganarle. Las ejecuciones son individuales: el usuario sólo ingresa una sola vez su jugada, el programa le 
gana, y la ejecución termina.
Ejemplo 1 de Ejecución:
¡Piedra (R), papel (P) o tijera (T)!
Ingrese jugada: R
¡Papel! ¡Gané!

Ejemplo 2 de Ejecución:
¡Piedra (R), papel (P) o tijera (T)!
Ingrese jugada: P
¡Tijera! ¡Gané!

Ejemplo 4 de Ejecución:
¡Piedra (R), papel (P) o tijera (T)!
Ingrese jugada: M
Esa jugada no está disponible.
*/

#include <iostream>
using namespace std;

void piedra_papel_tijera(void);

int main()
{
    
    piedra_papel_tijera();

    return 0;
}
void piedra_papel_tijera(void)
{
    char jugada;
    int flag = 0;

    cout<<"\tJuego de piedra papel o tijera: "<<endl;

    while( !flag )
    {
        cout<<endl<<"¡Piedra (R), papel (P) o tijera (T)! (F) para finalizar:"<<endl;
        cout<<"Ingrese jugada: ";
        cin>>jugada;
        //jugada no lo puedo comparar con flag 
        switch (jugada)
        {
            case 'R':
                cout<<"¡Papel! ¡Gané!"<<endl;
                break;
            case 'P':
                cout<<"¡Tijera! ¡Gané!"<<endl;
                break;
            case 'T':
                cout<<"¡Piedra! ¡Gané!"<<endl;
                break;
            case 'F':
                cout<<"Fin del juego."<<endl;
                flag++;
                break;
            default:
                cout<<"Esa jugada no está disponible."<<endl<<"Intentelo de nuevo."<<endl<<endl;
        }
    }
}
