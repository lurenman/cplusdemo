#include <iostream>
using namespace std;
class Persion
{
public:
    string name;
    int age;
    int add(int a, int b)
    {
        return a + b;
    }
    // 成员函数声明
    int add1(int a, int b);
};
/**
 * @brief 可以理解为kotlin扩展
 *范围解析运算符 :: 定义该函数
 * @param a
 * @param b
 * @return int
 */
int Persion::add1(int a, int b)
{
    return a + b + age;
}
class Line
{
public:
    void setLength(double len);
    double getLength(void);
    Line()
    {
        cout << "Object is being created" << endl;
    }; // 这是构造函数
    ~Line()
    {
        cout << "Object is being deleted" << endl;
    }; // 这是析构函数声明

    // Line(double len)
    // {
    //     length = len;
    //     cout << "Object is being created, length = " << len << endl;
    // }
    // 使用初始化列表来初始化字段
    Line(double len) : length(len)
    {
        cout << "Object is being created, length = " << len << endl;
    }

private:
    double length;
};
void Line::setLength(double len)
{
    length = len;
}

double Line::getLength(void)
{
    return length;
}

int main()
{
    Persion p;
    p.name = "lufei";
    p.age = 18;
    cout << "p.name:" << p.name << "  p.age:" << p.age << endl;
    cout << "p.add(1,2):" << p.add(1, 2) << endl;
    cout << "p.add1(1,2):" << p.add1(1, 2) << endl;

    Line line(183);
    // line.setLength(183);
    cout << "Length of line : " << line.getLength() << endl;
    return 0;
}
