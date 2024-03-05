#include <iostream>
using namespace std;
template <typename T>
/**
 * @brief 函数模板
 *
 * @param a
 * @param b
 * @return T const&
 */
inline T const &Max(T const &a, T const &b)
{
    return a < b ? b : a;
}
/**
 * @brief 模板个人感觉就是泛型
 *
 * @return int
 */
int main()
{
    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl;

    double f1 = 13.5;
    double f2 = 20.7;
    cout << "Max(f1, f2): " << Max(f1, f2) << endl;

    string s1 = "Hello";
    string s2 = "World";
    cout << "Max(s1, s2): " << Max(s1, s2) << endl;

    return 0;
}