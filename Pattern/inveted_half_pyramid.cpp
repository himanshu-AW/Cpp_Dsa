#include<iostream>
using namespace std;
// Enter a number : 6
//  * * * * *
//  * * * *  
//  * * *    
//  * *      
//  *
int main(){
 int n;
 cout<<"Enter a number : ";
 cin>>n;
 for(int i=n;i>=1;i--)
 {
    for(int j=1;j<=i;j++)
    cout<<" *";
    cout<<endl;
 }
    return 0;
}