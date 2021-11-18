
// 137533 Kelvin Lemanta

//Do while loop to output even numbers between 12 to 50

#include <iostream>
using namespace std;

int main() {
 
    /* Initialize i with 12. */
 
    int i=12, n;

    cout << "Enter a number \n";
    cin >> n;
 
   /* If i is less than or equal to n. */
 
   while( i <= n){
  
      /* If number is divisible by 2
         then it's an even number
      */
  
      if(i % 2 == 0){
   
         cout <<i<< " ";
      }
  
     /* Increment i. */
  
     i++;
 }
 
 return 0;
}
	
