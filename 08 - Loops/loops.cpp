// #include <iostream>
// using namespace std;

// int main () {
//     int i = 0;
//     while (i < 5) {
//         cout << "Hello World!\n";
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main () {
//     int i = 0;

//     do {
//         cout << "Coding is fun!";
//         i++;
//     }
//     while (i < 0);  // false
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main () {
//     for (int i = 0; i < 5; i++) {
//         cout << "Hello World!\n";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main () {
    // for (int i = 0; i < 5; i++){
    //     for (int j = i; j < 5; j++) {
    //         cout << "*\t";
    //     }
    //     cout << "\n";
    // }
    // for (int i = 5; i >= 0; i--){
    //     for (int j = i; j < 5; j++) {
    //         cout << "*\t";
    //     }
    //     cout << "\n";
    // }

    // for (int i = 0; i < 5; i++) {
    //     if (i == 3) {
    //         break;
    //     }
    //     cout << i << "\n";
    // }
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            continue;;
        }
        cout << i << "\n";
    }
    return 0;
}