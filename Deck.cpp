#include <algorithm>
#include <iostream>
#include <string>
#include "Enum_Converter.h"
#include "Deck.h"
#include "Suit.h"
#include "Rank.h"


Deck::Deck()
{
 create_deck();
}

void Deck::draw()
{
//  if(deck.top() == nullptr)
//  {
//      return;
//  }
 Card c = deck.top();
 deck.pop();
 std::cout << "this works" << std::endl;
}

void Deck::create_deck()
{
    std::vector<Card> cards;   
    for(auto const suit : Suit_All)
    {
        for (auto const rank : Rank_All)
        {
          cards.push_back(Card(suit,rank));   
        }
    }
    
    shuffle(cards);
    print_deck(cards); //TODO: remove for debug only
    
    std::stack<Card, std::vector<Card>> deck(cards);
    
    std::cout << "________________________Created and Shuffled Deck__________________________" << std::endl;
}

void Deck::shuffle(std::vector<Card> &cards)
{
    for(int i = 0; i <= 500; i++)
    {
      int r1 = rand() % cards.size();
      int r2 = rand() % cards.size();
      std::iter_swap(cards.begin() + r1, cards.begin() + r2);    
    }
   
}

void Deck::print_deck(std::vector<Card> &cards)//TODO: remove for debug only
{
    int i = 0;
 for (auto card : cards)
 {
     i++;
     Enum_Converter converter;
     std::cout << i << ": " << converter.card_string(card) << std::endl;
 }
}