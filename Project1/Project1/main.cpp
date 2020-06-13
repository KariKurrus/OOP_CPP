#include<iostream>
class Point
{
	double x;
	double y;
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
		this-> x = x;
	}
	void set_y(double y)
	{
		this-> y = y;
	}
	// construcrors
	Point()
	{
		x = y = double();
		std::cout << "Default constructor:   " << this << std::endl;
	}
	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
		std::cout << "Constructor:    " << this << std::endl;
	}
	~Point()
	{
		std::cout << "Destructor:    " << this << std::endl;
	}
	// methods
	void print()const
	{
		std::cout << x << "\t" << y << std::endl;
	}
};
//#define Structures

void main()
{
	setlocale(LC_ALL, "rus");
#ifdef Structures
	Point A;
	A.x = 2;
	A.y = 3;
	std::cout << A.x << "\t" << A.y << std::endl;
	Point* pA = &A;
	std::cout << pA->x << "\t" << pA->y << std::endl;
	std::cout << (*pA).x << "\t" << (*pA).y << std::endl;
#endif;
	Point A;
	//A.set_x(2);
	//A.set_y(4);
	std::cout << A.get_x() << "\t" << A.get_y() << std::endl;
	Point B(4, 5);
	B.print();
}