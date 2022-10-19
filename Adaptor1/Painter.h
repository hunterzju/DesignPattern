#pragma once
class Painter {
public:
    virtual ~Painter() {}
    virtual void PrintStrong() = 0;
    virtual void PrintWeak() = 0;
};
