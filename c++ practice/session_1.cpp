#include<iostream>
using namespace std;

// int main()
// {
//     int age;
//     int c = 12;
//     age = 18;
//     float n = 32.33;
//     bool name = -45;
//     // cout <<"...first code...\npaper"<<"...first code...\npaper"<< endl;
//     cout << age << endl;
//     cout << n << endl;
//     cout << c << endl;
//     cout << name << endl;
//     return 0;
// }


// program to check if a input is a uppercase or a lowercase.

// int main()
// {
//     char val;
//     cout << "enter the value : ";
//     cin >> val; 
//     if (val >=65 && val <= 91){
//         cout << "input is uppercase.";
//     }else if (val >= 92 && val <= 117){
//         cout << "input is a lowercase.";
//     } else {
//         cout << "invalid input.";
//     }
//     return 0;
// }


// different method for the same question. 

// int main()
// {
//     char input;
//     cout << "enter the value : "; 
//     cin >> input;
//     if (input >='A' && input <= 'Z'){
//         cout << "input is uppercase.";
//     }else if (input >= 'a' && input <= 'z'){
//         cout << "input is a lowercase.";
//     } else {
//         cout << "invalid input. not an alphabet";
//     }
//     return 0;
// }




// ternary operators. 

// int main()
// {
//     int grade;
//     cout << "enter your grade : ";
//     cin >> grade;
//     grade >= 90 ? cout << "s grade" : cout << "pass";
//     return 0;
// }



// while loop.

// int main()
// {
//     int num = 1;
//     while (num<6){
//         cout << num;
//         cout << ". this is line break\n";
//         ++num;
//     }
//     return 0;
// }



// star pattern.

int main(){
    int n=1,m;
    while (n<=5){
        m=1;
        while(m<=n){
            cout << m;
            m++;
        }
        cout << endl;
        n++;
    }
    cout << "changed"; 
    return 0;
}

