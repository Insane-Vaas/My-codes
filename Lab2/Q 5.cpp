#include<iostream>
using namespace std;

struct libr{

    string title;
    string A_name;
    int price;
    bool haikinahi;

};


int main(){

    struct libr A[5];
    int x = 0;

    A[0].A_name ="Alok";
    A[0].title ="C++";
    A[0].price = 111;
    A[0].haikinahi = true;
    x = x+1;

    A[1].A_name ="Niel";
    A[1].title ="Python";
    A[1].price = 123;
    A[1].haikinahi = false;
    x = x+1;

    A[2].A_name ="noone";
    A[2].title ="Java";
    A[2].price = 153;
    A[2].haikinahi = true;

    int input = 0;
    while(input != 5){
        cout<<"----------------MENU-----------------"<<endl;
        cout<<"1.Add book information"<<endl;
        cout<<"2.Display book information"<<endl;
        cout<<"3.List all books of a given number"<<endl;
        cout<<"4.List the title of specified book"<<endl;
        cout<<"5.List the count of books in the library"<<endl;
        cout<<"6.Exit"<<endl;
        cin>>input;

        if(input ==1){

            x = x+1;
            cout<<"Enter title";
            cin>>A[x].title;
            cout<<"Enter Author name";
            cin>>A[x].A_name;
            cout<<"Enter price";
            cin>>A[x].price;
            cout<<"if issued press 0 else 1";
            int y;
            cin>>y;
            if(y == 1){

                A[x].haikinahi = true;

            }
            else
            {
                A[x].haikinahi = false;
            }
        }

        else if(input == 2){

            for(int i=0;i<=x;i++){

                 cout<<A[i].title<<"   "<<A[i].price<<"   "<<A[i].A_name<<"   "<<A[i].haikinahi<<" "<<endl;

            }

        }
        else if(input == 3){

            cout<<"1";

        }
        else if(input == 4){

            cout<<"Enter code of book";
            cout<<A[x].title<<endl;

        }
        else if(input == 5){

            cout<<x;


        }
        else if(input == 6){

            break;

        }
        else
        {
            cout<<"Error";
        }
    }
}