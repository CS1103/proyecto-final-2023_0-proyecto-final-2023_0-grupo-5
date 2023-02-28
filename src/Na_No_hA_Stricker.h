#ifndef MAZE_NA_NO_HA_STRICKER_H
#define MAZE_NA_NO_HA_STRICKER_H
#include "Laberinto.h"
#include <queue>
#include <iomanip>
#include <map>
#include <set>
using I = int;
using Pi = std::pair<int,int>;
class GeneralPurpuseBot{
protected:
    bool turn = false;
public:
    virtual void GeneralBehaivor()=0; // Target Search and Path making
    virtual void draw_pathSeeking()=0; // Draw the bot
    virtual void BoT_move() =0;// Once a path has being made the bot will start heding to its target
    virtual bool StopTurn()=0; // Gives inormation about the movement status to other players //to be implemented
    virtual bool getTurn() = 0;
    virtual void setTurn(bool trn) = 0;

};



class Bot_BFS:public GeneralPurpuseBot{
private:
    float x_{};
    float y_{};
    std::stack<Pi>Visited_coords; //needed in DFS and BFS
    std::queue<std::pair<int , int>> Frontier; // needed in BFS
    Pi Target;      //META -->//needed in DFS and BFS
    std::map<Pi,Pi> Path;//needed in DFS(to be included) and BFS
    bool PathAvaliable= false; //needed in DFS(to be included) and BFS
    bool PathReady = false;//needed in DFS(to be included) and BFS
    Rectangle bot;//General bot atribute
    std::stack<Pi> Movement;//needed in DFS(to be included) and BFS
    size_t SearchNumber=0;//needed in DFS(to be included) and BFS
    Laberinto maze;
    std::set<Pi> Visited;
public:

    Bot_BFS(float x , float y, Laberinto& Mmaze):x_(x),y_(y),maze(Mmaze){
        Visited_coords.push({x, y});

        Frontier.push({x,y});//set irst possition as visited
        Target={MAZE_HEIGHT/2,MAZE_WIDTH/2};
        Path[{x,y}]={x,y};//Mark first position as its own root

    }

    void draw();
    void BFS(Laberinto& Maze);
    void GeneratePath(Pi coord);
    void BotMove(Laberinto & Maze);
    //overriding unctions
    void GeneralBehaivor()override;
    void draw_pathSeeking()override;
    void BoT_move() override;
    bool StopTurn() override;

    bool getTurn() override;
    void setTurn(bool trn) override;

};
class Bot_DFS:public GeneralPurpuseBot{
private:
    float x_{};
    float y_{};

    std::stack<Pi> visited_cordinates_bot;
    std::stack<Pi>Visited_coords; //needed in DFS and BFS
    Pi Target;      //META -->//needed in DFS and BFS
    std::map<Pi,Pi> Path;//needed in DFS(to be included) and BFS
    bool PathAvaliable= false; //needed in DFS(to be included) and BFS
    bool PathReady = false;//needed in DFS(to be included) and BFS
    Rectangle bot;//General bot atribute
    std::stack<Pi> Movement;//needed in DFS(to be included) and BFS
    size_t SearchNumber=0;//needed in DFS(to be included) and BFS
    Laberinto maz;
    std::set<Pi> Visited;
public:

    Bot_DFS(int x , int y, Laberinto Mmaze):x_(x),y_(y),maz(Mmaze){
        Visited_coords.push({x, y});
        //   visited_cordinates_bot.push({1,1}); // Stablishing first coordinate

        Path[{x_,y_}]={x_,y_};//Mark first position as its own root
        Target={MAZE_HEIGHT/2,MAZE_WIDTH/2};

    }

    void draw();
    void DFS(Laberinto& Maze);
    void GeneratePath(Pi coord);
    void Botmove(Laberinto & Maze);
    //overriding unctions
    void GeneralBehaivor()override;
    void draw_pathSeeking()override;
    void BoT_move() override;
    bool StopTurn() override;

    bool getTurn() override;
    void setTurn(bool trn) override;


};


enum Type{ BFS_BOT,DFS_BOT};
class Bot_Factory{
public:
    Bot_Factory(Laberinto Mmaze ,Type tipo);
    GeneralPurpuseBot* Instanciar_Bot();


private:
    Laberinto maze_;
    GeneralPurpuseBot* new_bot_instantiation;
};

#endif //MAZE_NA_NO_HA_STRICKER_H