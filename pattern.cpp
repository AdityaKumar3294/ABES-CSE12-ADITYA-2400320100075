#include<iostream>
using namespace std;
int main(){
    int n=5;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout <<"*"<<" ";
         }
        cout<<endl<<endl;
    }

    for (int i=0;i<n;i++){
        char ch='A';
        for (int j=0;j<n;j++){
            cout<<ch<<" ";
            ch=ch+1;

        }
        cout<<endl;
    }

    int num=1;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout <<num<<" ";
            num++;
         }
        cout<<endl<<endl;
    }

    char ch ='a';

      for (int i=0;i<n;i++){
        
        for (int j=0;j<n;j++){
            cout<<ch<<" ";
            ch++;

        }
        cout<<endl;
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout <<"*"<<" ";
         }
        cout<<endl;
    }
     num=1;
    for (int i=0;i<n;i++){
        for (int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-1;j++){
            cout<<(i+1)<<" ";
        }
        cout<<endl;
    }
    }