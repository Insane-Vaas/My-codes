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

void cycle(linked* &head){

    linked *temp = head;

    while(temp->next != NULL){

        temp = temp->next;

    }

    temp->next = head;

}

void concatenate(linked *A,linked *B,linked *tail,linked *tail1){

    tail->next = B;

    tail1->next = A;


}

void printcy(linked *head){

    linked* temp = head;

    cout<<head->data<<"->";;
    temp = temp->next;

    while(temp != head){

        cout<<temp->data<<"->";
        temp = temp->next;

    }
    cout<<"X";
    
}


int main(){

    linked *A,*B,*tail,*tail1;

    A = B = tail = tail1 = NULL;

    insert(A,tail,1);
    insert(A,tail,2);
    insert(A,tail,3);
    insert(A,tail,4);
    insert(A,tail,5);
    insert(A,tail,6);
    print(A);
    cycle(A);
    cout<<endl;
    insert(B,tail1,11);
    insert(B,tail1,12);
    insert(B,tail1,13);
    insert(B,tail1,14);
    insert(B,tail1,15);
    insert(B,tail1,16);
    print(B);
    cycle(B);
    cout<<endl;
    cout<<"Concatenated circular linked list is :-  ";
    concatenate(A,B,tail,tail1);
    printcy(A);

}