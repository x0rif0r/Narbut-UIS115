#pragma once
#include<exception>
#include<iostream>
using namespace std;
/**
* \brief  ����� ���������� �� ������������ ����������.
*/
class successor_class :public invalid_argument {
public:
	/**
	* \brief ����������� � �����������.
	*/
	explicit successor_class(string message);

	/**
	* \brief ���������� �� ���������
	*/
	~successor_class();
};