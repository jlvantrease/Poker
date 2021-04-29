#include <iostream>
#include <stdio.h>
#include "Deck.h"
#include "Enum_Converter.h"


int main()
{
    Enum_Converter converter;
    Deck deck;
    auto card = deck.draw();
    //deck.print_deck();
    std::cout << "Drew card: " << converter.card_string(card) << std::endl; 
    return 0;
}