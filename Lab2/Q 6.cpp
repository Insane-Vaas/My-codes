#include<iostream>
using namespace std;

int intial_year = 2020;

struct employee{
    
    int emp_code;
    string name;
    int year;

};

void input(employee &A){

    cout<<"Enter id :- ";
    cin>>A.emp_code;
    cout<<"Enter name :- ";
    cin>>A.name;
    cout<<"Year of joining :- ";
    cin>>A.year;

}

void check(employee A){

    int gap = intial_year - A.year;
    
    if(gap >= 3){

        cout<<A.name<<" is working here for more than 3 years"<<endl;

    }    
}

int main(){

    struct employee A[10];

    for(int i=0;i<4;i++){

        input(A[i]);

    }

    for(int i=0;i<4;i++){

        check(A[i]);

    }

}