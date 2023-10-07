#ifndef INCLUDED_CPUPLAYERPADDLE_H
#define INCLUDED_CPUPLAYERPADDLE_H

#include "Paddle.h"

class CpuPaddle : public Paddle {

    private:
        float ballPosition;

    public:
        using Paddle::Paddle;
        void setBallPosition(float ballY);
        void Update() override;

};

#endif // INCLUDED_CPUPLAYERPADDLE_H