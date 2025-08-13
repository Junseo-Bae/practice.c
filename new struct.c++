#include <iostream>

using namespace std;

typedef struct _Point
{
    int x;
    int y;
} Point;

Point& addPoint(const Point &p1, const Point &p2);

int main()
{
    Point* p1 = new Point;
    Point* p2 = new Point;

    Point& p3 = addPoint(*p1, *p2);

    cout << p3.x << ", " << p3.y << endl;

    delete p1;
    delete p2;
    delete &p3;

    return 0;
}

Point& addPoint(const Point &p1, const Point &p2)
{
    Point* p3 = new Point;
    p3->x = p1.x + p2.x;
    p3->y = p1.y + p2.y;

    return *p3;
}
