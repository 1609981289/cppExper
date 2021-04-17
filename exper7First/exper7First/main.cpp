#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
    //使用初始化的方式
    vector<vector<int>> v1 = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    vector<vector<int>> v2 = {
        {2,3,4},
        {5,6,7},
        {8,9,10}
    };

    Matrix m1(v1, 3, 3);
    Matrix m2(v2, 3, 3);
    Matrix m3 = m1 + m2;

    cout << m3 << endl;

    //采用用户输入
    cout << endl;
    Matrix m4;
    Matrix m5;
    cin >> m4;
    cin >> m5;

    Matrix m6 = m4 + m5;
    cout << m6 << endl;;

    //    3 5 7
    //    9 11 13
    //    15 17 19


    //    输入矩阵的行数:3
    //    输入矩阵的列数 : 3
    //    输入一个矩阵 :
    //    a11 : 1
    //    a12 : 2
    //    a13 : 3
    //    a21 : 4
    //    a22 : 5
    //    a23 : 6
    //    a31 : 7
    //    a32 : 8
    //    a33 : 9
    //    输入矩阵的行数 : 3
    //    输入矩阵的列数 : 3
    //    输入一个矩阵 :
    //    a11 : 2
    //    a12 : 3
    //    a13 : 4
    //    a21 : 5
    //    a22 : 6
    //    a23 : 7
    //    a31 : 8
    //    a32 : 9
    //    a33 : 10
    //    3 5 7
    //    9 11 13
    //    15 17 19

    cin.get();
    return 0;
}