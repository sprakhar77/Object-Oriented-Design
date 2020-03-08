#include <Piece.h>

class Box
{
public:
    void clearPiece();

private:
    int m_x;
    int m_y;
    Piece m_piece;
};
