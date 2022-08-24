#include<iostream>

using namespace std;

int main(){
    int a, b;
    int res;
    char x;
    cin >> a >> x >> b;
    switch (x)
    {
    case '+':
        res = a + b;
        break;
    
    case '-':
        res = a - b;
        break;
    
    case '*':
        res = a * b;
        break;
    
    case '/':
        res = a / b;
        break;
    
    case '%':
        res = a % b;
        break;
    
    default:
        break;
    }
    cout<<res;
    return 0;
}