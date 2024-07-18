// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};

//     bool isReady[4] = {true, false, false, true};

//     isReady[3] = false;

//     // cout << isReady[0];

//     string names[4] = {"Vikash", "Suraj", "Kartik", "Ajay"};

//     int arrLen = sizeof(names) / sizeof(string);

//     // cout << arrLen;

//     // for (int i = 0; i < 4; i++) {
//     //     cout << names[i] <<endl;
//     // }

//     int nums[5];

//     nums[0] = 2;
//     nums[1] = 4;
//     // cout << nums[1];

//     // cout << sizeof(isReady);

//     int myNums[5] = {10, 20, 30, 40, 50};
//     int len = sizeof(myNums) / sizeof(int);

//     for (int i = 0; i < len; i++) {
//         cout << myNums[i] << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main () {

    string colors[3][3] = {
        {"RED", "GREEN", "BLUE"},
        {"DANGER", "HEALTH", "SAFETY"}
    };

    // cout << colors[1][1];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << colors[i][j] << " ";
        } cout << "\n";
    }

    return 0;
}