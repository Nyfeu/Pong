#include <raylib.h>
#include "PlayerPaddle.h"

void PlayerPaddle::Update() {

    // Detecting events
    if (IsKeyDown(KEY_DOWN)) y += speedY;
    if (IsKeyDown(KEY_UP)) y -= speedY;

    detectingLimits();

}