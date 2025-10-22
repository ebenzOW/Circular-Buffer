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
            back = (back + 1) % capacity;
        }
    }

    int pop_front() {
        int temp;
        if (size != 0) {
            size--;
            temp = arr[front];

            front = (front + 1) % capacity;
        }
        return temp;
    }

};

//RULE OF THREEEEE

int main()
{
    std::cout << "Hello World!";
    return 0;
}
