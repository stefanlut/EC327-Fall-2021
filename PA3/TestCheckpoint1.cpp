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
Point2D operator + (Point2D p, Vector2D v)
{
    Point2D newPoint;
    newPoint.x = p.x + v.x;
    newPoint.y = p.y + v.y;

    return newPoint;
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
Vector2D operator - (Point2D p1, Point2D p2)
{
    Vector2D newVector;
    newVector.x = p1.x - p2.x;
    newVector.y = p1.y - p2.y;
    return newVector;
}
Vector2D operator * (Vector2D v, double d)
{
    Vector2D newVector;
    newVector.x = v.x * d;
    newVector.y = v.y * d;

    return newVector;
}
Vector2D operator / (Vector2D v, double d)
{
    
    if(d == 0)
    {
        return v;
    }
    else
    {
        Vector2D newVector;
        newVector.x = v.x * d;
        newVector.y = v.y * d;
        return newVector;
    }
}
ostream& operator << (ostream& os, const Vector2D& v)
{
    os << '<' << v.x << ", " << v.y << '>';
    return os;
}

class GameObject{
    public:
    GameObject(char in_code){
        display_code = in_code;
        id_num = 1;
        state = '0';
        cout << "GameObject Constructed" << endl;
    }
    GameObject(Point2D in_loc, int in_id, char in_code)
    {
        display_code = in_code;
        location = in_loc;
        id_num = in_id;
        state = '0';
        cout << "GameObject Constructed" << endl;
    }
    Point2D GetLocation()
    {
        return location;
    }
    int GetId()
    {
        return id_num;
    }
    char GetState()
    {
        return state;
    }
    void ShowStatus()
    {
        cout <<"("<<display_code<<")"<<"("<<id_num<<") at (" << location.x << ", " << location.y << ")" << endl;
    }
    private:
    Point2D location;
    int id_num;
    char display_code;
    char state;
};
int main()
{
    return 0;
}