#include "Square.h"
Square::Square(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D): Rectangle(side_a, side_a, side_a, side_a, angle_A, angle_A, angle_A, angle_A ){
    errSquare(side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D);
}
