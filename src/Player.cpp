#include "Player.h"



Player::~Player() {}

Player_letras::Player_letras(int x, int y, const Color &color)  {
    x_ = x;
    y_ = y;
    color_ = color;
}

Player_letras::~Player_letras() {

}

bool Player_letras::no_salga() {
    if (IsKeyDown(KEY_A)) {
        if (x_ <= MAZE_WIDTH and x_ > 0)
            return true;
    }
    else if (IsKeyDown(KEY_D)) {
        if (x_ < MAZE_WIDTH and x_ >= 0)
            return true;
    }
    else if (IsKeyDown(KEY_W)) {
        if (y_ <= MAZE_HEIGHT and y_ > 0)
            return true;
    }
    else if (IsKeyDown(KEY_S)) {
        if (y_ < MAZE_HEIGHT and y_ >= 0)
            return true;
    }
    return false;
}

bool Player_letras::sig_cuadrado(Laberinto& y) {
    if (IsKeyDown(KEY_A)) {
        if (y(y_, x_ - 1) != 0)
            return true;
    }
    else if (IsKeyDown(KEY_D)) {
        if (y(y_, x_ + 1) != 0)
            return true;
    }
    else if (IsKeyDown(KEY_W)) {
        if (y(y_ - 1, x_) != 0)
            return true;
    }
    else if (IsKeyDown(KEY_S)) {
        if (y(y_ + 1, x_) != 0)
            return true;
    }
    return false;
}

bool Player_letras::tecla_val(pthread_key_t a) {
    if (a == KEY_A or a == KEY_W or a == KEY_D or a == KEY_S){
        return true;
    }
    return false;
}

void Player_letras::avanz_play(pthread_key_t y) {
    if (y == KEY_A){
        x_ -= 1;
    }
    else if (y == KEY_D){
        x_ += 1;
    }
    else if (y == KEY_W){
        y_ -= 1;
    }
    else if (y == KEY_S){
        y_ += 1;
    }
}

int Player_letras::getX() {
    return x_;
}

int Player_letras::getY() {
    return y_;
}

int Player_letras::vecinos(Laberinto& y , Player* player) {
    int total_vec = 0;
    if (y(y_, x_ + 1) != 0 and (player->getX() != x_ + 1 or player->getY() != y_) and (x_ + 1 != MAZE_HEIGHT / 2 or y_ != MAZE_WIDTH / 2)){
        total_vec++;
    }
    if (y(y_, x_ - 1) != 0 and (player->getX() != x_ - 1 or player->getY() != y_) and (x_ - 1 != MAZE_HEIGHT / 2 or y_ != MAZE_WIDTH / 2)){
        total_vec++;
    }
    if (y(y_ + 1, x_) != 0 and (player->getY() != y_ + 1 or player->getX() != x_) and (y_ + 1 != MAZE_WIDTH / 2 or x_ != MAZE_HEIGHT / 2)){
        total_vec++;
    }
    if (y(y_ - 1, x_) != 0 and (player->getY() != y_ - 1 or player->getX() != x_) and (y_ - 1 != MAZE_WIDTH / 2 or x_ != MAZE_HEIGHT / 2)){
        total_vec++;
    }
    return total_vec;
}

bool Player_letras::col_play( Player* player) {
    if (IsKeyDown(KEY_A)) {
        if ((y_ != player->getY() or x_ - 1 != player->getX()) and (x_ - 1 != 10 or y_ != 10))
            return true;
    }
    else if (IsKeyDown(KEY_D)) {
        if ((y_ != player->getY() or x_ + 1 != player->getX()) and (x_ + 1 != 10 or y_ != 10))
            return true;
    }
    else if (IsKeyDown(KEY_W)) {
        if ((y_ - 1 != player->getY() or x_ != player->getX()) and (y_ - 1 != 10 or x_ != 10))
            return true;
    }
        else if (IsKeyDown(KEY_S)) {
        if ((y_ + 1 != player->getY() or x_ != player->getX()) and (y_ + 1 != 10 or x_ != 10))
            return true;
    }
    return false;
}

void Player_letras::movement( Player* player , Laberinto &y, Pi coords ) {
    while (vecinos(y , player) == 2){
        if (y(y_ - 1, x_) != 0 and coords.first != y_ - 1 and col_play(player) and vecinos(y , player) < 3){
            coords.first = y_;
            coords.second = x_;
            y_ -= 1;
            paint_path(y);

        }
        else if (y(y_, x_ + 1) != 0 and coords.second != x_ + 1 and col_play(player) and vecinos(y, player) < 3){
            coords.second = x_;
            coords.first = y_;
            x_ += 1;
            paint_path(y);

        }
        else if (y(y_ + 1, x_) != 0 and coords.first != y_ + 1 and col_play(player) and vecinos(y , player) < 3){
            coords.first = y_;
            coords.second = x_;
            y_ += 1;
            paint_path(y);

        }
        else if (y(y_, x_ - 1) != 0 and coords.second != x_ - 1 and col_play(player) and vecinos(y , player) < 3){
            coords.second = x_;
            coords.first = y_;
            x_ -= 1;
            paint_path(y);

        }

    }
}

