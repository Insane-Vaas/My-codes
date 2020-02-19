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

void func(linked* &head,linked* &tail){
    int j = 4;
    linked *temp = head;
    linked *temp1 = tail;

    while(j !=0){
        
        int b = temp->data;
        temp->data = temp1->data;
        temp1->data = b;
        temp = temp->next;
        temp1 = temp1->prev;
        j = j-1;

    }

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
    insert(A,tail,7);
    insert(A,tail,8);

    print(A);
    func(A,tail);
    cout<<endl;
    print(A);

}