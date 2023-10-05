#include <raylib.h>
#include "Paddle.h"
#include "../constants.h"

Paddle::Paddle(int xv) {
    x = xv;
    y = GetScreenHeight()/2 - rectangleHeigth/2;
    speedY = paddleSpeedY;
    width = rectangleWidth;
    height = rectangleHeigth;
}

// Setters

void Paddle::setY(int value) { y = value; }
void Paddle::setSpeedY(int value) { speedY = value; }

// Getters

float Paddle::getY() { return y; }
int Paddle::getSpeedY() { return speedY; }

// Methods

void Paddle::Draw() {
    DrawRectangle(x, y, width, height, paddleColor);
}

void Paddle::detectingLimits() {
    // Detecting colisions
    if ((y + height) >= GetScreenHeight()) y = GetScreenHeight() - height;
    if (y < 0) y = 0;
}