#include "SafeFrame.hpp"

int main() {
    IContext *ctx = new SafeFrame();
    for (int i = 0; i < 24; i++) {
        ctx->SetClock(i);
        ctx->DoAction(IContext::ActionType::USE);
        ctx->DoAction(IContext::ActionType::PHONE);
        ctx->DoAction(IContext::ActionType::ALARM);
    }
    delete ctx;
    return 0;
}
