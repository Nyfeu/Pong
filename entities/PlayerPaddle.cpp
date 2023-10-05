#include <raylib.h>
#include "PlayerPaddle.h"
#include "../constants.h"

void PlayerPaddle::Update() {

    // Detecting events
    if (IsKeyDown(KEY_DOWN)) y += speedY;
    if (IsKeyDown(KEY_UP)) y -= speedY;

    // Detecting colisions
    if ((y + height) >= GetScreenHeight()) y = GetScreenHeight() - height;
    if (y < 0) y = 0;

}