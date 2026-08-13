#include "board.hpp"
#include "constants.hpp"

Board::Board(int row, int col) {
  this->row = row;
  this->col = col;
}

void Board::draw() {
  for(int i = 0; i < this->row; ++i) {
    for(int j = 0; j < this->col; ++j) {
      if((i + j) % 2 == 0) {
        std::cout << BG_LIGHT << "  " << RESET;
      }
      else {
        std::cout << BG_DARK << "  " << RESET;
      }
    }
    std::cout << std::endl;
  }
}

