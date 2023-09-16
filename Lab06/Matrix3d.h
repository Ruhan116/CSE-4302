#pragma once
class Matrix3d
{
private:
	float matrix[3][3];
public:
	Matrix3d(){
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				matrix[i][j] = 0;
			}
		}
	}
	Matrix3d(int m[3][3]) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				matrix[i][j] = m[i][j];
			}
		}
	}
	
	double det();
	Matrix3d inverse();

	Matrix3d operator+(Matrix3d m);
	Matrix3d operator-(Matrix3d m);
	Matrix3d operator*(Matrix3d m);
	void printMatrix();

};

