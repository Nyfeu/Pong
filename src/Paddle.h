#ifndef INCLUDED_PADDLE_H
#define INCLUDED_PADDLE_H

#include <raylib.h>

class Paddle {

    protected:

        // Position
        float x, y;

        // Speed
        int speedY;

        // Rectangle dimensions
        int width, height;

        // Color of the paddle
        Color color;

        // Detecting limits
        void detectingLimits();

    public:

        // Constructors
        Paddle(int position, int width, int height, int speed, Color color);

        // Setters
        void setY(float value);
        void setSpeedY(int value);

        // Getters
        float getY();
        int getSpeedY();
        Rectangle toRect();

        // Methods
        void Draw();
        virtual void Update() = 0;

};

#endif // INCLUDED_PADDLE_H