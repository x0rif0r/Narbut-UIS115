#pragma once
#include<iostream>
#include<exception>
#include "Empty_class.h"
#include "independent_class.h"
#include "successor_class.h"

/**
* \brief ������� ��������� �������� ������������.
* \return a + b + c
*/
double triangle_perimeter(double a, double b, double c);
/**
* \brief ������� ��������� �������� ������������, ������������ throw()
* \return triangle_perimeter
*/
double triangle_perimeter2(double a, double b, double c);
/**
* \brief ������� ��������� �������� ������������, � ���������� ������������� � ���������� ����������� �����������
* \return triangle_perimeter
*/
double triangle_perimeter3(double a, double b, double c);
/**
* \brief ������� ��������� �������� ������������, �� ������������� � ����������� ������������� �����������. (���������� ��� ������ �����)
* \return triangle_perimeter
*/
double triangle_perimeter4(double a, double b, double c);
/**
* \brief ������� ��������� �������� ������������, �� ������������� � ����������� ������������� �����������. (���������� ��� ����������� ����� � ������-����������� �������)
* \return triangle_perimeter
*/
double triangle_perimeter5(double a, double b, double c);
/**
* \brief ������� ��������� �������� ������������, �� ������������� � ����������� ������������� �����������. (���������� ��� ��������� �� ������������ ���������� � ������)
* \return triangle_perimeter
*/
double triangle_perimeter6(double a, double b, double c);

