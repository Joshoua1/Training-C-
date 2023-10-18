// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value of n: ";
//     std::cin >> n;

//     for (int i = n; i >= 1; --i) {
//         for (int j = 1; j <= i; ++j) {
//             std::cout << "* ";
//         }
//         std::cout << "\n";
//     }

//     return 0;
// }

// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value of n: ";
//     std::cin >> n;

//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= n; ++j) {
//             std::cout << "* ";
//         }
//         std::cout << "\n";
//     }

//     return 0;
// }

// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value of n: ";
//     std::cin >> n;

  
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= i; ++j) {
//             std::cout << "* ";
//         }
//         std::cout << "\n";
//     }

   
//     for (int i = n - 1; i >= 1; --i) {
//         for (int j = 1; j <= i; ++j) {
//             std::cout << "* ";
//         }
//         std::cout << "\n";
//     }

//     return 0;
// }

// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the number of rows: ";
//     std::cin >> n;

//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= i; ++j) {
//             std::cout << j << " ";
//         }
//         std::cout << "\n";
//     }

//     return 0;
// }


#include <iostream>

int main() {
    int choice;
    std::cout << "Choose a pattern to print:\n";
    std::cout << "1. Pattern 1\n";
    std::cout << "2. Pattern 2\n";
    std::cout << "3. Pattern 3\n";
    std::cout << "4. Pattern 4\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    int n;
    switch (choice) {
        case 1:
            std::cout << "Enter the value of n: ";
            std::cin >> n;
            for (int i = n; i >= 1; --i) {
                for (int j = 1; j <= i; ++j) {
                    std::cout << "* ";
                }
                std::cout << "\n";
            }
            break;
            
        case 2:
            std::cout << "Enter the value of n: ";
            std::cin >> n;
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= n; ++j) {
                    std::cout << "* ";
                }
                std::cout << "\n";
            }
            break;

        case 3:
            std::cout << "Enter the value of n: ";
            std::cin >> n;
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= i; ++j) {
                    std::cout << "* ";
                }
                std::cout << "\n";
            }
            for (int i = n - 1; i >= 1; --i) {
                for (int j = 1; j <= i; ++j) {
                    std::cout << "* ";
                }
                std::cout << "\n";
            }
            break;

        case 4:
            std::cout << "Enter the number of rows: ";
            std::cin >> n;
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= i; ++j) {
                    std::cout << j << " ";
                }
                std::cout << "\n";
            }
            break;

        default:
            std::cout << "Invalid choice!\n";
    }

    return 0;
}
