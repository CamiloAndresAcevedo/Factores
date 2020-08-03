//Programa que descompone numeros en factores primos.
//Creado por Camilo Andres Acevedo
//Inspirado en youtube.com/watch?v=TyLbbkdn4Uw

#include <iostream>  //Componente de la biblioteca, utilizado para operaciones de entrada/salida.

using namespace std; //Creamos un bloque que asocie nuestras funciones.

int main() //Punto de partida para la ejecucion del programa.
{
    int numero=0; //Declaramos la variable de tipo entero.
    cout<<"Numero que desea descomponer:"; //Imprime la frase para guiar a quien ejecuta el programa.
    cin>>numero; //Se recoge el numero ingresado por quien ejecuta.
    for (int i = 2; numero >= i; i++) //Ciclo para ejecutar nuestro bloque de instrucciones, con nuestro valor inicial.
    {

        while(numero % i == 0) //Ciclo que ejecuta si podemos segir diviendo por el mismo numero primo.
        {

            cout<<i<<" , "; //Imprime los numeros primos en que se divide nuestro valor, separados por comas.
            numero /= i; //Finaliza el proceso cuando el resultado es igual a nuestro numero primo final.
        }

    }
}
