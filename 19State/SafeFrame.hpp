#pragma once
#include "IContext.hpp"
#include "IState.hpp"

class SafeFrame : public IContext {
public:
    SafeFrame();
    virtual void SetClock(int hour) override;
    virtual void DoAction(ActionType actionType) override;
    virtual void StateChange(IState *state) override;
    virtual void CallSecurityCenter(const std::string &msg) override;
    virtual void RecoderLog(const std::string &msg) override;

private:
    IState *m_state;
};
