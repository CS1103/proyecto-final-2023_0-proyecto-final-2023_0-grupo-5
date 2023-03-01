#include "Laberinto.h"
using namespace std;


I &Laberinto::operator()(int i_row, int i_col) {
    return maze2[MAZE_WIDTH*i_row+(MAZE_WIDTH-(MAZE_WIDTH-i_col))];
}

I Laberinto::operator()(int i_row, int i_col) const {
    return maze2[MAZE_WIDTH*i_row+(MAZE_WIDTH-(MAZE_WIDTH-i_col))];
}

void backtraking(Laberinto& Alfa) {  // Implementation of Recursive Backtraking

    if(!Alfa.Visited_Coordinates.empty())
    {
        I current_x=Alfa.Visited_Coordinates.top().first;
        I current_y=Alfa.Visited_Coordinates.top().second;
        std::vector<std::pair<std::pair<I,I>, I>> Neighbors;  // 1 represents a vertical and 2 represents an horizontal movement
        // The second pair indicates if movement is vertical or horizontal
        if(Alfa(current_x+2,current_y)!=1 and current_x+2<MAZE_HEIGHT) // Check South
        {
            Neighbors.push_back({{current_x+2,current_y},1});
        }
        if(Alfa(current_x,current_y+2)!=1 and current_y+2<MAZE_WIDTH) // Check East
        {
            Neighbors.push_back({{current_x,current_y+2},2});
        }
        if(Alfa(current_x,current_y-2)!=1 and current_y-2>=1 )       //Check West
        {
            Neighbors.push_back({{current_x,current_y-2},-2});

        }
        if(Alfa(current_x-2,current_y)!=1 and current_x-2>=1 )   //Check North
        {
            Neighbors.push_back({{current_x-2,current_y},-1});
        }
        if(!Neighbors.empty())
        {
            auto Next_coordinate=Neighbors[rand()%Neighbors.size()];// Choose an avaliable neighbor randomdly
            Alfa.Visited_Coordinates.push(Next_coordinate.first); // Push new coordinate in the stack
            Alfa(Next_coordinate.first.first,Next_coordinate.first.second)=1; // marked the new coordinate as visited
            if(abs(Next_coordinate.second)==1) // check if the movement was vertical or not
            {
                Alfa(current_x+Next_coordinate.second,current_y)=1;//marked middle as visited

            }else{
                auto add=(Next_coordinate.second>0)?1:-1;
                Alfa(current_x,current_y+add)=1;//marked middle as visited
            }
            backtraking(Alfa);
        }else {
            Alfa.Visited_Coordinates.pop();
            backtraking(Alfa);
        }

    }

    else{
        std::cout<<"MAZE SUCCESFULLY GENERATED !!!";
    }

}

/*

Laberinto::Laberinto(const Laberinto &other) {

    this->maze2 = new int[MAZE_HEIGHT*MAZE_WIDTH];

    for (int i = 0; i < MAZE_WIDTH*MAZE_HEIGHT; ++i) {
        this->maze2[i] = other.maze2[i];
    }
    this->Visited_Coordinates = other.Visited_Coordinates;
}

Laberinto::Laberinto(Laberinto &&other) noexcept{

    this->maze2 = other.maze2;

    other.maze2 = nullptr;
}

Laberinto& Laberinto::operator=( const Laberinto &other)  {
        if(this  == &other){
            return *this;
        }

        delete[] maze2;


        maze2 = new int[MAZE_WIDTH*MAZE_HEIGHT];

        for (int i = 0; i < MAZE_WIDTH*MAZE_HEIGHT; ++i) {
            this->maze2[i] = other.maze2[i];
        }


        return *this;
}

Laberinto &Laberinto::operator=(Laberinto &&other) noexcept {
    if(this  == &other){
        return *this;
    }

    delete[] maze2;

    this->maze2 = other.maze2;

    this->Visited_Coordinates = other.Visited_Coordinates;


    other.maze2 = nullptr;

    return *this;
}

Laberinto::~Laberinto() {
    delete [] maze2;
}
*/

void DrawMaze(Laberinto & maze)
{
    for (int i = 0; i < MAZE_HEIGHT; i++)
    {
        for (int j = 0; j < MAZE_WIDTH; j++)
        {
            if (maze(i,j) == 0)
            {
                DrawRectangle(j * CELL_SIZE, i * CELL_SIZE, CELL_SIZE, CELL_SIZE, DARKGRAY);
            }
            if (maze(i,j) == 1){
                DrawRectangle(j * CELL_SIZE, i * CELL_SIZE, CELL_SIZE, CELL_SIZE, WHITE);
            }

            if(maze(i,j)==2)
            {
                DrawRectangle(j * CELL_SIZE, i * CELL_SIZE, CELL_SIZE, CELL_SIZE, WHITE);
            }
            if(maze(i,j)==3)
            {
                DrawRectangle(j * CELL_SIZE, i * CELL_SIZE, CELL_SIZE, CELL_SIZE, PURPLE);
            }

            if(maze(i,j)==4)
            {
                DrawRectangle(j * CELL_SIZE, i * CELL_SIZE, CELL_SIZE, CELL_SIZE, BLUE);
            }
            if(maze(i,j)==5)
            {
                DrawRectangle(j * CELL_SIZE, i * CELL_SIZE, CELL_SIZE, CELL_SIZE, GREEN);
            }

        }
    }
}