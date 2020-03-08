#include <Box.h>
#include <Player.h>

class Board
{
public:
    bool resetBoard();
    Box getBox(int x, int y);

private:
    std::vector<Box> m_boxes;
};
