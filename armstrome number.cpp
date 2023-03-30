#include <cmath>
#include <iostream>
using namespace std;

int main() {
   int n1,n2;
   cin>>n1>>n2;
   int n=0;
   int num = n1;
//   if(n1>0 &&  n1 < n2 && n2 < 10000){
	 while(n1<=n2){
		  
      while (num != 0) {
      num /= 10;
      n=n+1;
     }
   int num1=n1;
    int sum = 0;

   while (num1 != 0) {
      int rem = num1 % 10;

    //   int power = (pow(rem, n));
      sum =sum+(pow(rem, n));;
      num1/= 10;
   }
   if(n1==sum){
	   cout<<n1<<endl;
   }
 
   n1=n1+1;
	}

//   }
//   else{
//	   return 0;
//   }
   return 0;
}
