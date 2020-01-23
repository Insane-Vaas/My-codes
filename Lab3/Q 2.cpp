#include<iostream>
using namespace std;

int j;
int mi;
int ma;

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

void func(linked *head){

    ma = head->data;
    mi = head->data;

    while(head != NULL){

        if(head->data > ma){

            ma = head->data;

        }
        else if(head->data < mi){

            mi = head->data;

        }
        head = head->next;
    }
}

void print(linked* head){

    while(head != NULL){

        cout<<head->data<<"->";
        head= head->next;
        j++;

    }
    cout<<"X";
}

int main(){

    int input;
    linked *A,*tail;
    A = tail = NULL;
    while(input != 2){

        cout<<"1. Enter data to linked list"<<endl;
        cout<<"2.Exit"<<endl;
        cin>>input;
        if(input == 1){
            int x;
            cin>>x;
            cout<<"Enter data :- ";
            insert(A,tail,x);
        }
    }   
    func(A);
    print(A);
    cout<<endl;
    cout<<j<<"  "<<mi<<" "<<ma<<"  ";
}