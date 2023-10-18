// //Pattern printing
// //Problem 1
// // *
// // * *
// // * * *
// // * * * *

// #include<iostream>

// using namespace std;
// #define endl '\n'
// void print_row(int i)
// {
//     for(int j=0;j<=i;j++)
//     {
//         cout<<"* ";
//         }
// }
// void solve(){
//     int n;
//     cin>>n;
//     for (int i = 0; i<n;i++)
//     {
//         print_row(i);
//         cout<<endl;
//     }
// }

// signed main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin>>t;
//     while(t--)
//     solve();
// }

// //
// Problem 2-
// n=3
// ***
// *.*
// ***

// n=5
// *****
// *...*
// *.*.*
// *...*
// *****

// n=7
// *******
// *.....*
// *.***.*
// *.*.*.*
// *.***.*
// *.....*
// *******
//
// #include <iostream>
// using namespace std;

// void printPattern(int n) {
//     // Print top row
//     for (int i = 0; i < n; i++) {
//         cout << "*";
//     }
//     cout << endl;

//     // Print middle rows
//     int middle = n / 2;
//     for (int i = 0; i < middle; i++) {
//         cout << "*";
//         for (int j = 0; j < n - 2; j++) {
//             if (j % 2 == 0) {
//                 cout << ".";
//             } else {
//                 cout << "*";
//             }
//         }
//         cout << "*";
//         cout << endl;
//     }

//     // Print middle row
//     for (int i = 0; i < n; i++) {
//         cout << "*";
//     }
//     cout << endl;

//     // Print bottom rows
//     for (int i = middle - 1; i >= 0; i--) {
//         cout << "*";
//         for (int j = 0; j < n - 2; j++) {
//             if (j % 2 == 0) {
//                 cout << ".";
//             } else {
//                 cout << "*";
//             }
//         }
//         cout << "*";
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the value of n (an odd number): ";
//     cin >> n;

//     if (n % 2 != 0) {
//         printPattern(n);
//     } else {
//         cout << "Invalid input. Please enter an odd number." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// #define endl '\n'
// void print_cell(int i, int j, int n){
//     int decide = max(abs(n / 2 - i), abs(n / 2 - j));
//     char ch1="* ";
//     char ch2=". ";
//     if(n % 4 == 3){
//         swap
//     }
// }
#include <iostream>
#include <vector>
#include <string>

std::string longestCommonPrefix(std::vector<std::string>& strs) {
    if (strs.empty()) {
        return "";
    }

    std::string prefix = strs[0];
    for (const auto& str : strs) {
        while (str.find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) {
                return "";
            }
        }
    }

    return prefix;
}

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore(); // Ignore the newline character after reading n

    std::vector<std::string> strs(n);
    for (auto& str : strs) {
        std::getline(std::cin, str);
    }

    std::string result = longestCommonPrefix(strs);
    std::cout << result << std::endl;

    return 0;
}
