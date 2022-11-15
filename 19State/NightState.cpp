#include "DayState.hpp"
#include "NightState.hpp"

void NightState::DoClock(IContext *ctx, int hour) {
    if(hour >= 9 && hour < 17) {
        ctx->StateChange(&DayState::GetInstance());
    }
}
