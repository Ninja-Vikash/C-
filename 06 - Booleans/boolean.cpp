// #include <iostream>
// using namespace std;

// int main () {
//     bool isCodingFun = true;
//     bool isCodingBoring = false;

//     // cout << isCodingBoring << endl << isCodingFun;

//     int x = 10, y = 11;

//     cout << (x < y);
//     return 0;
// }

// WAP to check candidate is eligible or not?

#include <iostream>
using namespace std;

int main () {
    const int reqAge = 18;

    int candidateAge;

    cout << "Please enter your age : ";
    cin >> candidateAge;

    if (candidateAge < reqAge)
    {
        cout << "You are not eligible yet!";
    } else {
        cout << "You are eligible!";
    }
    
    return 0;
}