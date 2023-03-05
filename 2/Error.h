#pragma once
#include <string>
#include <exception>
#include <iostream>
using namespace std;
class Exception {

public:
    Exception(const string&);
    ~Exception();

    string getMessage() const;
private:
    string msg_;
};

void errEquilateralTriangle(int, int, int, int, int, int);
void errIsosceleesTriangle(int, int, int, int);
void errParallelogram(int, int, int, int,  int, int, int, int);
void errPhombus(int, int, int, int,  int, int, int, int);
void errQuadrilateral(int, int, int, int, int, int, int, int);
void errRectangle(int, int, int, int, int, int, int, int);
void errRightTriangle(int);
void errSquare(int, int ,int, int, int, int, int, int);
void errTriangle(int, int, int, int, int, int);