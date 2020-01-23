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

void insert(linked* &head,int data){

    if(head== NULL){

        linked *n = new linked(data);
        head = n;

    }
    else{

        linked *n = new linked(data);
        n->next = head;
        head = n;

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

    linked *A;
    A = NULL;

    int x;
    cin>>x;

    while(x){

        insert(A,x%10);
        x = x/10;

    }   
    print(A);
}