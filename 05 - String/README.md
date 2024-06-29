## 05 - String

### What is string?
Strings are used to store text/characters.<br/>
A string variable contains a collection of characters surrounded by double quotes.
```cpp
string name = "VIKASH KUMAR";
```

### Common Methods in string
#### Concatenation
The `+` operator can be used between string to add them together to make a new string.<br/>
This is called **Concatenation**.

```cpp
string fname = "Vikash";
string lname = " Kumar";

string fullname = fname + lname;
cout << fullname;                       // Vikash Kumar
```

#### Append()
A string in C++ is actually an object, which contain functions that can be perform certain operation as strings.

We can use `append()` function to concatenate strings as:
```cpp
string fname = "Vikash";
string lname = " Kumar";

string fullname = fname.append(lname);
cout << fullname;                       // Vikash Kumar
```

#### Length()
To get the length of a string, use the `length()` method as:
```cpp
string fname = "Vikash";
string lname = " Kumar";

string fullname = fname.append(lname);
cout << fullname.length();              // 12
```

#### Accessing characters
We can access the characters in a string by refering to its index number inside square brackets.

```cpp
string username = "Ninja"

cout << username[0] << "\n";            // N
cout << username[1] << "\n";            // i
cout << username[2] << "\n";            // n
cout << username[3] << "\n";            // j
cout << username[4];                    // a
```
> [!NOTE]\
> index value starts from `zero (0)`

#### Manipulation
To change the value of a specific character in a string is possible using its index number, and use *single quotes* to replace any character.

```cpp
string weather = "Food";

weather[0] = 'G';

cout << weather;                         // Good
```

#### At()
`at()` method works same as above method
```cpp
string weather = "Food";

weather.at(0) = 'G';

cout << weather;                         // Good
```

#### Problem of getting a string input with a space
We cannot get a string value with a space using `cin` function like
```cpp
string fullname;
cout << "Enter your fullname : ";         // Vikash Kumar
cin >> fullname;

cout << "Your name is " << fullname;      // Vikash
```
Instead of using `cin` function to get value we can use `getline()` function as
```cpp
string fullname;
cout << "Enter your fullname : ";
getline(cin, fullname);                   // Vikash Kumar

cout << "Your name is " << fullname;      // Vikash Kumar
```
> [!NOTE]\
> `getline()` function accepts two argument as\
> `cin` as first argument\
> `variable` as second argument

### Useful methods
#### size()
```cpp
string username = "ninja";
cout << username.size();                    // 5
```
#### empty()
```cpp
string username = "ninja";
cout << username.empty();                   // 0
```
#### replace()
```cpp
string myName = "Vkiash";
string replaceWith = "ik";

cout << myName.replace(1, 2, replaceWith);      // Vikash
```
> [!NOTE]\
> `replace()` method has 3 arguments as\
> `str.replace(start_index, end_index, newStr)`
#### compare()
```cpp
string fruit = "Apple";
string food = "Apple";

cout << (fruit.compare(food) == 0);             // 1
```
> [!IMPORTANT]\
> The `compare` method compares the content of two strings
>
> It `returns 0` if the strings are equal.
> ```cpp
> cout << fruit.compare(food);
> ```
> It returns a negative value
> ```cpp
> string fruit = "Appl";
> string food = "Apple";
>
> cout << fruit.compare(food);
> ```
> > [!NOTE]\
> > `compare()` method returns negative value if the first string is **lexicographically less** than the second string.
> >
> > `"Appl"` has 4 character while `"Apple"` has 5 character\
> > Since we are comparing with bigger string\
> > We will get a negative value as ` (4 - 5) = -1 `
>
> It returns a positive value
> ```cpp
> string fruit = "Applee";
> string food = "Apple";
>
> cout << fruit.compare(food);
> ```
> > [!NOTE]\
> > `compare()` method returns positive value if the first string is **lexicographically greater** than the second string.
> >
> > `"Applee"` has 6 character while `"Apple"` has 5 character\
> > Since we are comparing with lower string\
> > We will get a positive value as ` (6 - 5) = 1 `

#### swap()
```cpp
string buyer = "Money";
string seller = "Good";

cout << "Before swap, Buyer has " << buyer << " and Seller has " << seller << "\n";

buyer.swap(seller);

cout << "After swap, Buyer has " << buyer << " and Seller has " << seller << "\n";
```


### C-Style String
C-Style Strings are created with the `char` type instead of string.

The name comes from the C language.<br/>
Which, unlike many other programming languages, does not have a string type for easily creating string(values) variables.

Instead, You must use the `char` type and create an `array` of characters to make a **string** in C.

As C++ was developed as an extension of C.<br/>
It continued to support this way of creating strings in C++.
```cpp
string greeting = "Hello World!";
char greet[] = "Hello Coder!";

cout << greeting << "\n";
cout << greet;
```

### Next Chapter ⏭️

##### Happy Coding 💖