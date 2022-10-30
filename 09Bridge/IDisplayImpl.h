#pragma once

class IDisplayImpl {
public:
    virtual ~IDisplayImpl() {}
    virtual void RawOpen() = 0;
    virtual void RawPrint() = 0;
    virtual void RawClose() = 0;
};
