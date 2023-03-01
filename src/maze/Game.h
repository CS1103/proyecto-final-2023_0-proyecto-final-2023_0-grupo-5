//
// Created by Jesus on 25/02/2023.
//

#ifndef EXAMPLES_GAME_H
#define EXAMPLES_GAME_H
#include "maze2.h"
#include "Bot.h"
using namespace std;
class Game {

public:
    Maze2* maze2;
    vector<GeneralPurpuseBot*> Instancias_bots;
    void updateGAMES();
    void DRAWGAME();
};
Game* initGame();
static void resetValues(void);
bool finishGAME(void);
void freeGame2(Game *game);
#endif //EXAMPLES_GAME_H
