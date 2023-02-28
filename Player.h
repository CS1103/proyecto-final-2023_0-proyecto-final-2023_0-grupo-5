//
// Created by leonc on 25/02/2023.
//

#ifndef MAZE_PLAYER_H
#define MAZE_PLAYER_H

#include "Na_No_hA_Stricker.h"
using Pi = std::pair<int,int>;

class Player {
public:
    ~Player();
    [[nodiscard]] virtual int getX() = 0;
    [[nodiscard]] virtual int getY() = 0;

    virtual bool no_salga(pthread_key_t y) = 0;

    virtual bool sig_cuadrado(Laberinto& y, pthread_key_t z) = 0;

    virtual bool tecla_val(pthread_key_t a) = 0;

    virtual void avanz_play(pthread_key_t y) = 0;

    virtual int vecinos(Laberinto& y) = 0;

    virtual bool col_play(Laberinto& y, pthread_key_t z) = 0;

    virtual void movement(Laberinto& y, Pi coords, pthread_key_t z) = 0;

    virtual void smart_movement(Laberinto& y ,  Player* player) = 0;

    virtual void paint_path(Laberinto& y) = 0;

    virtual bool getTurn() = 0;

    virtual void setTurn(bool trn) = 0;

};

class Player_letras: public Player{
private:
    int x_;
    int y_;
    Color color_;
    bool turn = false;
public:
    Player_letras(int x, int y, const Color &color);

    int getX();

    int getY();


    virtual ~Player_letras();

    bool no_salga(pthread_key_t y) override;

    bool sig_cuadrado(Laberinto& y, pthread_key_t z) override;

    bool tecla_val(pthread_key_t a) override;

    void avanz_play(pthread_key_t y) override;

    int vecinos(Laberinto& y) override;

    bool col_play(Laberinto& y, pthread_key_t z) override;

    void movement(Laberinto &y, Pi coords, pthread_key_t z) override;

    void smart_movement(Laberinto& y, Player* player) override;

    bool getTurn();

    void setTurn(bool trn);



    void paint_path(Laberinto &y) override;

};

class Player_flechas: public Player{
private:
    int x_;
    int y_;
    Color color_;
    bool turn = false;
public:
    Player_flechas(int x, int y, const Color &color);

    virtual ~Player_flechas();

    int getX() override;

    int getY() override;

    bool no_salga(pthread_key_t y) override;

    bool sig_cuadrado(Laberinto& y, pthread_key_t z) override;

    bool tecla_val(pthread_key_t a) override;

    void avanz_play(pthread_key_t y) override;

    int vecinos(Laberinto& y) override;

    bool col_play(Laberinto& y, pthread_key_t z) override;

    void movement(Laberinto &y, Pi coords, pthread_key_t z) override;

    void smart_movement(Laberinto& y, Player* player) override;

    bool getTurn() override;

    void setTurn(bool trn) override;


    void paint_path(Laberinto &y) override;

};


class Adapter_Bot_Player : public Player{
private:
    GeneralPurpuseBot* bot;
public:
    explicit Adapter_Bot_Player(GeneralPurpuseBot *bot);

    void smart_movement(Laberinto &y,  Player* player) override;
    bool getTurn() override;
    void setTurn(bool trn) override;

    int getX() override;

    int getY() override;



    bool no_salga(pthread_key_t y) override;

    bool sig_cuadrado(Laberinto &y, pthread_key_t z) override;

    bool tecla_val(pthread_key_t a) override;

    void avanz_play(pthread_key_t y) override;

    int vecinos(Laberinto &y) override;

    bool col_play(Laberinto &y, pthread_key_t z) override;

    void movement(Laberinto &y, Pi coords, pthread_key_t z) override;

    void paint_path(Laberinto &y) override;


};

#endif //MAZE_PLAYER_H
