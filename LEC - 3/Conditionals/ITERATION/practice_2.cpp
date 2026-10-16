#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character"<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"it is a lowercase"<<endl;
    }
    else if(ch>='A'&& ch<='Z'){
        cout<<"it is a uppercase"<<endl;
    }
    else {
        cout<<"it is a numeric"<<endl;
    }
}