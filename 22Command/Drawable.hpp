#pragma once

class Drawable {
public:
    virtual ~Drawable() {}
    virtual void Draw(int x, int y) = 0;
};
