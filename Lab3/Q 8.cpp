#include<iostream>
using namespace std;

class linked{

    public:

        int data;
        linked *next;
        linked *prev;

        linked(int d){

            data = d;
            next  = NULL;
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

void print(linked *head){

    while(head != NULL){

        cout<<head->data<<"->";
        head = head->next;

    }
    cout<<"X";

}

void func(linked* &head,int n,int data){

    linked* temp1 = head;

    if(n==1){

        linked *n = new linked(data);
        n->next = head;
        head->prev = n;
        head = n;

    }
    else{

        for(int i=2;i<n;i++){

            temp1 = temp1->next;

        }

        linked *n = new linked(data);
        linked * temp = temp1->next;

        temp1->next = n;
        n->next = temp;
        temp->prev = n;
        n->prev = temp1;

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

    print(A);
    cout<<endl;
    cout<<"enter here data and location :-  ";
    int x,data;
    cin>>x>>data;
    cout<<endl;
    func(A,x,data);
    print(A);


}