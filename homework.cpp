#include <iostream>
using namespace std;


class Matrix {
    public:

    matrix(int n , int m) : n_size(n) , m_size(m){
        ptr = new int* [n];
        for(int i = 0; i < n ; i++){
            ptr[i] = new int [m];
        }
    }
    ~matrix(){
        for(int i = 0 ; i < n ; i++){
            delete[] ptr[i];
        }
        delete[] ptr;
    }
    void input_arr(){
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cin >> ptr[i][j];
            }
        }
    }
    void output_arr()const{
    for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cout << ptr[i][j] << " ";
            }
        cout << endl;
    }
    private:
    int** ptr;
    int n_size;
    int m_size;
};

int main(){
    Matrix M(3,3);
    M.input_arr();
    M.output_arr();
  return 0;
}