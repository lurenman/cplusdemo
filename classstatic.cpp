#include <iostream>
using namespace std;
class Box
{
public:
    static int count;
    /**
     * @brief Get the Count object静态函数
     *
     * @return int
     */
    static int getCount()
    {
        return count;
    }
};
int Box::count = 100;
/**
 * @brief class 静态成员
 *
 * @return int
 */
int main()
{
    Box box;
    cout << "box.count:" << box.count << endl;
    cout << "Box::count:" << Box::count << endl;
    box.count = 200;
    cout << "box.count:" << box.count << endl;
    cout << "Box::count:" << Box::count << endl;

    Box *ptr = &box;
    cout << "ptr->count:" << ptr->count << endl;

    Box *ptr1 = new Box;
    ptr1->count = 300;
    cout << "ptr->count:" << ptr1->count << endl;

    // 如果box.getCount 这种不带括号的调用相当于调用返回的是地址
    cout << "box.getCount():" << box.getCount() << endl;
    cout << "ptr1->getCount():" << ptr1->getCount() << endl;
    cout << "Box::getCount():" << Box::getCount() << endl;
    delete ptr1;
    return 0;
}