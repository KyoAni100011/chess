#pragma once
#include <iostream>

#define BG_LIGHT  "\033[48;5;180m"
#define BG_DARK   "\033[48;5;94m"
#define TEXT_COLOR "\033[38;5;16m"
#define RESET     "\033[0m"

enum class Color: unsigned int {
  BLACK = 0,
  WHITE = 1
};

enum class Type: char {
  KING = 'K',
  QUEEN = 'Q',
  ROOK = 'R',
  BISHOP = 'B',
  KNIGHT = 'K',
  PAWN = 'P'
};
