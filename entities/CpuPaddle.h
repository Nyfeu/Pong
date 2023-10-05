#ifndef INCLUDED_CPUPLAYERPADDLE_H
#define INCLUDED_CPUPLAYERPADDLE_H

#include "Paddle.h"

class CpuPaddle : public Paddle {

    public:
        using Paddle::Paddle;
        void Update(float ballY);

};

#endif // INCLUDED_CPUPLAYERPADDLE_H