/*
// Stack is adata structure in which data is being stored in LIFO order i.e LAST IN FIRST OUT
// Example : stack of plates stored in one by one in increasing order .we pick the last one plate.
// Example : we insert bullet in guns in LIFO order. imagine a pistol handle.
// Example: CTRL+Z . also works on this principle
// If we write Aniket Ranaji. we ctrl+z then i will removed first.

// ************* OPERATIONS ON STACK *****************
stack <int> s; // we are creating integer type stack
s.push(10):: push th value
s.pop():: remove the last inserted value.
s.top():: return the topmost element.
s.empty():: return 1 if stack is empty and vise versa.
s.emplace()::
s.size():: return the number of elements.
//*******************STL of stack*************
*/
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    // push
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50); // top most
    // pop
    s.pop(); // 50 will get removed

    // check element on top
    cout << "Element in top  is :: " << s.top() << endl; // 40
    // check the size 
    cout<<"Size of Stack is :: "<<s.size()<<endl; // 4
    // empty or not
    cout<<s.empty()<<endl; // 0 means NO
    // print it
    while(!s.empty()){  // we are getting in reverse order // which is ovious
        cout<<s.top()<<endl;
        s.pop();
    }

}
