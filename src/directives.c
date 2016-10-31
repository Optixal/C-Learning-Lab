#include <stdio.h>
#define PI 3.14159
#define ADD(a,b) (a+b)
/* Directives start with a # sign.
 * They control the preprocessor.
 *
 * PI is not a variable, it is text
 * that will be substituted by the 
 * preprocessor. So why can't we
 * just declare a float called pi?
 * Using directives will save memory. */

void main() {
    float rad = 3;
    float circ = rad * 2 * PI;
    float area = rad * rad * PI;
    printf("The circumference of a circle radius %f is %f\n", rad, circ);
    printf("The area of a circle radius %f is %f\n", rad, area);
    printf("The area of 2 circles of radius %f is %f\n", rad, ADD(area,area));
}
