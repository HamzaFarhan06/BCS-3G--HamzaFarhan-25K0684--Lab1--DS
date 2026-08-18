#include <iostream>
using namespace std;

class DataArchive {
private:
    int number;
    int* arr;

public:
    
    DataArchive(int n) {
        number = n;
        arr = new int[number]{}; 
    }

  
    ~DataArchive() {
        delete[] arr; 
    }

    
    DataArchive(const DataArchive &object) {
        number = object.number;
        arr = new int[number];
        for (int i = 0; i < number; i++) {
            arr[i] = object.arr[i];
        }
    }

    
    DataArchive &operator=(const DataArchive &object) {
        
        delete[] arr;

        number = object.number;
        arr = new int[number];
        for (int i = 0; i < number; i++) {
            arr[i] = object.arr[i];
        }

        return *this;
    }

};

int main() {
    
}