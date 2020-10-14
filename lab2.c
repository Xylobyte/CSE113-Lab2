/**
 * @file lab2.c
 *
 * @author Donovan Griego
 *
 * @date September 14, 2020
 *
 * Assignment: Lab 2
 *
 * @brief A program that uses the function in functions.c
 *
 * @details
 *
 * @bugs none
 *
 * @todo none
 */

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>


int main(void) {
        int width_rect;
        int height_rect;
        float radius;
        float height_tri;
        float base;
        int sides = 8;
        float side_length = 5;
        int cont = 1;
        int tmp;
        int in;

        while(cont)
        {
                printf("Please select a geometry calculation:\n");
                printf("C. Circles\n");
                printf("P. Regular Polygons\n");
                printf("R. Rectangles\n");
                printf("T. Right Triangles\n\n");
                printf("Please enter your choice (C, P, R, T): ");
                while ((tmp = getchar()) != '\n')
                        in = tmp;

                switch(in)
                {
                        case 'C':
                        case 'c':
                                printf("A. Area of a circle\n");
                                printf("C. Circumference of a circle\n");
                                printf("Please enter your choice (A, C): ");
                                while ((tmp = getchar()) != '\n')
                                        in = tmp;
                                switch(in)
                                {
                                        case 'A':
                                        case 'a':
                                                printf("Enter the radius of the circle as a floating point number: ");
                                                scanf("%f", &radius);
                                                if (radius >= 0)
                                                {
                                                        printf("The area of a circle with radius %f is %lf\n", radius, area_circle(radius));
                                                } else
                                                {
                                                        printf("Error: Radius must be greater or equal to zero!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                break;
                                        case 'C':
                                        case 'c':
                                                printf("Enter the radius of the circle as a floating point number: ");
                                                scanf("%f", &radius);
                                                if (radius >= 0)
                                                {
                                                        printf("The circumference of a circle with radius %f is %lf\n\n", radius, circumference(radius));
                                                } else
                                                {
                                                        printf("Error: Radius must be greater or equal to zero!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                break;
                                        default:
                                                printf("Error: That is not a valid choice!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                }
                                break;
                        case 'P':
                        case 'p':
                                printf("E. Exterior angle of a regular polygon\n");
                                printf("I. Interior angle of a regular polygon\n");
                                printf("A. Area of a regular polygon\n");
                                printf("Please enter your choice (E, I, A): ");
                                while ((tmp = getchar()) != '\n')
                                        in = tmp;
                                switch(in)
                                {
                                        case 'E':
                                        case 'e':
                                                printf("Enter the number of sides of a regular polygon as an integer: ");
                                                scanf("%d", &sides);
                                                if (sides < 3)
                                                {
                                                        printf("Error: Number of sides must be at least 3!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                printf("Enter the length of a the side of a regular polygon as a floating point number: ");
                                                scanf("%f", &side_length);
                                                if (side_length > 0)
                                                {
                                                        printf("The exterior angle of a regular polygon with %d sides is %lf degrees.\n", sides, exterior_angle(sides));
                                                } else
                                                {
                                                        printf("Error: Side length must be larger than 0!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                break;
                                        case 'I':
                                        case 'i':
                                                printf("Enter the number of sides of a regular polygon as an integer: ");
                                                scanf("%d", &sides);
                                                if (sides < 3)
                                                {
                                                        printf("Error: Number of sides must be at least 3!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                printf("Enter the length of a the side of a regular polygon as a floating point number: ");
                                                scanf("%f", &side_length);
                                                if (side_length > 0)
                                                {
                                                        printf("The interior angle of a regular polygon with %d sides is %lf degrees.\n", sides, interior_angle(sides));
                                                } else
                                                {
                                                        printf("Error: Side length must be larger than 0!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                break;
                                        case 'A':
                                        case 'a':
                                                printf("Enter the number of sides of a regular polygon as an integer: ");
                                                scanf("%d", &sides);
                                                if (sides < 3)
                                                {
                                                        printf("Error: Number of sides must be at least 3!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                printf("Enter the length of a the side of a regular polygon as a floating point number: ");
                                                scanf("%f", &side_length);
                                                if (side_length > 0)
                                                {
                                                        printf("The area of a regular polygon with %d sides, each %f long is %lf\n", sides, side_length, area_regular_polygon(sides, side_length));
                                                } else
                                                {
                                                        printf("Error: Side length must be larger than 0!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                break;
                                        default:
                                                printf("Error: That is not a valid choice!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                }
                                break;
                        case 'R':
                        case 'r':
                                printf("A. Area of a rectangle\n");
                                printf("P. Perimeter of a rectangle\n");
                                printf("D. Length of the diagonal of a rectangle\n");
                                printf("Please enter your choice (A, P, D): ");
                                while ((tmp = getchar()) != '\n')
                                        in = tmp;
                                switch(in)
                                {
                                        case 'A':
                                        case 'a':
                                                printf("Enter the height of a rectangle as a whole (integer) number: ");
                                                scanf("%d", &height_rect);
                                                if(height_rect <=0)
                                                {
                                                        printf("Error: Height must be larger than zero!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                printf("Enter the width of a rectangle as a whole (integer) number: ");
                                                scanf("%d", &width_rect);
                                                if(width_rect > 0)
                                                {
                                                        printf("The area of a rectangle with height %d and width %d is %d\n", height_rect, width_rect, area_rectangle(height_rect, width_rect));
                                                } else
                                                {
                                                        printf("Error: Width must be larger than zero!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                break;
                                        case 'P':
                                        case 'p':
                                                printf("Enter the height of a rectangle as a whole (integer) number: ");
                                                scanf("%d", &height_rect);
                                                if(height_rect <=0)
                                                {
                                                        printf("Error: Height must be larger than zero!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                printf("Enter the width of a rectangle as a whole (integer) number: ");
                                                scanf("%d", &width_rect);
                                                if(width_rect > 0)
                                                {
                                                        printf("The perimeter of a rectangle with height %d and width %d is %d\n", height_rect, width_rect, perimeter_rectangle(height_rect, width_rect));
                                                } else
                                                {
                                                        printf("Error: Width must be larger than zero!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                break;
                                        case 'D':
                                        case 'd':
                                                printf("Enter the height of a rectangle as a whole (integer) number: ");
                                                scanf("%d", &height_rect);
                                                if(height_rect <=0)
                                                {
                                                        printf("Error: Height must be larger than zero!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                printf("Enter the width of a rectangle as a whole (integer) number: ");
                                                scanf("%d", &width_rect);
                                                if(width_rect > 0)
                                                {
                                                        printf("The length of the diagonal of a rectangle with height %d and width %d is %lf\n\n", height_rect, width_rect, diagonal_rectangle(height_rect, width_rect));
                                                } else
                                                {
                                                        printf("Error: Width must be larger than zero!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                break;
                                        default:
                                                printf("Error: That is not a valid choice!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                }
                                break;
                        case 'T':
                        case 't':
                                printf("A. Area of a right triangle\n");
                                printf("P. Perimeter of a right triangle\n");
                                printf("Please enter your choice (A, P): ");
                                while ((tmp = getchar()) != '\n')
                                        in = tmp;
                                switch(in)
                                {
                                        case 'A':
                                        case 'a':
                                                printf("Enter the height of a right triangle as a floating point number: ");
                                                scanf("%f", &height_tri);
                                                if(height_tri <=0)
                                                {
                                                        printf("Error: Height must be larger than zero!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                printf("Enter the base of a right triangle as a floating point number: ");
                                                scanf("%f", &base);
                                                if(base > 0)
                                                {
                                                        printf("The area of a triangle with height %f and base %f is %lf\n", height_tri, base, area_triangle(height_tri, base));
                                                } else
                                                {
                                                        printf("Error: Base must be larger than zero!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                break;
                                        case 'P':
                                        case 'p':
                                                printf("Enter the height of a right triangle as a floating point number: ");
                                                scanf("%f", &height_tri);
                                                if(height_tri <=0)
                                                {
                                                        printf("Error: Height must be larger than zero!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                printf("Enter the base of a right triangle as a floating point number: ");
                                                scanf("%f", &base);
                                                if(base > 0)
                                                {
                                                        printf("The perimeter of a triangle with height %f and base %f is %lf\n\n", height_tri, base, perimeter_triangle(height_tri, base));
                                                } else
                                                {
                                                        printf("Error: Base must be larger than zero!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                                }
                                                break;
                                        default:
                                                printf("Error: That is not a valid choice!\n");
                                                        printf("Goodbye.\n");
                                                        exit(1);
                                }
                                break;
                        default:
                                printf("Error: That is not a valid choice!\n");
                                printf("Goodbye.\n");
                                exit(1);
                }

                printf("Would you like to continue? (Y/N) ");
                tmp = getchar();
                while ((tmp = getchar()) != '\n')
                        cont = tmp;
                
                switch(cont)
                {
                        case 'Y':
                        case 'y':
                                cont = 1;
                                break;
                        case 'N':
                        case 'n':
                                cont = 0;
                                break;
                        default:
                                printf("Error: That is not a valid choice!\n");
                                printf("Goodbye!\n");
                                exit(1);
                }

        }
        return 0;
}