void Player_letras::smart_movement(Laberinto &y , Player* player) {


    if(IsKeyPressed(KEY_ENTER)){
        player->setTurn(true);
    }

    pthread_key_t z;

    z = GetKeyPressed();
    std::pair<int,int> coords_ac {y_,x_};


    if (  no_salga() and sig_cuadrado(y) and col_play(player))
    {

        y(y_,x_) = 1;
        avanz_play(z);
        paint_path(y);

        movement( player ,y, coords_ac);
        y(y_,x_) = 100;

    }

}

bool Player_letras::getTurn() {
    return turn;
}

void Player_letras::setTurn(bool trn) {
    turn = trn;
}



void Player_letras::paint_path(Laberinto &y) {
    if (y(y_,x_) != 4)
        y(y_,x_) = 4;
    else if (y(y_,x_) == 4)
        y(y_,x_) = 1;
}

void Player_letras::DrawPlayer() {
    DrawRectangle(x_ * CELL_SIZE, y_ * CELL_SIZE, CELL_SIZE, CELL_SIZE, BLUE);
}









//Player Flechas


Player_flechas::Player_flechas(int x, int y, const Color &color)  {
    x_ = x;
    y_  = y;
    color_ = color;
}

Player_flechas::~Player_flechas() {

}

bool Player_flechas::no_salga() {
    if (IsKeyDown(KEY_LEFT)) {
        if (x_ <= MAZE_WIDTH and x_ > 0)
            return true;
    }
    else if (IsKeyDown(KEY_RIGHT)) {
        if (x_ < MAZE_WIDTH and x_ >= 0)
            return true;
    }
    else if (IsKeyDown(KEY_UP)) {
        if (y_ <= MAZE_HEIGHT and y_ > 0)
            return true;
    }
    else if (IsKeyDown(KEY_DOWN)) {
        if (y_ < MAZE_HEIGHT and y_ >= 0)
            return true;
    }
    return false;
}

bool Player_flechas::sig_cuadrado(Laberinto& y) {
    if (IsKeyDown(KEY_LEFT)) {
        if (y(y_, x_ - 1) != 0)
            return true;
    }
    else if (IsKeyDown(KEY_RIGHT)) {
        if (y(y_, x_ + 1) != 0)
            return true;
    }
    else if (IsKeyDown(KEY_UP)) {
        if (y(y_ - 1, x_) != 0)
            return true;
    }
    else if (IsKeyDown(KEY_DOWN)) {
        if (y(y_ + 1, x_) != 0)
            return true;
    }
    return false;
}

bool Player_flechas::tecla_val(pthread_key_t a) {
    if (a == KEY_LEFT or a == KEY_UP or a == KEY_RIGHT or a == KEY_DOWN){
        return true;
    }
    return false;
}

void Player_flechas::avanz_play(pthread_key_t y) {
    if (y == KEY_LEFT){
        x_ -= 1;
    }
    else if (y == KEY_RIGHT){
        x_ += 1;
    }
    else if (y == KEY_UP){
        y_ -= 1;
    }
    else if (y == KEY_DOWN){
        y_ += 1;
    }
}

int Player_flechas::getX() {
    return x_;
}

int Player_flechas::getY() {
    return y_;
}

int Player_flechas::vecinos(Laberinto& y, Player* player) {
    int total_vec = 0;
    if (y(y_, x_ + 1) != 0 and (player->getX() != x_ + 1 or player->getY() != y_) and (x_ + 1 != MAZE_HEIGHT / 2 or y_ != MAZE_WIDTH / 2)){
        total_vec++;
    }
    if (y(y_, x_ - 1) != 0 and (player->getX() != x_ - 1 or player->getY() != y_) and (x_ - 1 != MAZE_HEIGHT / 2 or y_ != MAZE_WIDTH / 2)){
        total_vec++;
    }
    if (y(y_ + 1, x_) != 0 and (player->getY() != y_ + 1 or player->getX() != x_) and (y_ + 1 != MAZE_WIDTH / 2 or x_ != MAZE_HEIGHT / 2)){
        total_vec++;
    }
    if (y(y_ - 1, x_) != 0 and (player->getY() != y_ - 1 or player->getX() != x_) and (y_ - 1 != MAZE_WIDTH / 2 or x_ != MAZE_HEIGHT / 2)){
        total_vec++;
    }
    return total_vec;
}

