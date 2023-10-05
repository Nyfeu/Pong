#include <iostream>
#include <raylib.h>
#include "constants.h"
#include "entities/Ball.h"


using namespace std;

int main() {

    cout << "Starting the game..." << endl;
	
    // Initializing the window

    InitWindow(screen_width, screen_height, "My Pong Game!");

    // Defining Frame Rate

    SetTargetFPS(60);

    // Creating the Ball object

    Ball ball;
    ball.setSpeedX(5);
    ball.setSpeedY(10);

    // Game Loop

    while ( WindowShouldClose() == false ) {

        
        ball.Update();

        // Drawing
        BeginDrawing();
        ClearBackground(BLACK);

        // Drawing the center line
        DrawLine(screen_width/2,0,screen_width/2,screen_height,WHITE);

        // Drawing the ball
        ball.Draw();

        // Drawing the paddles
        DrawRectangle(10, screen_height/2 - 120/2, 25 ,120, WHITE);
        DrawRectangle(screen_width - 35, screen_height/2 - 120/2, 25 ,120, WHITE);

        EndDrawing();
    }

    // Closing the window

    CloseWindow();

    return 0;
}