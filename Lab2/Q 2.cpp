#include<iostream>
using namespace std;

int total = 0;

void rev(int x){

    if(x/10 <= 0){

        cout<<x%10;
        return;

    }

    cout<<x%10;
    rev(x/10);

}

void sum(int d){

    if(d/10 <= 0){

        total += d%10;
        return;

    }

    total += d%10;
    sum(d/10);

}

void bs(int* arr,int x,int s,int e){

    if(s>e){

        cout<<"ERROR";
        return;

    }

    int mid = (s+e)/2;

    if(x<arr[mid]){

        bs(arr,x,s,mid-1);

    }
    else if(x>arr[mid]){

        bs(arr,x,mid+1,e);

    }

    else if(x == arr[mid]){

        cout<<"Found  ";
        cout<<mid+1<<"   ";
        cout<<arr[mid];

    }

}

int main(){

    cout<<"1. Reverse a digits of number :- "<<endl;
    cout<<"Input :-  ";
    int x;
    cin>>x;
    cout<<"result :-  ";
    rev(x);
    cout<<endl;

    cout<<"2. Sum of digits :- ";
    int d;
    cout<<"Input :-   ";
    cin>>d;
    sum(d);
    cout<<"Result :-   ";
    cout<<total;
    cout<<endl;

    cout<<"Binary Search";
    int arr[10] = {91,92,93,94,95,96,97,98,99,100};
    cout<<"Enter number you want to search between 91 - 100 :- ";
    int r;
    cin>>r;
    cout<<"Result :-   ";
    bs(arr,r,0,10);

}