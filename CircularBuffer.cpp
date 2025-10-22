#include <iostream>

using namespace std;

class MyCircularQueue {

private:
    int* arr;
    int capacity;
    int size;
    int front;
    int back;

public:
    MyCircularQueue(int capacity = 5) : capacity(capacity) {
        arr = new int[capacity];
        size = 0;
        front = 0;
        back = 0;
    }
    
    ~MyCircularQueue()
    {

    }

    bool enQueue(int a) {
        if (size != capacity)
        {
            arr[back] = a;
            size++;
            back = (back + 1) % capacity;
            return true;
        }
        return false;
    }

    bool deQueue() {
        int temp;
        if (size != 0) {
            size--;
            front = (front + 1) % capacity;
            return true;
        }
        return false;
    }

    int Front()
    {

    }
    
    int Rear()
    {

    }
    
    bool isEmpty()
    {

    }

    bool isFull()
    {

    }

};

//RULE OF THREEEEE

int main()
{
    std::cout << "Hello World!";
    return 0;
}
