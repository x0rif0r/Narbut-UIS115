#pragma once
#include<iostream>
#include<exception>
#include "Empty_class.h"
#include "independent_class.h"
#include "successor_class.h"

/**
* \brief Функция считающая периметр треугольника.
* \return a + b + c
*/
double triangle_perimeter(double a, double b, double c);
/**
* \brief Функция считающая периметр треугольника, спецификатор throw()
* \return triangle_perimeter
*/
double triangle_perimeter2(double a, double b, double c);
/**
* \brief Функция считающая периметр треугольника, с конкретной спецификацией с подходящим стандартным исключением
* \return triangle_perimeter
*/
double triangle_perimeter3(double a, double b, double c);
/**
* \brief Функция считающая периметр треугольника, со спецификацией с собственным реализованным исключением. (исключение как пустой класс)
* \return triangle_perimeter
*/
double triangle_perimeter4(double a, double b, double c);
/**
* \brief Функция считающая периметр треугольника, со спецификацией с собственным реализованным исключением. (исключение как независимый класс с полями-параметрами функции)
* \return triangle_perimeter
*/
double triangle_perimeter5(double a, double b, double c);
/**
* \brief Функция считающая периметр треугольника, со спецификацией с собственным реализованным исключением. (исключение как наследник от стандартного исключения с полями)
* \return triangle_perimeter
*/
double triangle_perimeter6(double a, double b, double c);

