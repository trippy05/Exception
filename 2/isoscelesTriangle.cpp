#include "isoscelesTriangle.h"
isoscelesTriangle::isoscelesTriangle(int side_a, int side_b, int side_c,int angle_A, int angle_B, int angle_C): Triangle(side_c, side_b, side_c, angle_C, angle_B, angle_C){
    errIsosceleesTriangle(side_a, side_c, angle_A, angle_C);
}

