#pragma once
#include <string>
#include "Suit.h"
#include "Rank.h"

class Card
{
    public:
        Card(Suit suit, Rank rank) : suit(suit), rank(rank)
        {
            
        }
   
        Suit suit;
        Rank rank;
};