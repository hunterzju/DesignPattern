#pragma once
#include "IContext.hpp"
#include "IState.hpp"

class DayState : public IState {
public:
    static DayState &GetInstance() {
        static DayState s;
        return s;
    }

    virtual void DoClock(IContext *ctx, int hour) override;
    virtual void DoUse(IContext *ctx) override {
        ctx->RecoderLog("Day use ");
    }
    virtual void DoAlarm(IContext *ctx) override {
        ctx->CallSecurityCenter("Day alarm");
    }
    virtual void DoPhone(IContext *ctx) override {
        ctx->CallSecurityCenter("Day phone");
    }

    ~DayState() = default;

    DayState(const DayState &) = delete;
    DayState(DayState &&) = delete;
    DayState &operator=(const DayState &) = delete;
    DayState &operator=(DayState &&) = delete;

protected:
    DayState() {}
};
