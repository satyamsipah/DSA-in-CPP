#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int *ptr = &x;

    int y = 10;
    ptr = &y;

    cout << *ptr << endl;   //10
    return 0;

    //but not possible with array
}