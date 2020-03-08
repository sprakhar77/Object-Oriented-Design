#include <Board.h>

class Game
{
public:
    bool playerMove(Player player, Move move);

private:
    Board m_board;
    Player m_player[2];
    Player m_activePlayer;
    std::vector<Move> m_moveHistory;
    GameStatus m_status;
};
