#include <iostream>
#include <raylib.h>
#include "constants.h"
#include "Ball.h"
#include "PlayerPaddle.h"
#include "CpuPaddle.h"

using namespace std;

int main() {

    cout << "Starting the game..." << endl;
	
    // Initializing the window

    InitWindow(screen_width, screen_height, "My Pong Game!");

    // Defining Frame Rate

    SetTargetFPS(60);

    // Creating the Ball object

    Ball ball(ballSpeedX,ballSpeedY,ballRadius,ballColor);
    ball.setPlayerPosition(playerPosition);

    // Creating the player's paddle

    PlayerPaddle player(playerPosition, rectangleWidth, rectangleHeigth, paddleSpeed, paddleColor);

    // Creating the cpu's paddle

    float cpuPosition = playerPosition == RIGHT? LEFT: RIGHT;

    CpuPaddle cpu(cpuPosition, rectangleWidth, rectangleHeigth, paddleSpeed, paddleColor);

    // Game Loop

    while ( WindowShouldClose() == false ) {

        // Telling the cpu where the ball is
        cpu.setBallPosition(ball.getY());

        // Updating elements
        ball.Update();
        player.Update();
        cpu.Update();

        // Checking for collisions
        ball.CheckCollision(player.toRect());
        ball.CheckCollision(cpu.toRect());

        // Drawing
        BeginDrawing();
        ClearBackground(leftSideColor);

        // Drawing the center line
        DrawLine(screen_width/2,0,screen_width/2,screen_height,WHITE);
        DrawRectangle(screen_width/2,0,screen_width/2, screen_height, rightSideColor);
        DrawCircle(screen_width/2, screen_height/2, 150, centerColor);

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