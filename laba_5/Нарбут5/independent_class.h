#pragma once
#include<string>
using namespace std;
/**
* \brief ����������� ����� � ������.
*/
class independent_class {
public:
	string message;
	/**
	* \brief ����������� � �����������.
	*/
	explicit independent_class(string message);
	/**
	* \brief ���������� �� ���������
	*/
	~independent_class();
};