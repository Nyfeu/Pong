#include <raylib.h>
#include "CpuPaddle.h"
#include "constants.h"

void CpuPaddle::Update(float ballY) {

    // Detecting events
    if (ballY > (y+height/2)) y += speedY;
    if (ballY < (y+height/2)) y -= speedY;

    detectingLimits();

}