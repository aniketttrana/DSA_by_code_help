// we can implement stack in two forms
// 1.ARRAYS
// 2.LINKED LIST

// IMPLEMENTATION WITH ARRAYS
#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr; // we make an array pointer in which point in heap memory
    int top;
    int size;
    Stack(int size)
    {
        arr = new int[size]; // here we allocate the memory to this pointer variable
        this->size = size;
        top = -1;
    }
    // size give us the size of array. not element
    void push(int data)
    {
        if (size - top > 1)
        {
            // space available
            top++;
            arr[top] = data;
        }
        else
        {
            // space not available
            cout << "Stack overflow";
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is already empty (UNDERFLOW)";
        }
        else
        {
            top--;
            // why we are just -- bcoz we cant delete index
            //  we can add values . why to add need not
        }
    }
    int getTop()
    {
        if (top == -1)
        {
            cout << "Stack is empty";
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    int getSize()
    {
        return top + 1;
    }
    int empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while (!s.empty())
    {
        cout << s.getTop() << endl;
        s.pop();
    }
    // we poped all the elements
    cout << "Size is " << s.getSize();
}