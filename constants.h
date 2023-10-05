#ifndef INCLUDED_CONSTANTS_H
#define INCLUDED_CONSTANTS_H

#include <raylib.h>

// Defining positions

#define RIGHT 1
#define LEFT 0

// Defining the window dimensions

const int screen_width = 1200;
const int screen_height = 800;

// Defining the ball radius

const int ballRadius = 20;

// Defining the paddle dimensions

const int rectangleWidth = 25;
const int rectangleHeigth = 120;

// Player position

const int playerPosition = LEFT;

// Initial speeds

const int ballSpeedX = 10;
const int ballSpeedY = 10;
const int paddleSpeedY = 20;

// Defining the colors of the elements

const Color ballColor = WHITE;
const Color paddleColor = WHITE;
const Color textColor = WHITE;

#endif // INCLUDED_CONSTANTS_H