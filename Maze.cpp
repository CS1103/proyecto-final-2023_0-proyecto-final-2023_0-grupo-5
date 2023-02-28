#include <bits/stdc++.h>
#include "Laberinto.h"
#include "Na_No_hA_Stricker.h"
#include "Player.h"
#include <iomanip>
using namespace std;
int main() {

    Laberinto A;

    srand(time(nullptr));


    Player*  AEE =   new Player_letras(MAZE_WIDTH - 2, MAZE_HEIGHT - 2 , BLUE);



    backtraking(A);
    InitAudioDevice();  //Inicializo
    auto screen_width = MAZE_WIDTH * CELL_SIZE;
    auto screen_height = MAZE_HEIGHT * CELL_SIZE;
    InitWindow(screen_width, screen_height, "Marisa MAZE!!!");
    SetTargetFPS(1000);

    bool pause = false;
    auto TargetX=MAZE_HEIGHT/2 ;
    auto TargetY=MAZE_WIDTH/2;
    cout<<TargetX<<"-->"<<TargetY<<endl;
    A(TargetX,TargetY)=1;
    A(TargetX,TargetY+1)=1;
    A(TargetX,TargetY-1)=1;
    A(TargetX-1,TargetY)=1;
    A(TargetX+1,TargetY)=1;


    auto Robot = new Bot_BFS(1,1 , A);
    Player* adapter = new Adapter_Bot_Player(Robot);
    //adapter->movement(A , make_pair(0,0));


    Texture2D block_ = LoadTexture(R"(..\assets\block_.png)");
    Texture2D finish = LoadTexture(R"(..\assets\META1.png)");
    Music soundtrack = LoadMusicStream(R"(..\assets\BOCCHIGOD.mp3)");
    PlayMusicStream(soundtrack);
    //adapter->movement(A , make_pair(0,0));


    while (!WindowShouldClose()) {
        //UpdateMusicStream(soundtrack);
        if (IsKeyPressed(KEY_P))
        {
            pause = !pause;
            if (pause) PauseMusicStream(soundtrack);
            else ResumeMusicStream(soundtrack);
        }

        ClearBackground(BLACK);
        DrawMaze(A);
        AEE->paint_path(A);

        DrawTextureRec(
                finish,
                Rectangle{float(screen_width/2),float(screen_height/2),CELL_SIZE, CELL_SIZE},
                Vector2{float(screen_width/2),float(screen_height/2)},
                WHITE
        );
        AEE->setTurn(true);
        // adapter->smart_movement(A,  AEE);
        AEE->smart_movement(A , adapter);
        auto window = !WindowShouldClose();
        GetFPS();
        EndDrawing();
    }
    UnloadMusicStream(soundtrack);   // Unload music stream buffers from RAM
    CloseAudioDevice();
    CloseWindow();

}