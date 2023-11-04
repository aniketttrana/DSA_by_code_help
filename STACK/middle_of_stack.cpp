#include <iostream>
#include <stack>
using namespace std;
void printmiddle(stack<int> &s, int &totalSize)
{
    if (s.size() == totalSize / 2 + 1)
    {
        cout << s.top() << endl;
        return;
    }
    int temp = s.top();
    s.pop();
    // recursive call
    printmiddle(s, totalSize);
    // backtracking
    s.push(temp);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int totalSize = s.size();
    printmiddle(s, totalSize);
}