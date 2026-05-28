//Write a program to Reverse a number. 

#include<iostream>
using namespace std;
int main(){
   int n,i,digit,newnum;
   cout<<"Enter the number : ";
    cin>>n;
    newnum=0;
   while(n>0){
     digit=n%10;
        newnum=newnum*10+digit;
        n=n/10;
   } 
   cout<<"Reverse of the number is : "<<newnum<<endl;
    
    
    return 0;
}