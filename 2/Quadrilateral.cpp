#include "Quadrilateral.h"
Quadrilateral::Quadrilateral(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D):a(side_a), b(side_b), c(side_c), d(side_d), A(angle_A), B(angle_B), C(angle_C), D(angle_D){
    errQuadrilateral(side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D);
}

void Quadrilateral::calc_print() const{
    cout << "Стороны: " << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << endl;
    cout << "Углы: " << "A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << endl;
}


