#include <iostream>
using namespace std;

volatile int num = 20; // 定义变量 num，其值可能会在未知的时间被改变

/**
 * @brief mutable 表示类中的成员变量可以在 const 成员函数中被修改。
 *
 */
class Example
{
public:
    static const int age = 10;

    // public:
    //     static int age1;

public:
    int get_value() const
    {
        return value_; // const 关键字表示该成员函数不会修改对象中的数据成员
    }
    void set_value(int value) const
    {
        value_ = value; // mutable 关键字允许在 const 成员函数中修改成员变量
    }
    // void test()
    // {
    //     age1 = 100;
    // }

private:
    mutable int value_;
};

void example_function(register int num) {
    // register 关键字建议编译器将变量 num 存储在寄存器中
    // 以提高程序执行速度
    // 但是实际上是否会存储在寄存器中由编译器决定
}
/**
 * @brief 修饰符类型
 *
 * @return int
 */
int main()
{
    // cout << "hello world" << endl;
    cout << "the volatile num:" << num << endl;
    Example *example = new Example;
    example->set_value(100);
    int eValue = example->get_value();
    cout << "the eValue:" << eValue << endl;
    cout << "the example->age:" << example->age << endl;

    return 0;
}


