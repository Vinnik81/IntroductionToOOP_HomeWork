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
		return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2)); //�����;
	}
	void print()
	{
		cout << "X = " << x << "\t" << "Y = " << y;
	}
};
double distance(const Point& A, const Point& B) //�������;
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
	cout << "������� � ��� ����� �: "; cin >> x;
	cout << "������� � ��� ����� �: "; cin >> y;
	Point A(x, y);
	cout << "������� � ��� ����� �: "; cin >> x;
	cout << "������� � ��� ����� �: "; cin >> y;
	Point B(x, y);
	cout << "\n\n========================�����========================\n\n";
	cout << "���������� �� ����� � �� ����� �: " << A.distance(B) << endl;
	cout << "���������� �� ����� � �� ����� �: " << B.distance(A) << endl;
	cout << "\n\n=======================�������=======================\n\n";
	cout << "���������� ����� ������� � � �: " << distance(A, B) << endl;
	cout << "���������� ����� ������� B � A: " << distance(B, A) << endl;
}