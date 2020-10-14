/**
 * @file functions.c
 *
 * @author Donovan Griego
 *
 * @date September 14, 2020
 *
 * Assignment: Lab 2
 *
 * @brief contains the function definitions for lab 2
 *
 * @details Copy your functions (not the main function) from lab 1 into this file
 * so that you use them for lab 2
 *
 * @bugs none
 *
 * @todo Add the functions from lab 1
 */

#include "functions.h"
#include <stdio.h>
#include <math.h>

/**
 * Calculates the area of a rectangle
 * @param height the height of the rectangle
 * @param width the width of the rectangle
 * @return the area of the rectangle
 **/
int area_rectangle(int height, int width)
{
    return height * width;
}

/**
 * Calculates the perimeter of a rectangle
 * @param height the height of the rectangle
 * @param width the width of the rectangle
 * @return the perimeter of the rectangle
 **/
int perimeter_rectangle(int height, int width)
{
    return (2 * height) + (2 * width);
}

/**
 * Calculates the diagonal of a rectangle
 * @param height the height of the rectangle
 * @param width the width of the rectangle
 * @return the diagonal of the rectangle
 **/
double diagonal_rectangle(int height, int width)
{
    return sqrt(pow(height, 2) + pow(width, 2));
}

/**
 * Calculates the area of a circle
 * @param radius the radius of the circle
 * @return the area of the circle
 **/
double area_circle(float radius)
{
    return (M_PI * pow(radius, 2));
}

/**
 * Calculates the circumference of a circle
 * @param radius the radius of the circle
 * @return the circumference of the circle
 **/
double circumference(float radius)
{
    return (2 * M_PI * radius);
}

/**
 * Calculates the area of a triangle
 * @param height the height of the triangle
 * @param base the width of the base of the triangle
 * @return the area of the triangle
 **/
double area_triangle(float height, float base)
{
    return ((height * base) / 2);
}

/**
 * Calculates the hypotenuse of a triangle
 * @param height the height of the triangle
 * @param base the width of the base of the triangle
 * @return the hypotenuse of the triangle
 **/
double hypotenuse(float height, float base)
{
    return sqrt(pow(height, 2) + pow(base, 2));
}

/**
 * Calculates the perimeter of a triangle
 * @param height the height of the triangle
 * @param base the width of the base of the triangle
 * @return the perimeter of the triangle
 **/
double perimeter_triangle(float height, float base)
{
    return (height + base + hypotenuse(height, base));
}

/**
 * Calculates the exterior angle of a polygon
 * @param sides the number of sides of the polygon
 * @return the exterior angle of the polygon
 **/
double exterior_angle(int sides)
{
    return (360 / sides);
}

/**
 * Calculates the interior angle of a polygon
 * @param sides the number of sides of the polygon
 * @return the interior angle of the polygon
 **/
double interior_angle(int sides)
{
    return (((sides - 2) * 180) / sides);
}

/**
 * Calculates the area of a polygon
 * @param sides the number of sides of the polygon
 * @param length the length of a side of the polygon
 * @return the area of the polygon
 **/
double area_regular_polygon(int sides, float length)
{
    return ((pow(length, 2) * sides) / (4 * tan(M_PI / sides)));
}
