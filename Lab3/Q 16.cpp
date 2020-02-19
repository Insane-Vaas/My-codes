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

void cycle(linked* head,linked* tail){

    tail->next = head;

}

void mid(linked* head,linked* &tail1,linked* &B,linked* &tail){

    linked* slow = head;
    linked* fast = head;
    linked* prev = NULL;

    if(head == NULL){

        return;

    }

    slow = slow->next;
    fast = fast->next->next;

    while(fast != head){

        prev = slow;
        slow = slow->next;
        fast = fast->next->next;

    }
    tail1 = prev;
    tail1->next = NULL;

    B = slow;

    while(slow->next != head){

        slow = slow ->next;

    }

    tail = slow;
    tail->next = NULL;

}

bool detect(linked* head,linked* tail){

    if(tail->next = head){

        cout<<"true";
        return true;

    }
    else
    {
        cout<<"false";
        return false;
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
    cout<<endl;
    cycle(A,tail);
    linked *B,*tail1;
    mid(A,tail,B,tail1);
    print(A);
    cout<<endl;
    print(B);
    cycle(A,tail);
    cycle(B,tail1);
    cout<<endl;
    detect(A,tail);
    cout<<endl;
    detect(B,tail1);

}