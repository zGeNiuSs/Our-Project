#include <iostream>
using namespace std;

class Point {
	private:
	int x, y;

	public:
    Point(int x_coord, int y_coord) : x(x_coord), y(y_coord) {}

    // Overloading the + operator for addition of points
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }
	// Overloading the - operator for addition of points
    Point operator-(const Point& other) const {
        return Point(x - other.x, y - other.y);
    }
	// Overloading the * operator for addition of points
    Point operator*(const Point& other) const {
        return Point(x * other.x, y * other.y);
    }
	// Overloading the / operator for addition of points
    Point operator/(const Point& other) const {
        return Point(x / other.x, y / other.y);
	}	
	
	void printfn(x, y)
	{
		cout << "x = ", x << "y = ", y;
	}
    
};

int main
{
	point p1(2,5), p2(6,4), p3;
	
	p3 = p1 + p2;
	cout << "The Result of operation+ = " << p3.printfn();
	
	return 0;
}