#include "piece.hpp"

Position::Position(int row, int col) {
    this->row = row;
    this->col = col;
}

int Position::getRow() const {
    return this->row;
}

int Position::getCol() const {
    return this->col;
}

Piece::Piece(Color color, Position position, Type type, std::string symbol)
    : position(position) {
    this->color = color;
    this->type = type;
    this->symbol = symbol;
}

King::King(Color color, Position position) : Piece(color, position, Type::KING, "") {
    this->symbol = (color == Color::WHITE) ? "\u2654" : "\u265A";
}

Queen::Queen(Color color, Position position) : Piece(color, position, Type::QUEEN, "") {
    this->symbol = (color == Color::WHITE) ? "\u2655" : "\u265B";
}

Rook::Rook(Color color, Position position) : Piece(color, position, Type::ROOK, "") {
    this->symbol = (color == Color::WHITE) ? "\u2656" : "\u265C";
}

Bishop::Bishop(Color color, Position position) : Piece(color, position, Type::BISHOP, "") {
    this->symbol = (color == Color::WHITE) ? "\u2657" : "\u265D";
}

Knight::Knight(Color color, Position position) : Piece(color, position, Type::KNIGHT, "") {
    this->symbol = (color == Color::WHITE) ? "\u2658" : "\u265E";
}

Pawn::Pawn(Color color, Position position) : Piece(color, position, Type::PAWN, "") {
    this->symbol = (color == Color::WHITE) ? "\u2659" : "\u265F";
}

std::string King::getSymbol() const {
    return this->symbol;
}

std::string Queen::getSymbol() const {
    return this->symbol;
}

std::string Rook::getSymbol() const {
    return this->symbol;
}

std::string Bishop::getSymbol() const {
    return this->symbol;
}

std::string Knight::getSymbol() const {
    return this->symbol;
}

std::string Pawn::getSymbol() const {
    return this->symbol;
}