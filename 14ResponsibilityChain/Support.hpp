#pragma once
#include "Trouble.hpp"
#include <iostream>

class Support {
public:
    virtual ~Support() {}
    Support(const std::string &name) : m_name(name) {}
    Support *SetNext(Support *next) {
        m_next = next;
        return next;
    }
    void support(Trouble *trouble) {
        if (resolve(trouble)) {
            done(trouble);
        } else if (m_next) {
            m_next->support(trouble);
        } else {
            fail(trouble);
        }
    }
    std::string ToString() const {
        return "[" + m_name + "]";
    }
    virtual bool resolve(Trouble *trouble) = 0;

protected:
    void done(Trouble *trouble) {
        std::cout << trouble->ToString() << " is solved by " << ToString() << std::endl;
    }
    void fail(Trouble *trouble) {
        std::cout << trouble->ToString() << " cannot be resolved." << std::endl;
    }

private:
    std::string m_name;
    Support *m_next = nullptr;
};
