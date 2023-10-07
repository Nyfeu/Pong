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

        // Color of the ball
        Color color;

        // Game infos
        int playerScore, cpuScore, playerPosition;

    public:

        // Constructors
        Ball(int speedX, int speedY, int radius, Color color);

        // Setters
        void setX(int x);
        void setY(int y);
        void setSpeedX(int speedX);
        void setSpeedY(int speedY);
        void setPlayerPosition(int playerPosition);

        // Getters
        float getX();
        float getY();
        int getSpeedX();
        int getSpeedY();
        int getPlayerScore();
        int getCpuScore();

        // Methods
        void Draw();
        void Update();
        void Reset();
        void InitialCondition();
        void CheckCollision(Rectangle rect);

};

#endif // INCLUDED_BALL_H