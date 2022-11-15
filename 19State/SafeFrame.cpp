#include "SafeFrame.hpp"
#include "DayState.hpp"
#include "NightState.hpp"
#include <iostream>

SafeFrame::SafeFrame() : m_state(&DayState::GetInstance()) {}

void SafeFrame::SetClock(int hour) {
    std::cout << "now time is " << hour << std::endl;
    m_state->DoClock(this, hour);
}

void SafeFrame::DoAction(ActionType actionType) {
    switch(actionType) {
        case ActionType::ALARM:
            m_state->DoAlarm(this);
            break;
        case ActionType::USE:
            m_state->DoUse(this);
            break;
        case ActionType::PHONE:
            m_state->DoPhone(this);
            break;
        default:
            m_state->DoUse(this);
            break;
    }
}

void SafeFrame::StateChange(IState *state) {
    std::cout << __FUNCTION__ << std::endl;
    m_state = state;
}

void SafeFrame::CallSecurityCenter(const std::string &msg) {
    std::cout << __FUNCTION__ << " " << msg << std::endl;
} 

void SafeFrame::RecoderLog(const std::string &msg) {
    std::cout << __FUNCTION__ << " " << msg << std::endl;
}
