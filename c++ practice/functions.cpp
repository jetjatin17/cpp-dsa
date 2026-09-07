// all the function problems will be written in this file for the course problems.

#include<iostream>
using namespace std;

int minof2(int a,int b){
    if (a<b){
        return a;
    }else{
        return b;
    }
}

// first method of calling the function with return value.
// int main(){
//     cout << "the minimum of the two numbers = ";
//     cout << minof2(89,4) << endl;
//     return 0;
// }

// second method of calling the function with a return value.

int main(){
    cout << "the minimum of the two numbers = ";
    int min = minof2(23,99);
    cout << min << endl;
    return 0;
}