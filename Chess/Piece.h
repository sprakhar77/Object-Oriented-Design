#include <vector>
#include <Enums.h>

class Board;
class Box;

class Piece
{
public:
    virtual bool canMove(Board board, Box start, Box end) = 0;
    Piece(PieceType type) : m_type(type){}

private:
    bool m_isWhite;
    bool m_isKilled;
    PieceType m_type;
};

class King : public Piece
{
public:
    King() : Piece(PieceType::KING){}
    bool canMove(Board board, Box start, Box end) override;
};

class Queen : public Piece
{
public:
    Queen() : Piece(PieceType::QUEEN){}
    bool canMove(Board board, Box start, Box end) override;
};

class Bishop : public Piece
{
public:
    Bishop() : Piece(PieceType::BISHOP){}
    bool canMove(Board board, Box start, Box end) override;
};

class Rook : public Piece
{
public:
    Rook() : Piece(PieceType::ROOK){}
    bool canMove(Board board, Box start, Box end) override;
};

class Knight : public Piece
{
public:
    Knight() : Piece(PieceType::KNIGHT){}
    bool canMove(Board board, Box start, Box end) override;
};

class Pawn : public Piece
{
public:
    Pawn() : Piece(PieceType::PAWN){}
    bool canMove(Board board, Box start, Box end) override;
};
