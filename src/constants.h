#ifndef INCLUDED_CONSTANTS_H
#define INCLUDED_CONSTANTS_H

#include <raylib.h>

// Defining positions

#define RIGHT 1
#define LEFT 0

// Creating colors

const Color green = Color{38, 185, 154, 255};
const Color darkGreen = Color{20, 160, 133, 255};
const Color lightGreen = Color{129, 204, 184, 255};
const Color yellow = Color{243, 213, 91, 255};

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

const Color ballColor = yellow;
const Color paddleColor = WHITE;
const Color textColor = WHITE;
const Color backgroundColor = darkGreen;

#endif // INCLUDED_CONSTANTS_H
