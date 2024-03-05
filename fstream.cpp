#include <iostream>
#include <fstream>
using namespace std;
/**
 * @brief 发现infile读的操作只会读到空格就结束
 *
 * @return int
 */
int main()
{

    string dataContent = "hello c++";
    // 以写模式打开文件
    ofstream outfile;
    outfile.open("file.txt");
    // 向文件写入用户输入的数据
    cout << "向文件写入用户输入的数据" << endl;
    outfile << dataContent << endl;
    cout << "再次向文件写入用户输入的数据" << endl;
    outfile << dataContent << endl;
    // 关闭打开的文件
    outfile.close();

    // 以读模式打开文件
    ifstream infile;
    infile.open("file.txt");

    char data[100];
    cout << "Reading from the file" << endl;
    infile >> data;
    // 在屏幕上写入数据
    cout << data << endl;

    cout << "again reading from the file" << endl;
    infile >> data;
    // 在屏幕上写入数据
    cout << data << endl;
    infile.close();
   
    return 0;
}