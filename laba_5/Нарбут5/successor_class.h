#pragma once
#include<exception>
#include<iostream>
using namespace std;
/**
* \brief  Класс насследник от стандартного исключения.
*/
class successor_class :public invalid_argument {
public:
	/**
	* \brief Конструктор с параметрами.
	*/
	explicit successor_class(string message);

	/**
	* \brief деструктор по умолчанию
	*/
	~successor_class();
};