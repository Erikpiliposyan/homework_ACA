#include <iostream>

class Matrix {
private:
  int rows;
  int cols;
  int** ptr;

public:
  Matrix(int n, int m) : rows(n), cols(m) {
    ptr = new int*[rows];
    for (int i = 0; i < rows; i++) {
      ptr[i] = new int[cols];
    }
  }

  Matrix(const Matrix& other) 
  : rows(other.rows)
  , cols(other.cols) 
  {
    ptr = new int*[rows];
    for (int i = 0; i < rows; i++) {
      ptr[i] = new int[cols];
      for (int j = 0; j < cols; j++) {
        ptr[i][j] = other.ptr[i][j];
      }
    }
  }

 
  Matrix& operator=(const Matrix& other) {
    if (this != &other) {
      for (int i = 0; i < rows; i++) {
        delete[] ptr[i];
      }
      delete[] ptr;

      rows = other.rows;
      cols = other.cols;
      ptr = new int*[rows];
      for (int i = 0; i < rows; i++) {
        ptr[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
          ptr[i][j] = other.ptr[i][j];
        }
      }
    }
    return *this;
  }

  ~Matrix() {
    for (int i = 0; i < rows; i++) {
      delete[] ptr[i];
    }
    delete[] ptr;
  }

  void input_arr() {
    std::cout << "Enter matrix values:" << std::endl;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        std::cin >> ptr[i][j];
      }
    }
  }

  void output_arr() const {
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        std::cout << ptr[i][j] << " ";
      }
      std::cout << std::endl;
    }
  }
};

int main() {
  int n, m;
  std::cin >> n;
  std::cin >> m;
  if (n >= 0 && m >= 0) {
    Matrix matrix(n, m);
    matrix.input_arr();
    matrix.output_arr();

   
    Matrix matrixCopy(matrix);
    std::cout << "Copied matrix:" << std::endl;
    matrixCopy.output_arr();

    Matrix matrixAssign(0, 0);
    matrixAssign = matrix;
    std::cout << "Assigned matrix:" << std::endl;
    matrixAssign.output_arr();
  } else {
    std::cout << "Negative numbers, please change." << std::endl;
  }

  return 0;
}
