#include<iostream>
using namespace std;

void rev(string str,int i){

    if(i<0){

        return;
        
    }

    cout<<str[i];
    rev(str,i-1);

}

int main(){

    string str;
    getline(cin,str);
    int size = str.length();

    rev(str,size-1);

}