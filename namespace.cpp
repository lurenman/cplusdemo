#include <iostream>
using namespace std;
// 第一个命名空间
namespace first_space
{
    void func()
    {
        cout << "Inside first_space" << endl;
    }
}
// 第二个命名空间
namespace second_space
{
    void func()
    {
        cout << "Inside second_space" << endl;
    }
}

/**
 * @brief 嵌套命名空间
 *
 */
// 第一个命名空间
namespace first_space1
{
    void func()
    {
        cout << "Inside first_space1" << endl;
    }
    // 第二个命名空间
    namespace second_space1
    {
        void func()
        {
            cout << "Inside second_space1" << endl;
        }
    }
}
using namespace first_space1::second_space1;
int main()
{
    first_space ::func();
    second_space::func();

    first_space1::second_space1::func();
    func();
    return 0;
}