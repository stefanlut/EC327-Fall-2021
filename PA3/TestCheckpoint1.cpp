#include <iostream>
#include <cmath>
using namespace std;
class Point2D{
    public:
        double x, y;
        Point2D(){
            x = 0.0;
            y = 0.0;
        }
        Point2D(double in_x, double in_y){
            x = in_x;
            y = in_y;
        }
        double GetDistanceBetween(Point2D, Point2D);
        friend ostream& operator << (ostream& os, const Point2D& p);
        friend Point2D operator + (Point2D p, Vector2D v);
        friend Vector2D operator - (Point2D p1, Point2D p2);
};

double Point2D::GetDistanceBetween(Point2D p1, Point2D p2) // Returns the Cartesian (ordinary) distance between p1 and p2.
{
    return sqrt(pow(p2.x - p1.x,2) + pow(p2.y - p1.y,2));
}
ostream& operator << (ostream& os, const Point2D& p)
{
    os << '(' << p.x << ", " << p.y << ')';
    return os;
}

class Vector2D{
    public:
        double x,y;
        Vector2D(){
            x = 0.0;
            y = 0.0;
        }
        Vector2D(double in_x, double in_y){
            x = in_x;
            y = in_y;
        }
};