#include <iostream>
using namespace std;
class MyClass
{
private:
    int value;

public:
    void setValue(int value)
    {
        this->value = value;
    }

    void printValue()
    {
        std::cout << "Value: " << this->value << std::endl;
    }
};
/**
 * @brief this指针
 *
 * @return int
 */
int main()
{
    MyClass obj;
    obj.setValue(42);
    obj.printValue();
    return 0;
}