#pragma once
class NumGen;

class NumGenObserver {
public:
    virtual ~NumGenObserver() {}
    virtual void Update(NumGen *numGen) = 0;
};
