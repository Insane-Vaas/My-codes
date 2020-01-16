#include<iostream>
using namespace std;

void func(string str,string x,string y,int i){
    //return case
    if(str[i] == '\0'){

        return;

    }

    //base case
    if(str[i]==x[0]){

        cout<<y[0];

    }
    else
    {
        cout<<str[i];
    }
    
    func(str,x,y,i+1);

}

int main(){

    cout<<"Input string here :- ";
    string *str = new string;
    getline(cin,*str);

    cout<<"find letter :- ";
    string *find = new string;
    getline(cin,*find);

    cout<<"Replacing letter :-  ";
    string *replace = new string;
    getline(cin,*replace);

    cout<<"Result :- ";
    func(*str,*find,*replace,0);
}