#include<iostream>
using namespace std;

class linked{

public:
    string data;
    linked* next;

    linked(int d){

        data = d;
        next = NULL;

    }
};

void insert(linked* &head,linked* &tail,string data){

    if(head == NULL){

        linked* n = new linked(data);
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

void 

int main(){

    linked *A,*tail;
    A = tail = NULL;

    int i;
    string str1;
    string str2;
    getline(cin,str1);
    while(str[i] != '\0'){

        string x;
        x = str[i];
        insert(A,tail,x);
        i = i+1;

    }

}