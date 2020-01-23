#include<iostream>
using namespace std;

class linked{

public:
    int data;
    linked *next;

    linked(int d){

        data = d;
        next = NULL;

    }
};

void insert(linked* &head,linked* &tail,int data){

    if(head == NULL){

        linked *n = new linked(data);
        head = n;
        tail = n;

    }

    else{

        linked *n = new linked(data);
        tail->next = n;
        tail = n;
    }
}

void print(linked *head){

    while(head != NULL){

        cout<<head->data<<"->";
        head = head->next;

    }
    cout<<"X";
}

void fill(linked* &head){
    int x = 0;
    cin>>x;
    linked *X = head;
    
    

    for(int i=1;i<x-1;i++){

        X = X->next;

    }
    int in;
    cin>>in;
    linked *A1 = new linked(in);
    linked *temp = NULL;
    temp = X->next;
    X->next = A1;
    A1->next = temp;

}

int main(){

    linked *A,*tail;
    A = tail = NULL;

    for(int i=1;i<=10;i++){

        insert(A,tail,i);

    }
    print(A);
    cout<<endl;
    fill(A);
    print(A);

}