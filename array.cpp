#include <iostream>
#include <iomanip>
using namespace std;
/**
 * @brief Get the Average object
 * int arr[] 也可以int* arr
 * @param arr
 * @param size
 * @return double
 */
double getAverage(int arr[], int size)
{
    int i, sum = 0;
    double avg;

    for (i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    avg = double(sum) / size;

    return avg;
}
/**
 * @brief new 的动态数组
 *
 * @return int*
 */
int *myFunction()
{
    int *myArray = new int[3];
    myArray[0] = 1;
    myArray[1] = 2;
    myArray[2] = 3;
    return myArray;
}

int main()
{
    int n[10]; // n 是一个包含 10 个整数的数组

    // 初始化数组元素
    for (int i = 0; i < 10; i++)
    {
        n[i] = i + 100; // 设置元素 i 为 i + 100
    }
    cout << "Element" << setw(13) << "Value" << endl;

    // 输出数组中每个元素的值
    for (int j = 0; j < 10; j++)
    {
        // setw（） 用于控制输出之间的间隔
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
    // 带有 5 个元素的整型数组
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;

    // 传递一个指向数组的指针作为参数
    avg = getAverage(balance, 5);

    // 输出返回值
    cout << "平均值是：" << avg << endl;
    int *result = myFunction();
    cout << "result：" << *(result+2) << endl;
    cout << "result[1]：" << result[1] << endl;
    // 使用 result
    delete[] result;
    return 0;
}