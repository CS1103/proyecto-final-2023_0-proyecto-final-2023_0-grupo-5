#include <bits/stdc++.h>
#include "Laberinto.h"
#include "Na_No_hA_Stricker.h"
#include "Player.h"
#include <iomanip>
using namespace std;
int main() {
    Laberinto A;

    srand(time(nullptr));



    Player* player2 = new Player_letras(2,2 , BLUE, 4);

    Player* player1 = new Player_flechas(MAZE_WIDTH -2, MAZE_HEIGHT - 2 , BLUE, 5);



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





    for(int i = 0; i< MAZE_HEIGHT ; i++){
        for(int j = 0; j< MAZE_WIDTH ; j++){
            cout<<setw(3)<<A(i,j)<<" ";
        }

        cout<<"\n";
    }

    Texture2D block_ = LoadTexture(R"(..\assets\block_.png)");
    Texture2D finish = LoadTexture(R"(..\assets\META1.png)");
    Music soundtrack = LoadMusicStream(R"(..\assets\BOCCHIGOD.mp3)");
    PlayMusicStream(soundtrack);



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

        DrawTextureRec(
                finish,
                Rectangle{float(screen_width/2),float(screen_height/2),CELL_SIZE, CELL_SIZE},
                Vector2{float(screen_width/2),float(screen_height/2)},
                WHITE
        );

        player1->smart_movement(A , player2);
        player2->smart_movement(A, player1);

        player2->paint_path(A);
        player1->paint_path(A);

        player1->DrawPlayer();
        player2->DrawPlayer();
        auto window = !WindowShouldClose();
        GetFPS();
        EndDrawing();

    }
    UnloadMusicStream(soundtrack);   // Unload music stream buffers from RAM
    CloseAudioDevice();
    CloseWindow();

}