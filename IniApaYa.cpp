#include<iostream>
#include<string.h>
#include <cstring>
#include <sstream>

using namespace std;

bool isInteger(string str){
    int length = str.length();
    int idx = 0;
    if (str[0] == '-') {
        if (length == 1) {
            return false;
        }
        idx = 1;
    }
    for(; idx<length; idx++){
        if(str[idx]<'0' || str[idx]>'9'){
            return false;
        }
    }
    return true;

}
int main() {
    string in;
    int num;
    cin>> in;
    if(isInteger(in)){
        stringstream con(in);
        con >> num;
        if(num<0){
            cout << "bilangan bulat negatif";
        }else if(num>0){
            cout << "bilangan bulat positif";
        }else{
            cout << "nol";
        }
    }else{
        cout << "kata";
    }
   return 0;
}