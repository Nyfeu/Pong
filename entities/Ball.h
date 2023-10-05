#ifndef INCLUDED_BALL_H
#define INCLUDED_BALL_H

class Ball {

    private:

        // Position
        float x, y;

        // Speed
        int speedX, speedY;

        // Radius
        int radius;

    public:

        // Constructors
        Ball();

        // Setters
        void setX(int value);
        void setY(int value);
        void setSpeedX(int value);
        void setSpeedY(int value);

        // Getters
        float getX();
        float getY();
        int getSpeedX();
        int getSpeedY();

        // Methods
        void Draw();

};

#endif // INCLUDED_BALL_H