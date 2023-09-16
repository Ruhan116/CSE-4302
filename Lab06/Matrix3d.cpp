#include "Matrix3d.h"
#include <iostream>

using namespace std;

double Matrix3d::det()
{
    return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
}

Matrix3d Matrix3d::inverse()
{
    Matrix3d temp;

    double invDet = 1.0/det();

    temp.matrix[0][0] = (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) * invDet;
    temp.matrix[0][1] = (matrix[0][2] * matrix[2][1] - matrix[0][1] * matrix[2][2]) * invDet;
    temp.matrix[0][2] = (matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1]) * invDet;
    temp.matrix[1][0] = (matrix[1][2] * matrix[2][0] - matrix[1][0] * matrix[2][2]) * invDet;
    temp.matrix[1][1] = (matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0]) * invDet;
    temp.matrix[1][2] = (matrix[0][2] * matrix[1][0] - matrix[0][0] * matrix[1][2]) * invDet;
    temp.matrix[2][0] = (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]) * invDet;
    temp.matrix[2][1] = (matrix[0][1] * matrix[2][0] - matrix[0][0] * matrix[2][1]) * invDet;
    temp.matrix[2][2] = (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]) * invDet;

    return temp;
}


Matrix3d Matrix3d::operator+(Matrix3d m)
{
    Matrix3d temp;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp.matrix[i][j] = matrix[i][j] + m.matrix[i][j];
        }
    }
    return temp;
}

Matrix3d Matrix3d::operator-(Matrix3d m)
{
    Matrix3d temp;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp.matrix[i][j] = matrix[i][j] - m.matrix[i][j];
        }
    }
    return temp;
}

Matrix3d Matrix3d::operator*(Matrix3d m) {
    int result[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0.0;
            for (int k = 0; k < 3; ++k) {
                result[i][j] += matrix[i][k] * m.matrix[k][j];
            }
        }
    }
    return Matrix3d(result);
}

void Matrix3d::printMatrix()
{
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
