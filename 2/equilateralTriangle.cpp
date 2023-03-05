#include "equilateralTriangle.h"
equilateralTriangle::equilateralTriangle(int side_a,int side_b, int side_c, int angle_A, int angle_B, int angle_C): Triangle(side_a, side_a, side_a, angle_A, angle_A, angle_A){
    errEquilateralTriangle(side_a, side_b, side_c, angle_A, angle_B, angle_C);
}


