#pragma once
class IProduct {
public:
    virtual ~IProduct() {}
    virtual void Use() = 0;
};
