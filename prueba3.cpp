/*
Construya un programa para resolver el  Juego de piedra, papel o tijera 

Se jugara 5 rondas, usuario vs maquina.
Tres niveles de dificultad: principiante, intermedio, avanzado.

Principiante inician en igualdad de puntos 0 a 0
Intermedio inician en igualdad de 1 punto de victoria a la maquina.
Avanzado inician con 2 puntos de victoria a la maquina.
El programa deberá crear al menos las siguientes funciones:
Función para obtener la elección del usuario
Función para obtener la elección de la maquina
Función para determinar el ganador de la ronda
Función para determinar el ganador del juego
*/

#include<iostream>
using namespace std;
main()
{
    int nivel;
    int puntos=0;
    cout<<"Escoja el nivel:"<<endl;
    cout<<"1.principiante";
    cout<<"2.intermedio";
    cout<<"3.avanzado";
    cin>>nivel;

    switch (nivel)
    {
    case 1:

        cout<<"Puntos maquina:"<<puntos;
         cout<<"Puntos humano:"<<puntos;
        break;
    case 2:
         cout<<"Puntos maquina:"<<puntos;
         cout<<"Puntos humano:"<<puntos;
        break;
     case 3:
         cout<<"Puntos maquina:"<<puntos;
         cout<<"Puntos humano:"<<puntos;
        break;
    
    default:
    cout<<"La operacion solicitada es incorrcta";
        break;
    }

    return 0;
}
