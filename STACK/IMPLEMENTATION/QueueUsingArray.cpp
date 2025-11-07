#include <iostream>
using namespace std;
class queueARRAY
{
    int start = -1;
    int end = -1;
    int array[10];
    int size = 10;
    int curr = 0;
    void push(int val)
    {
        if (curr == size)
        {
            cout << "overflow condition";
        }
        if (curr == 0)
        {
            start = start + 1;
            end = end + 1;
        }
        else
        {
            end = (end + 1) % size;
        }
        array[end] = val;
        curr = curr + 1;
    }
    void pop()
    {
        if (curr = 0)
        {
            cout << "empty queue";
        }
        int el = array[start];
        if (curr == 1)
        {
            start = end = -1;
        }
        else
        {
            start = (start + 1) % size;
        }
        curr = curr - 1;
    }
    int top()
    {
        if (curr == 0)
        {
            cout << " empty ";
        }
        else
        {
            return array[start];
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