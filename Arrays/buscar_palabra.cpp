/*
Realizar una funcion que busque una palabra, que se ingresa por teclado, en un parrafo y retorne la cantidad de
veces que se repite.
*/
/*
1ºarmo una palabra con un tamaño de 20
-> identifico cuando termina una palabra
      . cuando hay un espacio
      . cuando hay una coma
      . cuando hay un punto
->encuentro la condicion y cierro el vector.
2ºcomparo el largo strlen y luego cada caracter uso strcmp (definida en <string.h> )
    ->son iguales sumo 1 = cant
    -> retorno cant
*/
int buscar_palabra(char cadena[] , char palabra[] )
{
    char aux[20];
    int j = 0, cant = 0;
    int largo = strlen(palabra);
    for( i = 0 ; cadena[i]!='\0' ; i++)
    {
        if( cadena[i] ==' ' || cadena[i] ==',' || cadena[i] == '.' )
        {
            aux[j] = '\0';//tengo la palabra, entonces comparo
            if( largo == strlen(aux) )
            {            
                if( 0 == strcmp(palabra,cadena) )//retorna cero si son iguales
                    cant++;
            }
            j = 0;
        }
        else
        {
            aux[j] = cadena[i];
            j++;
        }
    }
    return cant;
}
