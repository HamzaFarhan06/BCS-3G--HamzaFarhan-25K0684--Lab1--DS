#include <iostream>

class LogBuffer {
private:
    char* buffer;
    int length;

public:
   
    LogBuffer(int size) {
        length = size;
        buffer = new char[length]{}; 
    }

    
    ~LogBuffer() {
        delete[] buffer;
    }

   
    LogBuffer(const LogBuffer& other) {
        length = other.length;
        buffer = new char[length];
        for (int i = 0; i < length; i++) {
            buffer[i] = object.buffer[i];
        }
    }

    
    LogBuffer& operator=(const LogBuffer& other) {
        
        delete[] buffer;

        length = other.length;
        buffer = new char[length];
        for (int i = 0; i < length; i++) {
            buffer[i] = object.buffer[i];
        }

        return *this;
    }
};