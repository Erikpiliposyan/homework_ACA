#include <iostream>

class PieceType {
    Pawn,
    Rook,
    Knight,
    Bishop,
    Queen,
    King
};

 class PieceColor {
    White,
    Black
};

class ChessPiece {
protected:
    PieceType type;
    PieceColor color;

public:
    ChessPiece(PieceType pieceType, PieceColor pieceColor);
    virtual ~ChessPiece();

    PieceType getType() const;
    PieceColor getColor() const;
};

class Pawn : public ChessPiece {
public:
    Pawn(PieceColor pieceColor);
    ~Pawn();
};

class Rook : public ChessPiece {
public:
    Rook(PieceColor pieceColor);
    ~Rook();
};

class Knight : public ChessPiece {
public:
    Knight(PieceColor pieceColor);
    ~Knight();
};

class Bishop : public ChessPiece {
public:
    Bishop(PieceColor pieceColor);
    ~Bishop();
};

class Queen : public ChessPiece {
public:
    Queen(PieceColor pieceColor);
    ~Queen();
};

class King : public ChessPiece {
public:
    King(PieceColor pieceColor);
    ~King();


};


