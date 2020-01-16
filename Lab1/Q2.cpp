#include<iostream>
using namespace std;

int main(){

    const char* name[] = { "Anand" , "Naureen", "Banjot", "Wahid", "Sheena"}; 

    for(int i=0;i<2;i++){

        swap(name[i],name[4-i]);

    }
    for(int i=0;i<5;i++){

        cout<<name[i]<<"  ";

    }

}