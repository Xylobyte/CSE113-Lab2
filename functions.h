/**
 * @file functions.h
 *
 * @author Donovan Griego
 *
 * @date September 14, 2020
 *
 * Assignment: Lab 2
 *
 * @brief header file for functions.c
 *
 * @details see functions.c for details
 *
 * @bugs none
 *
 * @todo none
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>

/* Function prototyes go here */
int area_rectangle(int height, int width);
int perimeter_rectangle(int height, int width);
double diagonal_rectangle(int height, int width);
double area_circle(float radius);
double circumference(float radius);
double area_triangle(float height, float base);
double hypotenuse(float height, float base);
double perimeter_triangle(float height, float base);
double exterior_angle(int sides);
double interior_angle(int sides);
double area_regular_polygon(int sides, float length);

#endif
