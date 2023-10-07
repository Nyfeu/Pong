#include <raylib.h>
#include "Paddle.h"

Paddle::Paddle(int position, int width, int height, int speed, Color color) {
    x = position;
    y = GetScreenHeight()/2 - height/2;
    speedY = speed;
    this->width = width;
    this->height = height;
    this->color = color;
}

// Setters

void Paddle::setY(float y) { this->y = y; }
void Paddle::setSpeedY(int speedY) { this->speedY = speedY; }

// Getters

float Paddle::getY() { return y; }
int Paddle::getSpeedY() { return speedY; }

// Methods

void Paddle::Draw() {
    DrawRectangleRounded(Rectangle{x, y, (float) width, (float) height}, 0.8, 0, color);
}

void Paddle::detectingLimits() {
    // Detecting colisions
    if ((y + height) >= GetScreenHeight()) y = GetScreenHeight() - height;
    if (y < 0) y = 0;
}

Rectangle Paddle::toRect() {
    return Rectangle{x,y, (float) width, (float) height};
}