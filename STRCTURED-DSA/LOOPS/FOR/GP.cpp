#include<iostream>
using namespace std;
int main(){

    //series = 2 6 18 54...
    int n;
    cout<<"enter number : ";
    cin>>n;

    int a = 2;
    for(int i = 1; i<=n; i++){

        cout<<a<<endl;
        a = a * 3;

    }


    
}