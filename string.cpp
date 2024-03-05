#include <iostream>
#include <cstring>
using namespace std;
/**
 * @brief 参考：https://www.runoob.com/cplusplus/cpp-strings.html
 * https://blog.csdn.net/acc_hoyh/article/details/122974190
 * 
 * @return int 
 */
int main()
{
    char site[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
    char site1[] = "RUNOOB";
    // char* site2 = "RUNOOB";
    cout << "site:" << site << endl;
    cout << "site1:" << site1 << endl;
    // cout << "site2:" << site2 << endl;

    char str1[13] = "runoob";
    char str2[13] = "google";
    char str3[13];
    int len;

    // 复制 str1 到 str3
    strcpy(str3, str1);
    cout << "strcpy( str3, str1) : " << str3 << endl;

    // 连接 str1 和 str2
    strcat(str1, str2);
    cout << "strcat( str1, str2): " << str1 << endl;

    // 连接后，str1 的总长度
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;
    string s = "hello";
    string s1 = " c++";
    string s2 = s + s1; // 这种跟其它语言一样
    cout << "s + s1: " << s2 << endl;
    string s3;
    s3 = s;
    cout << "s3: " << s3 << endl;
    cout << "s3.size(): " << s3.size() << endl;
    cout << "s3.length(): " << s3.length() << endl;
    cout << "s3.append(s1): " << s3.append(s1) << endl;
    cout << "s3.c_str(): " << s3.c_str() << endl;
    return 0;
}