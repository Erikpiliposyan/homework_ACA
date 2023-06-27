#include <iostream>

class Array{

public:
    Array(int* ptr , int size)
        :ptr(ptr)
        ,size(size){}
    
    ~Array(){

        delete[] ptr;
    }
    
    Array(const Array& other)
        :size(other.size)
    {
        ptr = new int [size];
        for(int i = 0 ; i < size ; i++){
            ptr[i] = other.ptr[i];
        }
    }

    Array& operator=(const Array& other){
        if(this == &other){
            return *this;
        }

        delete[] ptr;
        ptr = new int [other.size];
        size = other.size;
        for(int i = 0 ; i < size; i++)
        {
            ptr[i] = other.ptr[i];
        }

        return *this;
    }
     int& operator[](int index) {
        return ptr[index];
    }
    int gen_element(int);
private:
    int* ptr;
    int size;
};
