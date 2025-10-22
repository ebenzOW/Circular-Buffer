#include <iostream>

using namespace std;

class CircularBuffer {

private:
    int* arr;
    int capacity;
    int size;
    int front;
    int back;

public:
    CircularBuffer(int capacity = 5) : capacity(capacity) {
        arr = new int[capacity];
        size = 0;
        front = 0;
        back = 0;
    }

    void push_back(int a) {
        if (size != capacity)
        {
            arr[back] = a;
            size++;
            back++;
            if (back == capacity - 1) back = 0;
        }
    }

    int pop_front() {
        if (size != 0) {
            front++;
            size--;
            if (front == capacity - 1) front = 0;
        }
    }

};

int main()
{
    std::cout << "Hello World!";
    return 0;
}
