#pragma once

#include <cmath>
using namespace std;

struct Coord
{
public:
	double X;
	double Y;
	friend double operator * (Coord c1,Coord c2);
	friend void operator * (Coord &c1, double s);

};
std::ostream& operator << (std::ostream& os, const Coord& p);

class Circle
{
private:
	double Radius;
	Coord CoordCircle;

public:
	Circle(Coord coord, double R);
	Circle();
	void MovingCircle(double v);
	void GetCoord();
	void GetRadius();
	void SetRadius(int R);
	void SetCoord(Coord coord);
	double GetSquare();
};


class Rectangle
{
protected:
	Coord MassCoord[4];
public:
	Rectangle(Coord c1, Coord c2, Coord c3, Coord c4);
	Rectangle();
	bool ItisRectangle();
	void GetCoord();
	virtual void SetCoord(Coord c1, Coord c2, Coord c3, Coord c4);
	virtual void MovingRectangle(double a);
	void RotateRectangle(double angle);
	static bool ItIsRightTringle(Coord c1, Coord c2, Coord c3);
	static double GetLenght(Coord c1, Coord c2);




};
class Squad :public Rectangle
{
public:
	bool ItIsSquad();
	virtual void SetCoord(Coord c1, Coord c2, Coord c3, Coord c4) override;

};