#include <iostream>
#include <raylib.h>
#include "constants.h"
#include "entities/Ball.h"
#include "entities/PlayerPaddle.h"
#include "entities/CpuPaddle.h"

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

    PlayerPaddle player(playerPosition?screen_width - 35:10);
    CpuPaddle cpu(playerPosition?10:screen_width - 35);

    // Game Loop

    while ( WindowShouldClose() == false ) {

        // Updating elements
        ball.Update();
        player.Update();
        cpu.Update(ball.getY());

        // Checking for collisions
        ball.CheckCollision(player.toRect());
        ball.CheckCollision(cpu.toRect());

        // Drawing
        BeginDrawing();
        ClearBackground(backgroundColor);

        // Drawing the center line
        DrawLine(screen_width/2,0,screen_width/2,screen_height,WHITE);
        DrawRectangle(screen_width/2,0,screen_width/2, screen_height, green);
        DrawCircle(screen_width/2, screen_height/2, 150, lightGreen);

        // Drawing the ball
        ball.Draw();

        // Drawing the paddles
        player.Draw();
        cpu.Draw();

        // Score Text
        DrawText(TextFormat("%i",playerPosition?ball.getCpuScore():ball.getPlayerScore()), screen_width/4 -20, 20, 80, textColor);
        DrawText(TextFormat("%i",playerPosition?ball.getPlayerScore():ball.getCpuScore()), 3 * screen_width/4 -20, 20, 80, textColor);

        EndDrawing();
    }

    // Closing the window

    CloseWindow();

    return 0;
}