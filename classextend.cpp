#include <iostream>
using namespace std;

// 基类
class Shape
{
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
    virtual void test()
    {
        cout << "hello Shape test" << endl;
    }

protected:
    int width;
    int height;
};

// 基类 PaintCost
class PaintCost
{
public:
    int getCost(int area)
    {
        return area * 70;
    }
};

// 派生类 可以多集成
class Rectangle : public Shape, public PaintCost
{
public:
    int getArea()
    {
        return (width * height);
    }
    void test()
    {
        cout << "hello Rectangle test" << endl;
    }
};

int main()
{
    Rectangle rectangle;
    rectangle.setWidth(10);
    rectangle.setHeight(10);

    cout << "rectangle.getArea():" << rectangle.getArea() << endl;

    cout << "rectangle.getCost(rectangle.getArea()):" << rectangle.getCost(rectangle.getArea()) << endl;

    rectangle.test();

    Shape *sp;
    sp = &rectangle;
    sp->test();
    return 0;
}