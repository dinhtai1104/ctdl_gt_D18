
// Efficient C++ program to convert all substrings from 
// decimal to given base. 
#include <bits/stdc++.h> 
using namespace std; 
  
int substringConversions(string str, int k, int b) 
{ 
   int i = 0, sum = 0, counter = k-1; 
  
    // Computing the decimal of first window 
    for (i; i < k; i++) 
    { 
        sum = sum + ((str.at(i) - '0') * pow(b, counter)); 
        counter--; 
    } 
    cout << sum << " "; 
      
    // prev stores the pervious decimal 
    int prev = sum; 
             
    // Computing decimal equivalents of all other windows 
    sum = 0, counter = 0; 
    for (i; i < str.size(); i++) 
    { 
        // Subtracting weight of the element pushed out of window 
        sum = prev - ((str.at(i - k) - '0') * pow(b, k-1)); 
          
        // Multiplying the decimal by base to formulate other window  
        sum = sum * b; 
          
        // Adding the new element of window to sum 
        sum = sum + (str.at(i) - '0'); 
          
        // Decimal of current window 
        cout << sum << " "; 
          
        // Updating prev 
        prev = sum; 
          
        counter++; 
    } 
} 
  
// Driver code 
int main() 
{ 
    string str = "12212"; 
    int b = 3, k = 3; 
    substringConversions(str, b, k);     
    return 0; 
} 
