#pragma once
#include "constants.hpp"

class Position {
  private:
    int row;
    int col;

  public:
    Position(int row, int col);
    int getRow() const;
    int getCol() const;
};

class Piece {
  protected:
    Color color;
    Position position;
    Type type;
    std::string symbol;
  public:
    Piece(Color color, Position position, Type type, std::string symbol);
    virtual std::string getSymbol() const = 0;
    virtual ~Piece() = default;
};

class King : public Piece {
  public:
    King(Color color, Position position);
    std::string getSymbol() const override;
};

class Queen : public Piece {
  public:
    Queen(Color color, Position position);
    std::string getSymbol() const override;
};

class Rook : public Piece {
  public:
    Rook(Color color, Position position);
    std::string getSymbol() const override;
};

class Bishop : public Piece {
  public:
    Bishop(Color color, Position position);
    std::string getSymbol() const override;
};

class Knight : public Piece {
  public:
    Knight(Color color, Position position);
    std::string getSymbol() const override;
};

class Pawn : public Piece {
  public:
    Pawn(Color color, Position position);
    std::string getSymbol() const override;
};