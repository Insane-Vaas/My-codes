#include<iostream>
using namespace std;

class linked{

    public:
        int data;
        linked* next;

        linked(int d){

            data = d;
            next = NULL;

        }
};

void insert(linked* &head,linked* &tail,int data){

    if(head == NULL){

        linked* n = new linked(data);
        head = n;
        tail = n;

    }

    else{

        linked* n = new linked(data);
        tail->next = n;
        tail = n;
    }
}

void print(linked* head){

    while(head != NULL){

        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"X";

}

int main(){

    int x;
    cin>>x;

    linked *A,*tail;
    A = tail = NULL;

    for(int i=0;i<x;i++){

        int input;
        cin>>input;
        insert(A,tail,input);

    }

    print(A);

}