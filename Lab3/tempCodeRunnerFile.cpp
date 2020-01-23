#include<iostream>
using namespace std;

class linked{
public:
    string data;
    linked* next;

    linked(string d){

        data = d;
        next = NULL;

    }
};

void insert(linked* &head,linked* &tail,string d){

    if(head == NULL){

        linked* n = new linked(d);
        head = n;
        tail = n;

    }
    else{

        linked* n = new linked(d);
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

void func(linked* head){

    linked* temp = NULL;
    linked* pre = NULL;
    pre = head;
    while(head != NULL){

        string str;
        str = head->data;
        if(str == "a" || str == "e" || str == "i" || str == "o" || str == "u" || str == "A" || str =="E" || str == "I" || str == "O" || str == "U"){

        temp = head->next;
        delete head;
        head = pre;
        head->next = temp;
        
    }
    pre = head;
    head = head->next;
    
    }
}

int main(){

    linked *A,*tail;
    A = tail = NULL;

    string str;
    getline(cin,str);
    int i =0;

    while(str[i] != '\0'){
        string x;
        x = str[i];
        insert(A,tail,x);
        i = i+1;
    }

    print(A);
    func(A);
    cout<<endl;
    print(A);

}