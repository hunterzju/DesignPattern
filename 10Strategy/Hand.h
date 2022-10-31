#pragma once

class Hand {
public:
    enum class HandFlags {
        Rock = 0,
        Scissors = 1,
        Paper = 2
    };
    
    Hand(HandFlags hand) : m_hand(hand) {}
    
    void SetHand(HandFlags hand) {
        m_hand = hand;
    }
    HandFlags GetHand() const {
        return m_hand;
    }
    
    bool operator==(const Hand &other) {
        return other.m_hand == m_hand;
    }
    bool operator>(const Hand &other) {
        return (static_cast<int>(m_hand) + 1) % 3 == static_cast<int>(other.m_hand);
    }

private:
    HandFlags m_hand;
};
