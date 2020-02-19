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

void mul(linked* A,linked* tail,linked* B,linked* tail1){

    int data;
    data = A->data*tail1->data;
    A->data = A->data*B->data;
    linked* x = new linked(data);
    
    x->next = tail;
    A->next = x;

    x->data = data + (tail->data*B->data) ;
    tail->data = tail->data*tail1->data;
    tail->next = NULL;
   
}


int main(){

    linked *A,*tail,*B,*tail1;

    A = tail = B = tail1 = NULL;

    cout<<"Enter for 1st eqn. enter for x and c :- "<<endl;
    int x1;
    cin>>x1;
    insert(A,tail,x1);
    int c1;
    cin>>c1;
    insert(A,tail,c1);
    cout<<"Enter for Eqn 2 enter for x and c :- "<<endl;
    int y1;
    cin>>y1;
    int c2;
    insert(B,tail1,y1);
    cin>>c2;
    insert(B,tail1,c2);
    linked *temp1 = A;
    cout<<temp1->data<<"x + "<<temp1->next->data;
    
    cout<<endl;
    linked *temp2 = B;
    cout<<temp2->data<<"x + "<<temp2->next->data;
    cout<<endl;
    mul(A,tail,B,tail1);
    
    linked *temp = A;

    cout<<temp->data<<"x^2 + "<<temp->next->data<<"x + "<<temp->next->next->data;

}