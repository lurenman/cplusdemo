#include <iostream>
using namespace std;

// 基类 如果类中至少有一个函数被声明为纯虚函数，则这个类就是抽象类。纯虚函数是通过在声明中使用 "= 0" 来指定的
class Shape
{
public:
    // 提供接口框架的纯虚函数
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }

protected:
    int width;
    int height;
};

// 派生类
class Rectangle : public Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
};
class Triangle : public Shape
{
public:
    int getArea()
    {
        return (width * height) * 10;
    }
};
/**
 * @brief C++ 接口是使用抽象类来实现的
 *
 * @return int
 */
int main()
{
    Rectangle rectangle;
    Triangle triangle;

    rectangle.setWidth(10);
    rectangle.setHeight(5);

    triangle.setWidth(10);
    triangle.setHeight(5);

    cout << "rectangle.getArea():" << rectangle.getArea() << endl;
    cout << "triangle.getArea():" << triangle.getArea() << endl;

    return 0;
}