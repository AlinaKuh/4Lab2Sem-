#include "Vector.h"
#include "Matrix.h"

void whitespace()
{
  std::cout << "\n\n\n----------------------------------\n\n\n\n";
}

int main()
{
  TVector<int> vect1;
  TVector<int> vect2(5, 2);
  TVector<int> vect3(vect2);
  vect1.Resize(5);
  std::cin >> vect2;
  for (int i = 0; i < vect1.GetLength(); i++)
	vect1[i] = rand() % 50 + 10;
  whitespace();

  vect3 = vect1 + vect2;
  std::cout << "vect3 = vect1 + vect2 =\n" << vect1 << "+  " << vect2 << "=  " << vect3 << "\n";
  whitespace();
  vect3 = vect1 - vect2;
  std::cout << "vect3 = vect1 - vect2 =\n" << vect1 << "-  " << vect2 << "=  " << vect3 << "\n";
  whitespace();
  vect1 = vect2 * vect3;
  std::cout << "vect1 = vect2 * vect3 =\n" << vect2 << "*  " << vect3 << "=  " << vect1 << "\n";
  whitespace();
  vect3 = vect1 / vect2;
  std::cout << "vect3 = vect1 / vect2 =\n" << vect1 << "/  " << vect2 << "=  " << vect3 << "\n";
  whitespace();

  TMatrix<int> Matrix1;
  TMatrix<int> Matrix2(2, 3);
  TMatrix<int> Matrix3(Matrix2);
  TMatrix<int> Matrix4(4, 5);
  int** indexes;
  std::cin >> Matrix2;
  std::cout << Matrix2;
  whitespace();

  for (int i = 0; i < Matrix3.GetWidth(); i++)
	for (int j = 0; j < Matrix3.GetLength(); j++)
	  Matrix3[i][j] = rand();
  std::cout << "Matrix3 = \n" << Matrix3;
  whitespace();

  Matrix1 = Matrix2 + Matrix3;
  std::cout << "Matrix1 = Matrix2 + Matrix3 =\n"
	<< Matrix2 << "\n + \n\n" << Matrix3 << "\n = \n\n" << Matrix1 << "\n";
  whitespace();

  Matrix2 = Matrix3 - Matrix1;
  std::cout << "Matrix2 = Matrix3 - Matrix1 =\n"
	<< Matrix3 << "\n - \n\n" << Matrix1 << "\n = \n\n" << Matrix2 << "\n";
  whitespace();

  Matrix1.Resize(2, 2);
  Matrix2.Resize(2, 2);
  Matrix3.Resize(2, 2);
  Matrix3 = Matrix2 * Matrix1;
  std::cout << "Matrix3 = Matrix2 * Matrix1 =\n"
	<< Matrix2 << "\n * \n\n" << Matrix1 << "\n = \n\n" << Matrix3 << "\n";
  whitespace();
  
  for (int i = 0; i < Matrix4.GetWidth(); i++)
	for (int j = 0; j < Matrix4.GetLength(); j++)
	  Matrix4[i][j] = rand() % 50;
  vect1 = Matrix4 * vect2;
  std::cout << "vect1 = Matrix4 * vect2 = \n" << Matrix4 << "\n *\n\n" << vect2 << "\n\n =\n\n" << vect1;
  whitespace();

  
  vect1.QuickSort();
  std::cout << "vect1 = " << vect1;
  whitespace();

  TMatrix<int> Matrix5(vect2.GetLength(), Matrix4.GetLength());
  Matrix4.Resize(1, Matrix4.GetLength());
  Matrix5 = vector2 * Matrix4;
  std::cout << "Matrix5 = vect2 * Matrix4 = \n" << vect2 << "\n *\n\n" << Matrix4
	<< "\n\n = \n\n" << Matrix5;
  whitespace();

  return 0;
}
