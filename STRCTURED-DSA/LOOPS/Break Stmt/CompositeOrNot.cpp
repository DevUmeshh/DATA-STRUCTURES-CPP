#include<iostream>
using namespace std;
int main(){
    //composite numbers - the number having factors means divisible by 1 and its factors...
    int n;
    cout<<"Enter A Number : ";
    cin>>n;
    for(int i=2; i<=n-1; i++){

        if(n%i==0){
            cout<<n<<" is as composite number"<<endl;
            break;
        }

    }

}