#include <iostream>
using namespace std;


int max(int num1,int num2){return (num1>num2)? num1: num2;}

int main(){
    int n;
    cin >> n;
    int SOL[n+1];
    int precios[] = {1,5,8,9,10,17,17,20,24,30};
    SOL[0]=0;
    for (int i = 1; i<=n; i++) 
   { 
       int maxi = -1; 
       for (int j = 0; j < i; j++){
           maxi = max(maxi, precios[j] + SOL[i-j-1]); 
       }
       SOL[i] = maxi; 
   } 
   cout << SOL[n];
   return 0;
}