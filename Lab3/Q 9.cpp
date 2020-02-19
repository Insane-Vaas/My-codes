#include<iostream>
using namespace std;

class linked{

    public:

        int data;
        linked *next;
        linked *prev;

        linked(int d){

            data = d;
            next = NULL;
            prev = NULL;

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
        n->prev = tail;
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

void del(linked* head){

    linked *temp = NULL;

    while(head->next != NULL){

        head = head->next;

    }
    temp = head;

    head = head->prev;
    delete temp;
    head->next = NULL;
    
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
    cout<<endl;
    del(A); 
    print(A);


}