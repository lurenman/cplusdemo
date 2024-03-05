#include <iostream>
using namespace std;
double division(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero condition!";
    }
    return (a / b);
}
// struct MyException : public exception
// {
//   const char * what () const throw ()
//   {
//     return "C++ Exception";
//   }
// };
class MyException : public exception
{
public:
    const char *what() const throw()
    {
        return "C++ Exception";
    }
};
int main()
{
    int x = 50;
    int y = 0;
    double z = 0;

    try
    {
        z = division(x, y);
        // 这行不会执行和java一样
        cout << z << endl;
    }
    catch (char const *msg)
    {
        cerr << msg << endl;
    }

    try
    {
        throw MyException();
    }
    catch (MyException &e)
    {
        cout << "MyException caught" << endl;
        cout << e.what() << endl;
    }
    catch (std::exception &e)
    {
        // 其他的错误
    }

    return 0;
}