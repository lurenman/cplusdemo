#include <iostream>
using namespace std;
class MyClass
{
public:
    int data;

    void display()
    {
        std::cout << "Data: " << data << std::endl;
    }
};
// 函数接受指向类的指针作为参数
void processObject(MyClass *ptr)
{
    ptr->display();
}

/**
 * @brief C++ 指向类的指针
 *
 * @return int
 */
int main()
{
    MyClass obj;
    obj.data = 100;
    // 声明和初始化指向类的指针
    MyClass *ptr = &obj;

    processObject(ptr);

    ptr->data = 200;

    // 通过指针访问成员变量
    std::cout << "Data via pointer: " << ptr->data << std::endl;

    // 通过指针调用成员函数
    ptr->display();

    // 动态分配内存方式
    MyClass *ptr1 = new MyClass;
    // MyClass *ptr1 = new MyClass();
    ptr1->data = 300;

    ptr1->display();

    // 释放动态分配的内存
    delete ptr1;

    return 0;
}