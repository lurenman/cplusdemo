#include <iostream>
using namespace std;
double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

double &setValues(int i)
{
    double &ref = vals[i];
    return ref; // 返回第 i 个元素的引用，ref 是一个引用变量，ref 引用 vals[i]
}
// 函数声明
void swap(int &x, int &y);
/**
 * @brief 引用
 * C++ 引用 vs 指针
引用很容易与指针混淆，它们之间有三个主要的不同：

不存在空引用。引用必须连接到一块合法的内存。
一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
引用必须在创建时被初始化。指针可以在任何时间被初始化。
 *
 * @return int
 */
int main()
{
    // 声明简单的变量
    int i;
    double d;

    // 声明引用变量
    int &r = i;
    double &s = d;

    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r << endl;

    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s << endl;

    // 局部变量声明
    int a = 100;
    int b = 200;

    cout << "交换前，a 的值：" << a << endl;
    cout << "交换前，b 的值：" << b << endl;

    /* 调用函数来交换值 */
    swap(a, b);

    cout << "交换后，a 的值：" << a << endl;
    cout << "交换后，b 的值：" << b << endl;

    cout << "改变前的值" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }

    setValues(1) = 20.23; // 改变第 2 个元素
    setValues(3) = 70.8;  // 改变第 4 个元素

    cout << "改变后的值" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }
    return 0;
}

// 函数定义
void swap(int &x, int &y)
{
    int temp;
    temp = x; /* 保存地址 x 的值 */
    x = y;    /* 把 y 赋值给 x */
    y = temp; /* 把 x 赋值给 y  */
    return;
}