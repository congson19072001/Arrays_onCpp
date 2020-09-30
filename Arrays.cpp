//////////////////////////////////////////////////
// Chương trình này sẽ tổng hợp tất cả các hàm mình viết được trong quá trình học thuật toán
// Mình sẽ không xoá mà để đây lúc nào cần dùng thì copy
// Cố gắng tối ưu vì sẽ dùng lâu dài
//////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "SonArray.h"
using namespace std;

// Need to toogle Functions rapidly when you want to save memory, just switch 0 and 1
#if 1  
#endif
int main()
{
    // cin and cout are now applied on files
#ifndef ONLINE_JUDGE
#define ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    LongArray myArray;
    myArray.Import_array();
    myArray.merge_sort(0,0,1);
    myArray.Export_array();
    fclose(stdin);
    fclose(stdout);
    return 0;
}
// A[] = {2,3,4,5,6,7,8,9,10} //54 mỗi đội có 27 tổng => có tbc =6
// B[] = {2,9,3,7,6}
// C[] = {4,10,5,8}
// D[] = {1,3,8,12} // 24 {3,5,8,12}
// E[] = {1,12}
// E[] = {3,8}