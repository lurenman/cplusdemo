#include <iostream>
using namespace std;
#define concat(a, b) a##b
int main()
{
    int xy = 100;

    cout << concat(x, y);
    cout << "hello world";
    return 0;
}