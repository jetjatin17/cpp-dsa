// for n = 4
// 1234
// 1234
// 1234
// 1234

#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;

//     for (int i = 1; i<=n; i++){
//         for (int j = 1;j<=n; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
    
//     for (int i = 1; i<=n; i++){
//         for (char j = 65; j<(n+65); j++){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }



// for n = 3.
// 123
// 456
// 789           the numbers continue.

// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;

//     for (int i = 1; i<=n; i++){
//         int k = 1+((i-1)*n);
//         for (int j = k; j < (k+n); j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     int num = 1;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<n; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }




// triangle pattern for n = 3.
// *
// **
// ***

// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     for (int i = 1; i<=n; i++){
//         for (int j = 0; j<i; j++){
//             cout << "* ";
//         }cout << endl;
//     }    
//     return 0;
// }



// 1
// 22
// 333
// 4444

// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     for (int i = 1; i<=n; i++){
//         for (int j = 0; j<i; j++){
//             cout << i << " ";
//         }cout << endl;
//     }   
//     return 0;
// }



// A                    A
// BB                   BC
// CCC                  DEF
// DDDD                 GHIJ

// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     char ch = 'A';
//     for (int i = 1; i<=n; i++){
//         for (int j=0; j<i; j++){
//             cout << ch << " ";
//             ch+=1;
//         }cout << endl;
//     }  
//     return 0;
// }



// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     char ch = 'A';
//     for (int i = 1; i<=n; i++){
//         for (int j=0; j<i; j++){
//             cout << ch << " ";
//         }cout << endl;
//         ch+=1;
//     }  
//     return 0;
// }




// reverse number triangle for n = 3.
// 1
// 21
// 321

int main(){
    int n;
    cout << "enter the number : ";
    cin >> n;
    for (int i =1; i<=n;i++){
        for (int j = i; j >=1;j--){
            cout << j << " ";
        }cout << endl;
    }    
    return 0;
}
