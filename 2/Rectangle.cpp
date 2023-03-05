#include "Rectangle.h"
Rectangle::Rectangle(int side_a, int side_b,int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D): Parallelogram(side_a, side_b, side_a, side_b, angle_A, angle_A, angle_A, angle_A){
    errRectangle(side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D);
}


