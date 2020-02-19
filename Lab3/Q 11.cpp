#include<iostream>
using namespace std;
int l = 1;

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

void print(linked* head){

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

int len(linked* head){

    
    linked *temp = head->next;
    

    while(temp->data != head->data){

        l = l+1;
        temp = temp->next;

    }
    return l;

}

void deletion(linked* &head,linked* &tail,int n){

    if(n==1){

        linked *temp = head;
        tail->next = head->next;
        head = head->next;
        delete temp;

    }
    else if(n > l){

        cout<<"ERROR";

    }
    else{

        linked *temp1 = head;

        for(int i=2;i<n;i++){

            temp1 = temp1->next;

        }
        linked* temp = temp1;
        temp = temp->next;
        temp1->next = temp->next;
        delete temp;

    }

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
    cycle(A);
    len(A);
    cout<<"Enter pos. :- ";
    int n;
    cin>>n;
    cout<<"Linkedlist after deletion is . ";
    cout<<endl;
    deletion(A,tail,n);
    cout<<endl;
    printcy(A);

}