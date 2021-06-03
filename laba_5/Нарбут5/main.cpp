#include "Triangle_perimeter.h"
using namespace std;

int main()
{
	try
	{
		triangle_perimeter(3, 4, 5);
		triangle_perimeter2(3, 0, 5);
		triangle_perimeter3(3, 4, -500);
		triangle_perimeter4(-5, 4, 5);
		triangle_perimeter5(3, 4, 0);
		triangle_perimeter6(-10, 4, 5);
	}
	catch (int) 
	{
		cout << "Error! Sides less/equal than zero, throw specifier" << endl;
	}
	catch (invalid_argument error) 
	{
		cerr << error.what() << endl;
	}
	catch (empty_class) {
		cerr << "Error! Sides less/equal than zero, empty class" << endl;
	}
	catch (independent_class error) 
	{
		cerr << error.message << endl;
	}
	catch (successor_class error) 
	{
		cerr << error.what() << endl;
	}
}
