#pragma once

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


class ThreeDimensionalMatrix {
private:

    int* vector;
    
    int n;
    int m;
    int p;


public:
    ThreeDimensionalMatrix(int*** matrix3D, int n, int m, int p);
    int size();
    int convertIndex(int i, int j, int k);
    int at(int i, int j, int k);
    void print3DMatrix();
    ~ThreeDimensionalMatrix();
};