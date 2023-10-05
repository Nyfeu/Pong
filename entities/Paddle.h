#ifndef INCLUDED_PADDLE_H
#define INCLUDED_PADDLE_H

class Paddle {

    private:

        // Position
        float x, y;

        // Speed
        int speedY;

        // Rectangle dimensions
        int width, height;

    public:

        // Constructors
        Paddle(int xv);

        // Setters
        void setY(int value);
        void setSpeedY(int value);

        // Getters
        float getY();
        int getSpeedY();

        // Methods
        void Draw();
        void Update();


};

#endif // INCLUDED_PADDLE_H