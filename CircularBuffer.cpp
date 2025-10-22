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
        delete[] arr;
        size = 0;
        front = 0;
        back = 0;
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
        if (size != 0) {
            size--;
            front = (front + 1) % capacity;
            return true;
        }
        return false;
    }

    int Front()
    {
        if (isEmpty())return -1;
        return arr[front];
    }
    
    int Rear()
    {
        if (isEmpty())return -1;
        if (back == 0) return arr[capacity - 1];
        return arr[back-1];
    }
    
    bool isEmpty()
    {
        if (size == 0) return true;
        return false;
    }

    bool isFull()
    {
        if (size == capacity) return true;
        return false;
    }

};
