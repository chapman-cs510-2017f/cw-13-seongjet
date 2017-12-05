#include <iostream>
#include "../src/matrix/matrix.h"
#include <string>

int main() {
    //unsigned int i, j;
    long double scalar=123.45;
    // Define two 10x10 matrices with element types of long double
    // The first has all elements set to 1.0
    Matrix<long double> mat1(10, 10, 1.0);
    // The second has all elements set to 2.0
    Matrix<long double> mat2(10, 10, 2.0);
    std::string filename="mat.txt";
  
    // Print out the first matrix by print();
    std::cout <<"Print first matrix"<<std::endl;
    mat1.print();
    
    // Set a few elements differently as a test of accessors
    mat1(3,4) = 10.0;
    mat2(1,2) = -15.0;
  
    // Define a third matrix as the sum of the first two
    Matrix<long double> mat3 = mat1 + mat2;
  
    // Print out the third matrix as a text array
    std::cout <<"Print third matrix (additon b/w matrices)"<<std::endl;
    mat3.print();
    
    // Print out the result of adding a scalar to a matix
    std::cout <<"Print result of adding a scalar to a matix"<<std::endl;
    mat3=mat3+scalar;
    mat3.print();

    // save matrix to a file
    std::cout <<"Now saving matrix to a file"<<std::endl;
    mat3.save(filename);
  
    return 0;
}
