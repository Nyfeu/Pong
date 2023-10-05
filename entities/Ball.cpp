#include <raylib.h>
#include "Ball.h"
#include "../constants.h"

// Constructors

Ball::Ball() {
    x = screen_width/2;
    y = screen_height/2;
    speedX = 0;
    speedY = 0;
    radius = 20;
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

// Methods
void Ball::Draw() {
    DrawCircle(x, y, 20, ballColor);
}