#include "Vector.h"
#include "Matrix.h"
#include <iostream>
#include <cstdlib>

int main()
{
	std::cout << "Task 1" << std::endl;
	Matrix A(true);
	Matrix B(true);
	Matrix Y(true);
	system("PAUSE");
	system("CLS");
	std::cout << "A: " << std::endl;
	A.solveFor(B.VectorForm(Direction::Column, 0)).show();
	system("PAUSE");
	system("CLS");
	std::cout << "B: " << std::endl;
	(A.transpose()*A*A*A).solveFor(B.VectorForm(Direction::Column, 0)).show();
	system("PAUSE");
	system("CLS");
	std::cout << "C: " << std::endl;
	(Y.transpose() * A * A.transpose() * A * A * Y).show();
	system("PAUSE");
	system("CLS");
	//--------------------------
	std::cout << "Task 2" << std::endl;
	Matrix X(true);
	Y=Matrix(true);
	system("PAUSE");
	system("CLS");
	std::cout <<"The result is:\n"<< (X.sum() * 2 + (X * Y.transpose()).sum()) * (2 - X.sum()) + 3 + (X * X.transpose()).sum()<<std::endl;;
	
}