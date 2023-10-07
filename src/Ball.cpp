#include <raylib.h>
#include "Ball.h"

// Constructors

Ball::Ball(int speedX, int speedY, int radius, Color color) { 
    playerScore = 0;
    cpuScore = 0;
    this->speedX = speedX;
    this->speedY = speedY;
    this->radius = radius;
    this->color = color;
    InitialCondition(); 
}

// Setters

void Ball::setX(int x) { this->x = x; }
void Ball::setY(int y) { this->y = y; }
void Ball::setSpeedX(int speedX) { this->speedX = speedX; }
void Ball::setSpeedY(int speedY) { this->speedY = speedY; }
void Ball::setPlayerPosition(int playerPosition) { this->playerPosition = playerPosition; }

// Getters

float Ball::getX() { return x; }
float Ball::getY() { return y; }
int Ball::getSpeedX() { return speedX; }
int Ball::getSpeedY() { return speedY; }
int Ball::getPlayerScore() { return playerScore; }
int Ball::getCpuScore() { return cpuScore; }

// Methods

void Ball::Draw() {
    DrawCircle(x, y, 20, color);
}

void Ball::Update() {
    x += speedX;
    y += speedY;

    if (x + radius >= GetScreenWidth()) {
        playerPosition?cpuScore += 1:playerScore+=1;
        Reset();
    }
    if (x - radius <= 0) {
        playerPosition?playerScore+=1:cpuScore += 1;
        Reset();
    }
    if (y + radius >= GetScreenHeight() || y - radius <= 0) speedY *= -1;
}

void Ball::Reset() { InitialCondition(); }

void Ball::CheckCollision(Rectangle rect) {
    if (CheckCollisionCircleRec(Vector2{x, y}, radius, rect)) speedX *= -1;
}

void Ball::InitialCondition() {
    
    // Centering the ball
    x = GetScreenWidth()/2;
    y = GetScreenHeight()/2;

    // Random direction
    int speedChoices[2] = {-1,1};
    speedX *= speedChoices[GetRandomValue(0,1)];
    speedY *= speedChoices[GetRandomValue(0,1)];

}