#include <iostream>
#include <limits>

using namespace std;
void typeSize();
void staticCast();
void dynamicCast();
void constCast();
void reinterpretCast();
int main()
{
    // typeSize();
    // staticCast();
    // constCast();
    reinterpretCast();
    return 0;
}
/**
 * @brief 类型字节数统计
 *
 */
void typeSize()
{
    cout << "type: \t\t"
         << "************size**************" << endl;
    cout << "bool: \t\t"
         << "所占字节数：" << sizeof(bool);
    cout << "\t最大值：" << (numeric_limits<bool>::max)();
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
    cout << "char: \t\t"
         << "所占字节数：" << sizeof(char);
    cout << "\t最大值：" << (numeric_limits<char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
    cout << "signed char: \t"
         << "所占字节数：" << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
    cout << "unsigned char: \t"
         << "所占字节数：" << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
    cout << "wchar_t: \t"
         << "所占字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
    cout << "short: \t\t"
         << "所占字节数：" << sizeof(short);
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
    cout << "int: \t\t"
         << "所占字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
    cout << "unsigned: \t"
         << "所占字节数：" << sizeof(unsigned);
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
    cout << "long: \t\t"
         << "所占字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long>::max)();
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
    cout << "unsigned long: \t"
         << "所占字节数：" << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
    cout << "double: \t"
         << "所占字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
    cout << "long double: \t"
         << "所占字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
    cout << "float: \t\t"
         << "所占字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
    cout << "size_t: \t"
         << "所占字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
    cout << "string: \t"
         << "所占字节数：" << sizeof(string) << endl;
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;
    cout << "type: \t\t"
         << "************size**************" << endl;
}
/**
 * @brief 静态转换
 *
 */
void staticCast()
{
    int a = 10;
    float b = static_cast<float>(a);
    cout << "the b :" << b;
}

/**
 * @brief 动态转换
 *
 */
void dynamicCast()
{
    // class Base
    // {
    // };
    // class Derived : public Base
    // {
    // };
    // Base *ptr_base = new Derived;
    // Derived *ptr_derived = dynamic_cast<Derived *>(ptr_base);
}
/**
 * @brief 常量转换
 * c中也可以通过指针修改 const
 *
 */
void constCast()
{
    const int i = 10;
    int &f = const_cast<int &>(i);
    cout << "the constCast f:" << f << "\n";
    f = 11;
    cout << "the constCast f:" << f;
}
/**
 * @brief 重新解释转换
 *
 */
void reinterpretCast()
{
    int i = 10;
    float f = reinterpret_cast<float &>(i);
    cout << "the reinterpret f:" << f << endl;
    // the reinterpret f:1.4013e-44
    cout << "the reinterpret f:" << &f << endl;
}