#include "ParkingSpot.h"

#include <string>

class ParkingDisplayBoard
{
public:
    void showEmptySpots();

private:
    std::string m_id;
    CompactSpot m_compactSpot;
    LargeSpot m_largeSpot;
    HandicapedSpot m_handicapedSpot;
    ElectricSpot m_electricSpot;
    MotorBikeSpot m_motorBikeSpot;
};
