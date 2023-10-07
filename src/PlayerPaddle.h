#ifndef INCLUDED_PLAYERPADDLE_H
#define INCLUDED_PLAYERPADDLE_H

#include "Paddle.h"

class PlayerPaddle : public Paddle {

    public:
        using Paddle::Paddle;
        void Update() override;

};

#endif // INCLUDED_PLAYERPADDLE_H