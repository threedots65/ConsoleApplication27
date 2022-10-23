#include <iostream>

#include "Header.h"
int main()
{
    Circle a;
    Rectangle b;
    Squad c;
    
    setlocale(LC_ALL, "Russian");
    for (;;)
    {
        cout << "Выберите вариант:" << endl;
        cout << "Иницилизровать окружность-1" << endl;
        cout << "Иницилизровать прямоугольник-2" << endl;
        cout << "Иницилизровать квадрат-3 " << endl;
        cout << "Переместить прямоугольник-4" << endl;
        cout << "Повернуть квадрат-5" << endl;
        cout << "Показать окружность-6" << endl;
        cout << "Показать прямоугольник-7" << endl;
        cout << "Показать квадрат-8" << endl;

        int k;
        cin >> k;
        switch (k)
        {
        case(1):
        {
            Coord m;
            cout << "Радиус-" << endl;
            double l;
            cin >> l;
            a.SetRadius(l);
            cout << "X,Y" << endl;
            cin >> m.X;
            cin >> m.Y;
            a.SetCoord(m);
            break;
        }
        case(2):
        {
            cout << "Координаты: " << endl;
            Coord c1, c2, c3, c4;
            cin >> c1.X >> c1.Y >> c2.X >> c2.Y >> c3.X >> c3.Y >> c4.X >> c4.Y;
            b.SetCoord(c1, c2, c3, c4);
            break;
        }
        case(3):
        {
            cout << "Координаты: " << endl;
            Coord c1, c2, c3, c4;
            cin >> c1.X >> c1.Y >> c2.X >> c2.Y >> c3.X >> c3.Y >> c4.X >> c4.Y;
            c.SetCoord(c1, c2, c3, c4);
            break;
        }
        case(4):
        {
            cout << "Вектор: " << endl;
            double a;
            cin >> a;
            b.MovingRectangle(a);
            break;

        }
        case(5):
        {
            cout << "Введите угол" << endl;
            double m;
            cin >> m;
            c.RotateRectangle(m);
            break;
        }
        case(6):
        {
            a.GetRadius();
            a.GetCoord();
            break;
        }
        case(7):
        {
            b.GetCoord();
            break;
        }
        case(8):
        {
            c.GetCoord();
            break;
        }
        }

    }
}