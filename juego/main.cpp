#include <iostream>
#include "game.h"
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int bajo, arriba;
    obtenRango(bajo, arriba);
    playGame(bajo, arriba);

    return 0;
}
