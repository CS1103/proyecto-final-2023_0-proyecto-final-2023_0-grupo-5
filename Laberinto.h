#ifndef MAZE_LABERINTO_H
#define MAZE_LABERINTO_H
#define MAZE_WIDTH 30
#define MAZE_HEIGHT 42
#define CELL_SIZE 20


using I = int;
#include <iostream>
#include <stack>
#include <raylib.h>

#include <vector>

class Laberinto {
private:

    int * maze2{};
    std::stack<std::pair<I,I> >  Visited_Coordinates;
public:


    Laberinto(){

        this->maze2=  new int[MAZE_HEIGHT*MAZE_WIDTH];
        //this->maze2[1]=1;

        Visited_Coordinates.emplace( ( MAZE_HEIGHT %2 == 0)? 0 : 1,( MAZE_WIDTH %2 == 0)? 0 : 1); // Stablishing first coordinate
        for (int i = 0; i <MAZE_HEIGHT*MAZE_WIDTH ; ++i)
            maze2[i]=0;

    }

    [[nodiscard]] int *getMaze2() const {
        return maze2;
    }

    [[nodiscard]] const std::stack<std::pair<I, I>> &getVisitedCoordinates() const {
        return Visited_Coordinates;
    }

    I &operator()(int i_row, int i_col);
    I operator()(int i_row, int i_col) const;
    friend void backtraking(Laberinto& Alfa);

};

void DrawMaze(Laberinto & maze);
#endif //MAZE_LABERINTO_H