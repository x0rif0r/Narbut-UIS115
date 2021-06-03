#pragma once
#include<string>
using namespace std;
/**
* \brief Независимый класс с полями.
*/
class independent_class {
public:
	string message;
	/**
	* \brief Конструктор с параметрами.
	*/
	explicit independent_class(string message);
	/**
	* \brief Деструктор по умолчанию
	*/
	~independent_class();
};