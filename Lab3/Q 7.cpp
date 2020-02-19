#include<iostream>
#include<string>
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

void func(linked* head,linked* head1){

    linked *curr = head;
    while(curr->next != NULL){
        linked * temp = curr->next;
        linked *prev = curr;

        linked *curr2 = head1;
        while(curr2 != NULL){
            
            if(temp->data == curr2->data){
                
                linked *temp1 = temp->next;

                if(temp1->data == curr2->next->data){

                    linked *temp2 = temp1->next;

                    if(temp2->data == curr2->next->next->data){

                        prev->next = temp2->next;
                        delete temp2;
                        delete temp1;
                        delete temp;
                        return;
                    }
                }
            }
            curr2 = curr2->next;
        }
        curr = curr->next;
    }
}
int main(){

    linked *A,*tail;
    A = tail = NULL;
    linked *B,*tail2;
    B = tail2 = NULL;

    int i;
    cout<<"first string :- "<<endl;
    string str1;
    getline(cin,str1);
    string str2;
    while(str1[i] != '\0'){

        string x;
        x = str1[i];
        insert(A,tail,x);
        i = i+1;

    }
    print(A);
    cout<<endl;
    cout<<"Second string :- "<<endl;
    getline(cin,str2);
    int j =0;
    while(str2[j] != '\0'){

        string y;
        y = str2[j];
        insert(B,tail2,y);

        j = j+1;
    }
    print(B);
    cout<<endl;
    func(A,B);
    print(A);

}