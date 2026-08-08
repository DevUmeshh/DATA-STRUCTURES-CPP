#include<iostream>
using namespace std;
int main(){

    int n, sum = 0;
     cout<< "Enter n : ";
     cin>>n;

     int i = 1;

     while (i <=n ){

        if(i%2 ==0){
            sum = sum -i;

        }else{
            sum = sum + i;
        }
        i++;




     }

     cout<<"Sum = "<<sum;

     return 0;




}