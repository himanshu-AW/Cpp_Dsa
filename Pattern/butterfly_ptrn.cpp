#include<iostream>
using namespace std;
// Enter a number : 4
//  *             *
//  * *         * *
//  * * *     * * *
//  * * * * * * * *
//  * * * * * * * *
//  * * *     * * *
//  * *         * *
//  *             *
int main()
{int n,i,j;
cout<<"Enter a number : ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
     for(j=1;j<=i;j++)
       cout<<" *";
     for(j=1;j<=2*n-2*i;j++)
      cout<<"  ";
     for(j=1;j<=i;j++)
      cout<<" *";  
     cout<<endl;
   }
   for(i=n;i>=1;i--)
   {
     for(j=1;j<=i;j++)
       cout<<" *";
     for(j=1;j<=2*n-2*i;j++)
      cout<<"  ";
     for(j=1;j<=i;j++)
      cout<<" *";  
     cout<<endl;
   }
    return 0;
}