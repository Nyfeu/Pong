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

        EndDrawing();
    }

	// Closing the window

	CloseWindow();

    return 0;
}