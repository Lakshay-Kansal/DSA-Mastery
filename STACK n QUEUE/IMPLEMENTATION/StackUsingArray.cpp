#include <iostream>
using namespace std;
class stackARRAY
{
    int top = -1;
    int array[10];
    int size = 10;
    int curr = 0;
    void push(int val)
    {
        if (top >= size)
        {
            cout << "stack is full";
        }
        else
        {
            top = top + 1;
            array[top] = val;
        }
        curr = curr + 1;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack is empty";
        }
        else
        {
            top = top - 1;
        }
        curr = curr - 1;
    }
    int top()
    {
        if (top == -1)
        {
            cout << "stack is empty";
        }
        else
        {
            return array[top];
        }
    }
    int size()
    {
        return curr;
    }
};
int main()
{
    cout << "hello";
    return 0;
}