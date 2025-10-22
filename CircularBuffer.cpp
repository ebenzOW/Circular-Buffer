#include <iostream>

using namespace std;

class CircularBuffer {
    
    private:
        int* arr;
        int capacity;
        int size_;
        int front;
        int back;
        
    public:
        CircularBuffer cirbuf (int capacity = 5) : capacity(capacity)  {
            arr = new int[capacity];
            size_ = 0;
            front = 0;
            back = 0;
        }
        
        void push_back (int a) {
            arr[size_] = a;
            size++;
            back++;
        }
        
        int pop_front () {
            front++;
            size--;
        }

};

int main()
{
    std::cout << "Hello World!";
    return 0;
}
