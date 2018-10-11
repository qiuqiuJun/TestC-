//
//  main.cpp
//  TestC++
//
//  Created by wqq on 2018/10/11.
//  Copyright © 2018 wqq. All rights reserved.
//

#include <iostream>
#include <string>
#include <limits>
using namespace std;
void testCout();
void testSize();
void testEnum();
int main(int argc, const char * argv[]) {
    //测试打印输出
    testCout();
    //数据类型
    testSize();
    //测试enum
    testEnum();
    return 0;
}
//测试打印输出
void testCout(){
    std::cout << "Hello, World!\n";
    std::cout << "Hello C++\n";
    cout << "Using namespace std\n";
    bool kk = true;
#if kk
    cout << "什么玩意==1\n";
#else
    cout << "什么玩意==2\n";
#endif
}

void testSize(){
    cout << "type:\t" << "**********type********" << endl;
    cout << "bool:\t" << "所占字节数：" << sizeof(bool);
    cout << "最大值：\t" << numeric_limits<bool>::max();
    cout << "最小值：\t" << numeric_limits<bool>::min() << endl;
    cout << "int:\t" << "所占字节数：" << sizeof(int);
    cout << "最大值：\t" << numeric_limits<int>::max();
    cout << "最小值：\t" << numeric_limits<int>::min() << endl;
    typedef int age;
    age kk = 10;
    cout << "kk==" << kk << "\n";
}
void testEnum(){
    enum color {blue,red,yellow};
    int myColor = 1;
    switch (myColor) {
        case blue:
            cout << "blue==";
            break;
        case red:
            cout << "red==";
            break;
        case yellow:
            cout << "yellow==";
            break;
        default:
            break;
    }
    
}
