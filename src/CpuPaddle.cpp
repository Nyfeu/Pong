#include <raylib.h>
#include "CpuPaddle.h"

void CpuPaddle::setBallPosition(float ballY) { ballPosition = ballY; }

void CpuPaddle::Update() {

    // Detecting events
    if (ballPosition > (y+height/2)) y += speedY;
    if (ballPosition < (y+height/2)) y -= speedY;

    detectingLimits();

}