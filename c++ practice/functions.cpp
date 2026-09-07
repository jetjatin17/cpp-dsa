// all the function problems will be written in this file for the course problems.

#include<iostream>
using namespace std;

// int minof2(int a,int b){
//     if (a<b){
//         return a;
//     }else{
//         return b;
//     }
// }

// first method of calling the function with return value.
// int main(){
//     cout << "the minimum of the two numbers = ";
//     cout << minof2(89,4) << endl;
//     return 0;
// }

// second method of calling the function with a return value.

// int main(){
//     cout << "the minimum of the two numbers = ";
//     int min = minof2(23,99);
//     cout << min << endl;
//     return 0;
// }


// sum of numbers till n.

// int sumn(int n){
//     int sum = 0;
//     for (int i=1; i<=n; i++){
//         sum += i;
//     }return sum;
// }
// int factorial(int n){
//     int fact = 1;
//     for (int i=1;i<=n;i++){
//         fact *= i;
//     }return fact;
// }
// int main(){
//     int m;
//     cout << "enter the number : ";
//     cin >> m;
//     cout << "the sum of numbers = " << sumn(m) << endl;
//     cout << "the factorial of number = " << factorial(m) << endl;
//     return 0;
// }




// sum of digits of a number n.

// int sumd(int n){
//     int sum = 0, digit;
//     while (n){
//         digit = n%10;
//         sum += digit;
//         n/=10; 
//     }return sum;
// }

// int main(){
//     int m;
//     cout << "enter the number : ";
//     cin >> m;
//     cout << "the sum of digits of " << m << " = " << sumd(m) << endl;
//     return 0;
// }





// nCr, binomial coefficient for n & r.

int factorial(int n){
    int fact = 1;
    for (int i=1; i<=n; i++){
        fact = fact * i;
    }return fact;
}

int nCr(int n, int r){
    int ncr = 0;
    int factn = factorial(n);
    int factr = factorial(r);
    int factnr = factorial(n-r);
    ncr = (factn)/(factr * factnr);
    return ncr;
}

int main(){
    int n,r;
    cout  << "enter : ";
    cin >> n >> r;
    cout << nCr(n,r) << endl;
    return 0;
}