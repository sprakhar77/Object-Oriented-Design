#include <Box.h>

class Player;

class Move
{
public:
    Move(Player player, Box start, Box end);
    bool isCastlingMove();

private:
    Player m_player;
    Box m_from;
    Box m_to;
    bool m_isKillingMove;
    bool m_isCastlingMove;
    Piece m_pieceMoved;
    Piece m_pieceKilled;
};
