#include <iostream>
using namespace std;
void blockScope();
void classScope();
/**
 * @brief 作用域练习
 *
 * @return int
 */
int main()
{
    blockScope();
    classScope();
    return 0;
}
/**
 * @brief 块作用域
 *
 */
void blockScope()
{
    int a = 10;
    {
        int a = 100;
        cout << "the block a:" << a << endl;
    }
    cout << "the a:" << a << endl;
}
/**
 * @brief 类的作用域
 * 1.发现类静态变量初始化的话需要const
 * 2.静态变量对象和方法都可以改
 *
 */
class A
{
public:
    static const int x = 10;

public:
    static int y;

public:
    int z;
};
int A::y = 20;
void classScope()
{
    cout << "the A::x value:" << A::x << endl;
    cout << "the A::y value:" << A::y << endl;
    A *a = new A;
    a->z = 30;
    cout << "the a->z value:" << a->z << endl;
    cout << "the a->x value:" << a->x << endl;
    cout << "the a->y value:" << a->y << endl;
    a->y = 200;
    cout << "the a->y value:" << a->y << endl;
    cout << "the A::y value:" << A::y << endl;

    A *aa = new A;
    aa->z = 300;
    cout << "the aa->z value:" << aa->z << endl;
    cout << "the aa->x value:" << aa->x << endl;
    cout << "the aa->y value:" << aa->y << endl;
}
