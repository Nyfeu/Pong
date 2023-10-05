#include <raylib.h>
#include "Ball.h"
#include "../constants.h"

// Constructors

Ball::Ball() { 
    playerScore = 0;
    cpuScore = 0;
    InitialCondition(); 
}

// Setters

void Ball::setX(int value) { x = value; }
void Ball::setY(int value) { y = value; }
void Ball::setSpeedX(int value) { speedX = value; }
void Ball::setSpeedY(int value) { speedY = value; }

// Getters

float Ball::getX() { return x; }
float Ball::getY() { return y; }
int Ball::getSpeedX() { return speedX; }
int Ball::getSpeedY() { return speedY; }
int Ball::getPlayerScore() { return playerScore; }
int Ball::getCpuScore() { return cpuScore; }

// Methods

void Ball::Draw() {
    DrawCircle(x, y, 20, ballColor);
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
    x = screen_width/2;
    y = screen_height/2;
    speedX = ballSpeedX;
    speedY = ballSpeedY;
    radius = ballRadius;
}