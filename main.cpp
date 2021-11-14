#include <iostream>

using namespace std;

int main() {
   int n=0;
   cin>>n;
   int a=1,b=0,c=0;
   while(c<=n){
      c=a+b;
      a=b;
      b=c;
      cout<<c<<endl;
      c=a+b;
   }
   
