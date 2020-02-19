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

void removeDuplicate(linked* &head){

    linked *curr = head;
    while(curr != NULL){

        linked* temp = curr;
        linked* prev = curr;
        temp = temp->next;
        int x = curr->data;
        while(temp != NULL){
            if(x == temp->data){

                linked *temp1 = temp;
                if(temp->next == NULL){
                    
                    delete temp1;
                    prev->next = NULL;
                    temp = prev;

                }
                else{

                    prev->next = temp->next;
                    temp = prev;
                    delete temp1;
                    
                }

            }
            prev = temp;
            temp = temp->next;

        }
        curr = curr->next;
    }
}

int main(){

    linked *A,*tail;
    A = tail = NULL;

    insert(A,tail,12);
    insert(A,tail,11);
    insert(A,tail,12);
    insert(A,tail,21);
    insert(A,tail,41);
    insert(A,tail,43);
    insert(A,tail,21);
    print(A);
    removeDuplicate(A);
    cout<<endl;
    print(A);

}