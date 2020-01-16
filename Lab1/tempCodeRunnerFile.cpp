#include<iostream>
using namespace std;

int main(){

    int *mat1[100][100];
    int *mat2[100][100];
    int *mul[100][100];

    int row1,col1,row2,col2;
    cout<<"For matrix 1:- "<<endl;
    cin>>row1>>col1;
    cout<<"For matrix 2:- "<<endl;
    cin>>row2>>col2;
    cout<<"Input of matrix 1:-"<<endl;
    for(int i=0;i<row1;i++){
        for (int j=0;j<col1;j++){

            cin>>*(*(mat1+i)+j);
            
        }

    }

    for(int i=0;i<row1;i++){
        for (int j=0;j<col1;j++){

            cout<<*(*(mat1+i)+j)<<"  ";
            
        }
        cout<<endl;

    }
    cout<<"Input of matrix 2:-"<<endl;
    for(int i=0;i<row2;i++){
        for (int j=0;j<col2;j++){

            cin>>*(*(mat2+i)+j);
            
        }

    }

    if(row1 = col2){

        for(int i=0;i<row1;i++){

            for(int j=0;j<col2;j++){

                for(int k=0;k<col1;k++){

                    (*(*(mul+i)+j)) += (*(*(mat1+i)+k)) * (*(*(mat2+k)+j));
                }
            }
        }

        cout<<"Result  :-  "<<endl;

        for(int i=0;i<row1;i++){

            for(int j=0;j<col2;j++){

                cout<<mul[i][j]<<"  ";

            }
            cout<<endl;
        }
    }
    else{
        cout<<"Not possible";
    }
}