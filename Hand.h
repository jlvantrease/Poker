#pragma once

#include <vector>;
#include "Card.h";

class Hand
{
    public:
        std::vector<Card> hand;
        void add_to_hand(Card card);
};