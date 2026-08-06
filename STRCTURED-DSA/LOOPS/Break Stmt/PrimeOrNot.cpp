#include<iostream>
using namespace std;
int main(){
    //composite numbers - the number having factors means divisible by 1 and its factors...
    int n;
    cout<<"Enter A Number : ";
    cin>>n;
    bool flag = true; //its prime
    for(int i=2; i<=n-1; i++){

        if(n%i==0){
            flag = false;
            break;
        }
        
    }
    if(n==1) cout<<"1 is neither prime not composite";
        else if(flag==true) cout<<n<<" is prime";
        else cout<<n<<" is composite";

}

//using boolean we can store the state