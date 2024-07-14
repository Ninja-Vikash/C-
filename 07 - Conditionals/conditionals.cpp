// #include <iostream>
// using namespace std;

// int main () {
//     int x = 5;
//     int y = 7;

//     // Single if statement
//     // if (x > y) {
//     //     cout << "X is greater than Y";
//     // }


//     // if-else statement
//     if (x > y) {
//         cout << "X is greater than Y";
//     } else {
//         cout << "Y is greater than X";
//     }


//     // Ternary Operator
//     /*
//         Replacement of single if-else statement
//         We can write the above code as
//     */
//    string result = (x > y) ? "X is greater than Y" : "Y is greater than X";
//    cout << result;

    
//     // if-else ladder
//     // if (x > y) {
//     //     cout << "X is greater than Y";
//     // } else if (x == y){
//     //     cout << "X and Y are identical";
//     // } else {
//     //     cout << "Y is greater than X";
//     // }
//     return 0;
// }


// Switch CASE statements

#include <iostream>
using namespace std;

int main () {
    int day = 4;

    switch (day) {
        case 1 :
            cout << "Monday";
            break;
        case 2 :
            cout << "Tuesday";
            break;
        case 3 :
            cout << "Wednesday";
            break;
        case 4 :
            cout << "Thrusday";
            break;
        case 5 :
            cout << "Friday";
            break;
        case 6 :
            cout << "Saturday";
            break;
        case 7 :
            cout << "Sunday";
            break;
        default :
            cout << "Not a valid day";
            break;
    }
    return 0;
}