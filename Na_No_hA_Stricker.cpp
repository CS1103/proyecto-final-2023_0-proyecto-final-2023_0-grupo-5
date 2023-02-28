#include "Na_No_hA_Stricker.h"

using namespace std;
//PARA D
void Bot_DFS::DFS(Laberinto &Maze) {
    vector<Pi> Cardinals{{0, -1},{1,0},{0,1},{-1,0}};
    if (Visited_coords.top() != Target){
        int tem=0;

        for (auto Adder: Cardinals){
            Pi Next = {Visited_coords.top().first + Adder.first, Visited_coords.top().second + Adder.second};
            if (Maze(Next.first, Next.second) != 0 and
                Maze(Next.first, Next.second) != 2 and (Next.first>=0 and Next.first<MAZE_HEIGHT) and ((Next.second>=0 and Next.second<MAZE_WIDTH))){
                Maze(Next.first,Next.second) = 2;
                Path[Next]=Visited_coords.top();
                Visited_coords.push(Next);
                break;
            }tem++;
        }
        if (tem == 4){ Visited_coords.pop();}
    }else{
        PathAvaliable=true;
    }
}


void Bot_DFS::draw() {
    DrawRectangleRec(bot,PINK);

}


void Bot_DFS::GeneratePath(Pi coord) {


    if(PathAvaliable  and SearchNumber==0)
    {
        if(Path[coord]!=coord  )
        {cout<<"ESTA COORDENADA NO ES ROOT-->  ("<<coord.first<<";"<<coord.second<<")"<<endl;

            Movement.push(coord);
            GeneratePath(Path[coord]);
        }else {
            Movement.push(coord);
            PathReady= true;
            SearchNumber=1;
            cout<<"ENTRO A LA VERDAD"<<endl;
        }
    }
    if(PathReady)
    {
        cout<<"Bot is heading to Target..."<<endl;
    }

}


void Bot_DFS::Botmove(Laberinto &Maze) {
    bool  stop_condition= true;

    if(IsKeyPressed(KEY_F))
    {   Visited.insert(Movement.top());
        Maze(Movement.top().first, Movement.top().second) = 3;
        Movement.pop();
        stop_condition= true;
    }

    if(!Movement.empty() ) {
        vector<Pi> Cardinals{{0,  1},
                             {0,  -1},
                             {-1, 0},
                             {1,  0}}; // East , West , North and South
        Pi cur_coord = Movement.top();
        Visited.insert(Movement.top());
        int cont = 0;

        for (auto Adder: Cardinals) {

            Pi Next = {cur_coord.first + Adder.first,
                       cur_coord.second + Adder.second}; // Establish next possible coordinate
            if (Maze(Next.first, Next.second) != 0 and
                Visited.find(Next) == Visited.end() and (cur_coord!= make_pair(int(x_),int(y_))))//Check if next is an avaliable neighbor
            {
                cont++;
                if (cont > 1) {
                    stop_condition = false;
                    break;
                }
            }
        }
        if(stop_condition)
        {Maze(Movement.top().first, Movement.top().second) = 3;
            Movement.pop();}
    }
}

void Bot_DFS::GeneralBehaivor() {
    cout<<"USANDO AL DSDSDS"<<endl;
    DFS(maz);
    GeneratePath(Target);
}


void Bot_DFS::draw_pathSeeking() {
    draw();
}

bool Bot_DFS::StopTurn() {
    return false;
}
void Bot_DFS::BoT_move() {
    Botmove(maz);
}

bool Bot_DFS::getTurn() {
    return turn;
}

void Bot_DFS::setTurn(bool trn) {
    turn = trn;
}

