#include<iostream>
using namespace std;

int main()
{
    const int a = 10;
    int *ptr = (int*)&a;
    *ptr = 20;
    cout << a << endl;
    return 0;
}