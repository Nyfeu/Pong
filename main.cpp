#include <iostream>
#include <raylib.h>
#include "constants.h"
#include "entities/Ball.h"
#include "entities/Paddle.h"

using namespace std;

int main() {

    cout << "Starting the game..." << endl;
	
    // Initializing the window

    InitWindow(screen_width, screen_height, "My Pong Game!");

    // Defining Frame Rate

    SetTargetFPS(60);

    // Creating the Ball object

    Ball ball;

    // Creating the paddles

    Paddle player(10);
    Paddle cpu(screen_width - 35);

    // Game Loop

    while ( WindowShouldClose() == false ) {

        // Updating elements
        ball.Update();
        player.Update();
        cpu.Update();

        // Drawing
        BeginDrawing();
        ClearBackground(BLACK);

        // Drawing the center line
        DrawLine(screen_width/2,0,screen_width/2,screen_height,WHITE);

        // Drawing the ball
        ball.Draw();

        // Drawing the paddles
        player.Draw();
        cpu.Draw();

        EndDrawing();
    }

    // Closing the window

    CloseWindow();

    return 0;
}