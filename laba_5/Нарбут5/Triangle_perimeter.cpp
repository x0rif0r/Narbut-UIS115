#include "Triangle_perimeter.h"

double triangle_perimeter(double a, double b, double c)
{
	return a + b + c;
}
double triangle_perimeter2(double a, double b, double c)
{
	if (a > 0 && b > 0 && c > 0)
	{
		return triangle_perimeter(a, b, c);
	}
	else
	{
		throw 1;
	}
}
double triangle_perimeter3(double a, double b, double c)
{
	if (a > 0 && b > 0 && c > 0)
	{
		return triangle_perimeter(a, b, c);
	}
	else
	{
		throw invalid_argument{ "Error! Sides less/equal than zero, standard exception" };
	}
}
double triangle_perimeter4(double a, double b, double c)
{
	if (a > 0 && b > 0 && c > 0)
	{
		return triangle_perimeter(a, b, c);
	}
	else
	{
		throw empty_class();;
	}
}
double triangle_perimeter5(double a, double b, double c)
{
	if (a > 0 && b > 0 && c > 0)
	{
		return triangle_perimeter(a, b, c);
	}
	else
	{
		throw independent_class("Error! Sides less/equal than zero, independent class with function parameter fields");
	}
}
double triangle_perimeter6(double a, double b, double c)
{
	if (a > 0 && b > 0 && c > 0)
	{
		return triangle_perimeter(a, b, c);
	}
	else
	{
		throw successor_class("Error! Sides less/equal than zero, successor class");
	}
}