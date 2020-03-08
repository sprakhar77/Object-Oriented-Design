enum class AccountStatus
{
    ACTIVE,
    CLOSED,
    BLACKLISTED,
    COMPROMISED,
    CANCELED
};

enum class GameStatus
{
    ACTIVE,
    WHITE_WIN,
    BLACK_WIN,
    STALEMATE,
    RESIGNED,
    FORFIT
};

enum class PieceType
{
    KING,
    QUEEN,
    KNIGHT,
    BISHOP,
    PAWN,
    ROOK
};
