#include<iostream>

using namespace std;

bool palindromeCheck(string s){
    int len = s.length()-1;
    string rev;
    for(int i = len; i>=0; i--){
        rev += s[i];
    }
    if(rev == s){
        return true;
    }else{
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int n = 0;
    cin>>n;
    string s[n];
    for(int i = 0; i<n; i++){
        cin>>s[i];
    }
    for(int i =0; i<n; i++){
        if(palindromeCheck(s[i])){
            cout<<"palindrom\n";
        }else{
            cout<<"bukan palindrom\n";
        }
    }
    return 0;
}