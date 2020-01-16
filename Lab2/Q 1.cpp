#include<iostream>
#include<string>
using namespace std;

class user{

    private:
        string password;
        bool low,up,num,len;

    public:
        user(){
            len = low = up = num = false;
        }
        int x = 0;
        string name;
        void getpassword(string pass);
        void checklength(string namelength);
        void passlen(string pass);
        void checkpasswordval(string pass,int x);
        bool ispassvalid();
        bool allisvalid();
};

void user::getpassword(string pass){
    password =  pass;
}

void user::passlen(string pass){

    if(pass.length()<8 || pass.length()>20){

        cout<<"Invalid password not have enough length"<<endl;

    }
    else{

        checkpasswordval(pass,0);

    }
    
}
// rec is here
void user::checkpasswordval(string pass,int i){

    char c = pass[i];

    if(pass[i] == '\0'){

        return;

    }

    if(!low && islower(c)){

        low = true;

    }
    else if(!up && isupper(c)){

        up = true;

    }
    else if(!num && isdigit(c)){

        num = true;

    }

    checkpasswordval(pass,i+1);

}

void user::checklength(string name){

    if ( name.length() < 6 || name.length()> 20 ){

            len = false;
            cout<<"username length is invalid"<<endl;
            return;
            
        }
    else
    {

        len = true;

    }
    
}

bool user::ispassvalid(){

    if(low == true && up == true && num == true){

        return 1;

    }
    else
    {
        return 0;
    }
    
}

bool user::allisvalid(){

    if(len == true && ispassvalid() == true){

        cout<<"All good here"<<endl;
        return 1;

    }
    else{

        cout<<"ERROR"<<endl;
        return 0;
        
    }
}

int main(){
    user u;
    for(int i=1;i<=1;i++){
        string str;
        cout<<"username :- ";
        getline(cin,u.name);
        cout<<"password :- ";
        getline(cin,str);
        u.getpassword(str);
        u.checklength(u.name);
        u.passlen(str);
        if(!u.allisvalid() == false){
        cout<<u.name<<endl;
        int size = str.length()-1;
        while(size--){

            cout<<"*";
        }
        cout<<endl;
        cout<<endl;
        }   
    }
}