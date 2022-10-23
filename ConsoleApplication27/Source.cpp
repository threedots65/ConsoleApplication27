#pragma once
#include <iostream>
#include <cmath>
#include "Header.h"

using namespace std;


double operator*(Coord c1, Coord c2)
{
    return c1.X + c2.X + c1.Y + c1.Y;
}
void operator*(Coord& c1, double s)
{
    c1.X = c1.X * s;
    c1.Y = c1.Y * s;
}
std::ostream& operator<<(std::ostream& os, const Coord& p)
{
    return os << p.X << "  " << p.Y;
}
Circle::Circle(Coord coord, double R)
{
    CoordCircle.X = coord.X;
    CoordCircle.Y = coord.Y;
    Radius = R;

}

Circle::Circle()
{
}

void Circle::MovingCircle(double v)
{
    CoordCircle.X += v;
    CoordCircle.Y += v;
}

void Circle::GetCoord()
{
    cout << CoordCircle;
}

void Circle::GetRadius()
{
    cout << Radius << "Радиус" << endl;
}

void Circle::SetRadius(int R)
{
    Radius = R;
}

void Circle::SetCoord(Coord coord)
{
    CoordCircle.X = coord.X;
    CoordCircle.Y = coord.Y;

}
double Circle::GetSquare()
{
    return 3.14 * Radius * Radius;
}

Rectangle::Rectangle(Coord c1, Coord c2, Coord c3, Coord c4)
{
    MassCoord[0].X = c1.X;
    MassCoord[1].X = c2.X;
    MassCoord[2].X = c3.X;
    MassCoord[3].X = c4.X;
    MassCoord[0].Y = c1.Y;
    MassCoord[1].Y = c2.Y;
    MassCoord[2].Y = c3.Y;
    MassCoord[3].Y = c4.Y;
}
Rectangle::Rectangle()
{
}
bool Rectangle::ItisRectangle()
{
    if (ItIsRightTringle(MassCoord[0], MassCoord[1], MassCoord[2]))
    {
        if (ItIsRightTringle(MassCoord[0], MassCoord[3], MassCoord[2]))
        {
            cout << "Это прямоугольник" << endl;
            return true;
        }
        else
        {
            cout << "Это не прямоугольник" << endl;
            return false;
        }

    }
    else
    {
        cout << "Это не прямоугольник" << endl;
        return false;
    }

}
void Rectangle::GetCoord()
{
    for (int i = 0; i < 4; i++)
    {
        cout << MassCoord[i];
    }
}

void Rectangle::SetCoord(Coord c1, Coord c2, Coord c3, Coord c4)
{
    MassCoord[0].X = c1.X;
    MassCoord[1].X = c2.X;
    MassCoord[2].X = c3.X;
    MassCoord[3].X = c4.X;
    MassCoord[0].Y = c1.Y;
    MassCoord[1].Y = c2.Y;
    MassCoord[2].Y = c3.Y;
    MassCoord[3].Y = c4.Y;
    if (ItisRectangle())
    {

    }
    else
    {
        MassCoord[0].X = 0;
        MassCoord[1].X = 0;
        MassCoord[2].X = 0;
        MassCoord[3].X = 0;
        MassCoord[0].Y = 0;
        MassCoord[1].Y = 0;
        MassCoord[2].Y = 0;
        MassCoord[3].Y = 0;
    }
}

void Rectangle::MovingRectangle(double a)
{


    MassCoord[0].X = MassCoord[0].X + a;
    MassCoord[1].X = MassCoord[1].X + a;
    MassCoord[2].X = MassCoord[2].X + a;
    MassCoord[3].X = MassCoord[3].X + a;
    MassCoord[0].Y = MassCoord[0].Y + a;
    MassCoord[1].Y = MassCoord[1].Y + a;
    MassCoord[2].Y = MassCoord[2].Y + a;
    MassCoord[3].Y = MassCoord[3].Y + a;


}

void Rectangle::RotateRectangle(double angle)
{
    for (size_t i = 0; i < 3; i++)
    {
        MassCoord[i].X = MassCoord[i].X * cos(angle) - MassCoord[i].Y * sin(angle);
        MassCoord[i].Y = MassCoord[i].X * sin(angle) + MassCoord[i].Y * cos(angle);

    }
}

bool Rectangle::ItIsRightTringle(Coord c1, Coord c2, Coord c3)
{
    if (GetLenght(c1, c3) * GetLenght(c1, c3) > (GetLenght(c1, c2) * GetLenght(c1, c2) + GetLenght(c2, c3) * GetLenght(c2, c3)))
    {
        bool a = true;
        return a;
    }
    bool a = false;
    return a;
}

double Rectangle::GetLenght(Coord c1, Coord c2)
{
    double result = sqrt((c1.X - c2.X) * (c1.X - c2.X) + (c1.Y - c2.Y) * (c1.Y - c2.Y));
    return result;
}




bool Squad::ItIsSquad()
{
    if (GetLenght(MassCoord[0], MassCoord[1]) == GetLenght(MassCoord[0], MassCoord[3]))
    {
        cout << "Это квадрат" << endl;
        return true;

    }
    cout << "Это не квадрат" << endl;
    return false;
}
void Squad::SetCoord(Coord c1, Coord c2, Coord c3, Coord c4)
{
    MassCoord[0].X = c1.X;
    MassCoord[1].X = c2.X;
    MassCoord[2].X = c3.X;
    MassCoord[3].X = c4.X;
    MassCoord[0].Y = c1.Y;
    MassCoord[1].Y = c2.Y;
    MassCoord[2].Y = c3.Y;
    MassCoord[3].Y = c4.Y;
}