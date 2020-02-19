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

void func(linked* &head,linked* &tail){

    linked *temp = head;
    linked *prev = NULL;

    while(temp->next != NULL){

        prev = temp;
        temp = temp->next;

    }

    tail->next = head;
    head = tail;
    prev->next = NULL;
    tail = prev;

}

int main(){

    linked *A,*tail;
    A = tail = NULL;

    insert(A,tail,1);
    insert(A,tail,2);
    insert(A,tail,3);
    insert(A,tail,4);
    insert(A,tail,5);
    insert(A,tail,6);

    print(A);

    func(A,tail);
    cout<<endl;
    print(A);

}