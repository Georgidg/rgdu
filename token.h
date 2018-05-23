#include "Player.h"

class token : public Player
{
public:
	const string name() const override{return "dant";}
	const Coordinate play(const Board& board) override;
};
