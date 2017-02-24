#ifndef CLASS_H
#define CLASS_H
using namespace std;
class Disc
{
private:
	int radius;
	int xCoordinate;
	int yCoordinate;
public:
	~Disc();
	Disc();
	int GetRadius();
	void SetRadius(int rad);
	int GetXCoordinate();
	int GetYCoordinate();
	void Throw(int maxX, int maxY);
}
#endif