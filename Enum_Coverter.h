#pragma once

#include <string>
#include <map>
#include "Suit.h"
#include "Rank.h"
#include "Card.h"
class Enum_Converter
{
  public:
    std::string card_string(Card card)
    {
        std::map<Suit, std::string> enum_suit
        {
            {Suit::Clubs, "Clubs"},
            {Suit::Diamonds, "Diamonds"},
            {Suit::Hearts, "Hearts"},
            {Suit::Spades, "Spades"}
        };
        
        
        
        std::map<Rank, std::string> enum_rank
        {
            {Rank::Two, "Two"},
            {Rank::Three, "Three"},
            {Rank::Four, "Four"},
            {Rank::Five, "Five"},
            {Rank::Six, "Six"},
            {Rank::Seven, "Seven"},
            {Rank::Eight, "Eight"},
            {Rank::Nine, "Nine"},
            {Rank::Ten, "Ten"},
            {Rank::Jack, "Jack"},
            {Rank::Queen, "Queen"},
            {Rank::King, "King"},
            {Rank::Ace, "Ace"},
               
        };
        
        auto result_suit = enum_suit.find(card.suit);
        auto result_rank = enum_rank.find(card.rank);
        std::string result = "| " + result_rank -> second + " of " + result_suit->second + " |";
        return result;
    }
    
    
};