bool Player_flechas::col_play( Player* player) {
    if (IsKeyDown(KEY_LEFT)) {
        if ((y_ != player->getY() or x_ - 1 != player->getX()) and (x_ - 1 != 10 or y_ != 10))
            return true;
    }
    else if (IsKeyDown(KEY_RIGHT)) {
        if ((y_ != player->getY() or x_ + 1 != player->getX()) and (x_ + 1 != 10 or y_ != 10))
            return true;
    }
    else if (IsKeyDown(KEY_UP)) {
        if ((y_ - 1 != player->getY() or x_ != player->getX()) and (y_ - 1 != 10 or x_ != 10))
            return true;
    }
    else if (IsKeyDown(KEY_DOWN)) {
        if ((y_ + 1 != player->getY() or x_ != player->getX()) and (y_ + 1 != 10 or x_ != 10))
            return true;
    }
    return false;
}

void Player_flechas::movement(Player* player,Laberinto &y, Pi coords) {
    while (vecinos(y, player) == 2){
        if (y(y_ - 1, x_) != 0 and coords.first != y_ - 1 and col_play(player) and vecinos(y, player) < 3){
            coords.first = y_;
            coords.second = x_;
            y_ -= 1;
            paint_path(y);

        }
        else if (y(y_, x_ + 1) != 0 and coords.second != x_ + 1 and col_play(player) and vecinos(y, player) < 3){
            coords.second = x_;
            coords.first = y_;
            x_ += 1;
            paint_path(y);


        }
        else if (y(y_ + 1, x_) != 0 and coords.first != y_ + 1 and col_play( player) and vecinos(y, player) < 3){
            coords.first = y_;
            coords.second = x_;
            y_ += 1;
            paint_path(y);


        }
        else if (y(y_, x_ - 1) != 0 and coords.second != x_ - 1 and col_play(player) and vecinos(y, player) < 3){
            coords.second = x_;
            coords.first = y_;
            x_ -= 1;
            paint_path(y);

        }


    }
}

void Player_flechas::smart_movement(Laberinto& y, Player* player) {


    if(IsKeyPressed(KEY_ENTER)){
        player->setTurn(true);
    }

    pthread_key_t z;
    z = GetKeyPressed();
    std::pair<int,int> coords_ac {y_,x_};
    if (tecla_val(z) and no_salga() and sig_cuadrado(y) and col_play(player) and turn)
    {

        avanz_play(z);
        paint_path(y);
        DrawPlayer();
        movement( player ,y, coords_ac);
        DrawPlayer();

        turn = !turn;
    }

}

bool Player_flechas::getTurn() {
    return turn;
}



void Player_flechas::setTurn(bool trn) {
    turn = trn;
}

void Player_flechas::paint_path(Laberinto &y) {
    if (y(y_,x_) != 4)
        y(y_,x_) = 4;
    else if (y(y_,x_) == 4)
        y(y_,x_) = 1;
}

void Player_flechas::DrawPlayer() {
    DrawRectangle(x_ * CELL_SIZE, y_ * CELL_SIZE, CELL_SIZE, CELL_SIZE, BLUE);
}


void Adapter_Bot_Player::smart_movement(Laberinto &y , Player* player) {
    if(IsKeyPressed(KEY_F)){
        player->setTurn(true);
    }
    bot->BoT_move();
}

bool Adapter_Bot_Player::getTurn() {
    return bot->getTurn();
}

void Adapter_Bot_Player::setTurn(bool trn) {
    bot->setTurn(trn);
}

Adapter_Bot_Player::Adapter_Bot_Player(GeneralPurpuseBot *bot) : bot(bot) {}

int Adapter_Bot_Player::getX() {
    return 0;
}

int Adapter_Bot_Player::getY() {
    return 0;
}


bool Adapter_Bot_Player::no_salga() {
    return false;
}

bool Adapter_Bot_Player::sig_cuadrado(Laberinto &y) {
    return false;
}

bool Adapter_Bot_Player::tecla_val(pthread_key_t a) {
    return false;
}

void Adapter_Bot_Player::avanz_play(pthread_key_t y) {

}

int Adapter_Bot_Player::vecinos(Laberinto &y, Player* player) {
    return 0;
}

bool Adapter_Bot_Player::col_play(  Player* player) {
    return false;
}

void Adapter_Bot_Player::movement( Player* player  ,Laberinto &y, Pi coords ) {
    bot->GeneralBehaivor();
}

void Adapter_Bot_Player::paint_path(Laberinto &y) {

}

void Adapter_Bot_Player::DrawPlayer() {

}
