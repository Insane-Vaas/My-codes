#include<iostream>
using namespace std;
int j;

void count(string str,int i){

    if(str[i]=='\0'){

        return;

    }

    j++;
    count(str,i+1);
}

void rev(string str,int i){

    if(i<0){

        return;
    }

    cout<<str[i];
    rev(str,i-1);

}

bool compare(string str1,string str2){

    if(str1 == str2){

        return true;

    }
    else
    {
        return false;
    }
}

int main(){

    cout<<"----------------MENU----------------"<<endl;
    int in;

    cout<<"1.Count length of string"<<endl;
    cout<<"2.Display string in rev. order"<<endl;
    cout<<"3.Cocatenate 2 strings"<<endl;
    cout<<"4.copy contents of to another string"<<endl;
    cout<<"5.Compare 2 strings"<<endl;
    cout<<"Enter your Input"<<endl;
    cin>>in;
    cin.ignore();

    if(in==1){

        string str;
        getline(cin,str);
        count(str,0);
        cout<<j;

    }

    else if(in==2){

        string str;
        getline(cin,str);
        count(str,0);
        rev(str,j-1);
        
    }
    else if(in==3){

        string str1,str2;
        getline(cin,str1);
        getline(cin,str2);

        str1 = str1 + str2;
        cout<<str1;
        
    }
    else if(in==4){

        string str1,str2;
        getline(cin,str1);

        str2 = str1;
        cout<<str2<<"  ";     
        
    }   
    else if(in==5){

        string str1,str2;
        getline(cin,str1);
        getline(cin,str2);

        if(compare(str1,str2) == true){

            cout<<"True";

        }
        else
        {
            cout<<"False";
        }      
        
    }
    else{

        cout<<"Invalid Input"<<endl;

    }

}