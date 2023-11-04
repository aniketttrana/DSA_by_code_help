
#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr; // we make an array pointer in which point in heap memory
    int top1;
    int top2;
    int size;
    Stack(int size)
    {
        arr = new int[size]; // here we allocate the memory to this pointer variable
        this->size = size;
        top1 = -1;   // at starting like that
        top2 = size; // at last
    }
    // size give us the size of array. not element
    void push1(int data)
    {
        if (top2 - top1 == 1)
        {
            // space not available
            cout << "Overflow" << endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }
    void push2(int data)
    {
        if (top2 - top1 == 1)
        {
            // space not available
            cout << "Overflow" << endl;
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }

    void pop1()
    {
        if (top1 == -1)
        {
            cout << "Stack is already empty (UNDERFLOW)";
        }
        else
        {
            top1--;
            
        }
    }
    void pop2()
    {
        if (top2 == size)
        {
            cout << "Stack is already empty (UNDERFLOW)";
        }
        else
        {
            top2++;
        }
    }
};
int main()
{
    Stack s(10);
    s.push1(10);
    s.push1(120);
    s.push2(30);
    s.push2(40);
    s.push1(50);

   
}