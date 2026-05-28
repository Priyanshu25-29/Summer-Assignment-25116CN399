//Write a program to Check whether a number is palindrome. 

#include<iostream>
using namespace std;
int main(){
    int n,i,digits,newnum;
    cout<<"Enter the number : ";
    cin>>n;
    newnum=0;
    i=n;
    while(i!=0){
        digits=i%10;
        newnum=newnum*10+digits;
        i=i/10;
    }
    cout<<"Number : "<<n<<endl;
    cout<<"Reversed number is: "<<newnum<<endl;
    if (newnum==n){
        cout<<"The number is a palindrome number.";
    }
    else{
        cout<<"The number is not a palindrome number.";
    }
    
    return 0;
}