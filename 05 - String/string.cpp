// #include <iostream>
// using namespace std;

// int main()
// {
//     string username = "Ninja Vikash";
//     string password = "abcd";

//     // cout << "Username : " << username << "\n";
//     // cout << "Password : " << password << "\n";

//     // string user = username + " | " + password;
//     // cout << user;

//     // string fname = "Vikash";
//     // string lname = " Kumar";

//     // string fullname = fname.append(lname);

//     // cout << fullname;
//     // cout << fullname.length();
//     // cout << fullname[5];
//     // fullname[5] = 's';

//     // cout << fullname;

//     string weather = "Food";

//     weather.at(0) = 'G';

//     // cout << weather;

//     // string fullname;
//     // cout << "Enter your fullname : ";
//     // // cin >> fullname;
//     // getline(cin, fullname);

//     // cout << "Your name is " << fullname;

//     string greeting = "Hello World!";
//     char greet[] = "Hello Coder!";

//     cout << greeting << "\n";
//     cout << greet;

//     return 0;
// }

// ----------------------- STRING METHODS --------------------------

#include<iostream>
#include<string>
using namespace std;

int main(){
    string username = "ninja";

    // cout << username.size();
    // cout << username.empty();
    // cout << username.assign("Vika");
    // username = "Vikash";
    string name = "vika";

    string myName = "Vkiash";

    string replace = "ik";

    // cout << myName.replace(1, 2, replace);

    // cout << username;

    string fruit = "ApplE";
    string food = "Apple";

    // cout << (fruit.compare(food) == 0);

    string buyer = "Money";
    string seller = "Good";

    cout << "Before swap, Buyer has " << buyer << " and Seller has " << seller << "\n";

    buyer.swap(seller);

    cout << "After swap, Buyer has " << buyer << " and Seller has " << seller << "\n";
    return 0;
}