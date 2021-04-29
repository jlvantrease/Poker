#pragma once

#include "Card.h"
#include <vector>
#include <stack>

//52 cards in a deck
class Deck
{
    //std::vector<Card> deck;
    std::stack<Card> deck;
    public:
        Deck();
        Card draw();
        
        
    
    private:
        void create_deck();
        void shuffle(std::vector<Card> &cards);
        void print_deck(std::vector<Card> &cards); //TODO: remove for debug only
        
};