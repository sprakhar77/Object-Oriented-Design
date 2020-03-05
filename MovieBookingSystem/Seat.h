#include <string>

#include "Enums.h"

class Seat
{
public:
    SeatType getType();

private:
    std::string m_row;
    std::string m_column;
    SeatType m_seatType;
    bool m_isReserved;
};
