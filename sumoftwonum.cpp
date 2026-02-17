#include<iostream>
// sum of two numbers

using namespace std;
int main(){
    int a, b;
    cout << "Enter two numbers:";
    cin >> a >> b;                          // cin is used to take input from user
    int sum = a+b;
    cout << "Sum is: " << sum;              // << is used to print output to console 
    return 0;
}
