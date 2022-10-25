#include "SingleTon.h"
#include <iostream>
#include <string>
using namespace std;

class Apple : public SingleTon<Apple>
{
    friend SingleTon<Apple>;
public:
    void Show() {
        cout << __FUNCTION__ << endl;
    }
    ~Apple() {
        cout << __FUNCTION__ << endl;
    }
protected:
    Apple() {}
};

class Orange : public SingleTon<Orange>
{
    friend SingleTon<Orange>;
public:
    ~Orange() {
        cout << __FUNCTION__ << endl;
    }
    void Show() {
        cout << __FUNCTION__ << endl;
    }
protected:
    Orange() {}
};

int main() {
    Apple::GetInstance().Show();
    cout << &Apple::GetInstance() << endl;
    Apple::GetInstance().Show();
    cout << &Apple::GetInstance() << endl;

    Orange::GetInstance().Show();
    Orange::GetInstance().Show();
    Orange::GetInstance().Show();
    return 0;
}
