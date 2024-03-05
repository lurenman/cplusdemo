#include <iostream>
using namespace std;
/**
 * @brief 函数重载
 *
 */
class PrintData
{
public:
    void print(int i)
    {
        cout << "整数为: " << i << endl;
    }

    void print(double f)
    {
        cout << "浮点数为: " << f << endl;
    }

    void print(char c[])
    {
        cout << "字符串为: " << c << endl;
    }
};

class Box
{
public:
    int count;

    Box operator+(const Box &b)
    {
        Box box;
        box.count = this->count + b.count;
        return box;
    }
};
/**
 * @brief 重载
 *
 * @return int
 */
int main()
{
    PrintData data;
    data.print(100);
    data.print(100.1234);

    char c[] = "hello c++";
    data.print(c);

    // 来个运算符重载

    Box b1;
    Box b2;
    Box b3;

    b1.count = 100;
    b2.count = 200;
    b3 = b1 + b2;

    cout << "b3.count:" << b3.count << endl;

    return 0;
}