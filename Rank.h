#pragma once

enum class Rank{
  Two = 2,
  Three = 3,
  Four = 4,
  Five = 5,
  Six = 6,
  Seven = 7,
  Eight = 8,
  Nine = 9,
  Ten = 10,
  Jack = 11,
  Queen = 12,
  King = 13,
  Ace = 14,
};

static const Rank Rank_All[] = {Rank::Two, 
                            Rank::Three,
                            Rank::Four,
                            Rank::Five,
                            Rank::Six ,
                            Rank::Seven,
                            Rank::Eight,
                            Rank::Nine,
                            Rank::Ten,
                            Rank::Jack,
                            Rank::Queen,
                            Rank::King,
                            Rank::Ace};