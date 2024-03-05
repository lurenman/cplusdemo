
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

/**
 * @brief 参数默认值
 *
 * @param a
 * @param b
 * @return int
 */
int sum(int a = 1, int b = 20)
{
    int result;

    result = a + b;

    return (result);
}
std::vector<int> some_list;
/**
 * @brief lambda表达式
 * 参考https://www.cnblogs.com/jimodetiantang/p/9016826.html
 *  []      // 沒有定义任何变量。使用未定义变量会引发错误。
[x, &y] // x以传值方式传入（默认），y以引用方式传入。
[&]     // 任何被使用到的外部变量都隐式地以引用方式加以引用。
[=]     // 任何被使用到的外部变量都隐式地以传值方式加以引用。
[&, x]  // x显式地以传值方式加以引用。其余变量以引用方式加以引用。
[=, &z] // z显式地以引用方式加以引用。其余变量以传值方式加以引用。

 *
 */
void fLambda()
{
    int total = 0;
    for (int i = 0; i < 5; ++i)
        some_list.push_back(i);
    std::for_each(begin(some_list), end(some_list), [&total](int x)
                  { total += x; });
    std::cout << "the fLambda total:" << total << std::endl;

    int m = 0;
    int n = 0;
    [&, n](int a) mutable
    { m = ++n + a; }(5);//这个5代表int a
    std::cout << m << std::endl
              << n << std::endl;
}
/**
 * @brief 函数调用
 *
 * @return int
 */
int main()
{
    int a = 10;
    int b = 100;
    int result = sum(a, b);
    std::cout << "the result:" << result << std::endl;
    result = sum(a);
    std::cout << "the default result:" << result << std::endl;
    result = sum();
    std::cout << "the default result1:" << result << std::endl;

    fLambda();
    return 0;
}