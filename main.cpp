#include <iostream>
#include <raylib.h>

using namespace std;

int main() {

    cout << "Starting the game..." << endl;

    // Defining the window dimensions

	const int screen_width = 1200;
	const int screen_height = 800;
	
    // Initializing the window

    InitWindow(screen_width, screen_height, "My Pong Game!");

    // Defining Frame Rate

    SetTargetFPS(60);

    // Game Loop

	while ( WindowShouldClose() == false ) {
        BeginDrawing();

        // Drawing the ball
        DrawCircle(screen_width/2, screen_height/2, 20, WHITE);

        // Drawing the paddles
        DrawRectangle(10, screen_height/2 - 120/2, 25 ,120, WHITE);
        DrawRectangle(screen_width - 35, screen_height/2 - 120/2, 25 ,120, WHITE);

        // Drawing the center line
        DrawLine(screen_width/2,0,screen_width/2,screen_height,WHITE);

        EndDrawing();
    }

	// Closing the window

	CloseWindow();

    return 0;
}