//PARA B
void Bot_BFS::draw() {
    DrawRectangleRec(bot,PINK);

}
void Bot_BFS::BFS(Laberinto& Maze) {
    vector<Pi> Cardinals{{0, 1},{0, -1}, { -1, 0 },{ 1, 0 }}; // East , West , North and South
    while(Visited_coords.top() != Target and Frontier.front()!=Target) {
        Pi cur_coord = Frontier.front();//Current Coordinates
        Maze(cur_coord.first,cur_coord.second)=2;
        Frontier.pop();// Eliminate the first element on qeue that is a visited neighbor
        cout<<endl;
        for (auto Adder: Cardinals) {

            Pi Next = {cur_coord.first + Adder.first,
                       cur_coord.second + Adder.second}; // Establish next possible coordinate
            if (Maze(Next.first, Next.second) != 0 and
                Maze(Next.first, Next.second) != 2 and (Next.first>=0 and Next.first<MAZE_HEIGHT-1) and ((Next.second>=0 and Next.second<MAZE_WIDTH-1)))//Check if next is an avaliable neighbor
            {

                Frontier.push(Next);// Add the new neighbor
                Maze(Next.first, Next.second) = 2; // Mark
                Visited_coords.push(Next);

                Path[Next]=cur_coord; //Make the next coordinate a ramification of current coordinate
                cout<<"Se ha hecho "<<Next.first<<";"<<Next.second<<" HIJO DE --> "<< cur_coord.first<<";"<<cur_coord.second<<endl;

            }
        }

    }
    PathAvaliable= true;

}
void Bot_BFS::GeneratePath(Pi coord) {

    if(PathAvaliable  and SearchNumber==0)
    {
        if(Path[coord]!=coord  )
        {cout<<"ESTA COORDENADA NO ES ROOT-->  ("<<coord.first<<";"<<coord.second<<")"<<endl;

            Movement.push(coord);
            GeneratePath(Path[coord]);
        }else {
            Movement.push(coord);
            PathReady= true;
            SearchNumber=1;
            cout<<"ENTRO A LA VERDAD"<<endl;
        }
    }
    if(PathReady)
    {
        cout<<"Bot is heading to Target..."<<endl;
    }

}
void Bot_BFS::BotMove(Laberinto &Maze) {
    bool  stop_condition= true;



    if(turn)
    {   Visited.insert(Movement.top());
        Maze(Movement.top().first, Movement.top().second) = 3;
        Movement.pop();
        turn = false;
    }

    if(!Movement.empty() ) {
        vector<Pi> Cardinals{{0,  1},
                             {0,  -1},
                             {-1, 0},
                             {1,  0}}; // East , West , North and South
        Pi cur_coord = Movement.top();
        Visited.insert(Movement.top());
        int cont = 0;

        for (auto Adder: Cardinals) {
            Pi Next = {cur_coord.first + Adder.first,
                       cur_coord.second + Adder.second}; // Establish next possible coordinate
            if (Maze(Next.first, Next.second) != 0 and
                Visited.find(Next) == Visited.end() and (cur_coord!= make_pair(int(x_),int(y_))))//Check if next is an avaliable neighbor
            {
                cont++;
                if (cont > 1) {
                    stop_condition = false;
                    break;
                }
            }
        }
        if(stop_condition)
        {Maze(Movement.top().first, Movement.top().second) = 3;
            Movement.pop();}
    }
}

void Bot_BFS::GeneralBehaivor(){
    BFS(maze);
    GeneratePath(Target);
}
void Bot_BFS::draw_pathSeeking() {
    draw();
}
void Bot_BFS::BoT_move() {
    BotMove(maze);
}
bool Bot_BFS::StopTurn() {
    return false;
}

bool Bot_BFS::getTurn() {
    return turn;
}

void Bot_BFS::setTurn(bool trn) {
    turn = trn;
}

Bot_Factory::Bot_Factory(Laberinto MMaze,Type tipo):maze_(MMaze) {
    pair<float,float> Origin;
    if(MAZE_HEIGHT%2==0 and MAZE_WIDTH%2==0)
        Origin= make_pair(0,0);
    if(MAZE_HEIGHT%2!=0  and MAZE_WIDTH%2!=0)  Origin= make_pair(1,1);

    if(tipo==BFS_BOT)
    {
        new_bot_instantiation = new Bot_BFS(Origin.first,Origin.second,maze_);
    }
    if(tipo==DFS_BOT)
    {
        new_bot_instantiation = new Bot_DFS(Origin.first,Origin.second,maze_);
    }
}

GeneralPurpuseBot *Bot_Factory::Instanciar_Bot() {
    return new_bot_instantiation;
}