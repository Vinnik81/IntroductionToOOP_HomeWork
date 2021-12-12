#include <iostream>
#include <math.h>
using namespace std;

class Point
{
	double x, y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x;
	}
	void set_y(double y)
	{
		this->y;
	}
	Point(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
	}
	~Point()
	{
	}
	Point operator = (const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		return *this;
	}
	double distance(const Point& other)
	{
		return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2)); //метод;
	}
	void print()
	{
		cout << "X = " << x << "\t" << "Y = " << y;
	}
};
double distance(const Point& A, const Point& B) //функция;
{
	double x_dist = A.get_x() - B.get_x();
	double y_dist = A.get_y() - B.get_y();
	double distance = sqrt(x_dist * x_dist + y_dist * y_dist);
	return distance;
}
void main()
{
	setlocale(LC_ALL, "");
	double x, y;
	cout << "Введите х для точки А: "; cin >> x;
	cout << "Введите у для точки А: "; cin >> y;
	Point A(x, y);
	cout << "Введите х для точки В: "; cin >> x;
	cout << "Введите у для точки В: "; cin >> y;
	Point B(x, y);
	cout << "\n\n========================МЕТОД========================\n\n";
	cout << "Расстояние от точки А до точки В: " << A.distance(B) << endl;
	cout << "Расстояние от точки В до точки А: " << B.distance(A) << endl;
	cout << "\n\n=======================ФУНКЦИЯ=======================\n\n";
	cout << "Расстояние между точками А и В: " << distance(A, B) << endl;
	cout << "Расстояние между точками B и A: " << distance(B, A) << endl;
}