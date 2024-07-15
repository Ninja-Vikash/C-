## 09 - Arrays

### What is an Array?
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To declare, an array define the **variable type**, specify the name of the array followed by square **brackets** [ ] and specify the number of elements it should store.

```cpp
int arr[4] = {1, 2, 3, 4};      // Array of numbers

string names[4] = {"Vikash", "Suraj", "Kartik", "Ajay"};    // Array of strings

bool isReady[4] = {true, false, false, true};       // Array of booleans
```

#### Accessing the elements of an array
We can access the elements of an array using its index value.
```cpp
int arr[4] = {1, 2, 3, 4};

cout << arr[0];     // 1

string names[4] = {"Vikash", "Suraj", "Kartik", "Ajay"};

cout << names[0];     // Vikash

bool isReady[4] = {true, false, false, true};

cout << isReady[3];     // 1
```
> [!IMPORTANT]\
> Index value of elements of an array starts from 0\
> ```cpp
> int arr[4] = {1, 2, 3, 4};
>           //  0  1  2  3    are the index values
> ```

#### Manipulating an element of the array
```cpp
bool isReady[4] = {true, false, false, true};

isReady[3] = false;

cout << isReady[3];     // 0
```
> [!NOTE]\
> When we try to print a boolean value\
> Then it will print either 1 or 0\
> Instead of `true` and `false`
> `true` represented as 1 and `false` represented as 0.

### Looping in Array
We can loop through the array elements with the for loop.
```cpp
string names[4] = {"Vikash", "Suraj", "Kartik", "Ajay"};

for (int i = 0; i < 4; i++) {
    cout << names[i] << endl;
}


/*
OUTPUT:

Vikash
Suraj
Kartik
Ajay

*/
```

### Omit Array size
In C++, You don't have to specify the size of the array.<br/>
The compiler is smart enough to determine the size of the array based on the number of inserted values.

```cpp
string names[] = {"Vikash", "Suraj", "Kartik", "Ajay"};
```

### Omit elements on declaration
It is also possible to declare an array without specifying the elements on declaration, and add them later.

```cpp
int nums[5];

nums[0] = 2;
nums[1] = 4;
cout << nums[1];    // 4
```

### Array size
Get the size of an array<br/>
To get the size of an array, you can use the `sizeof()` operator.

```cpp
bool isReady[4] = {true, false, false, true};

cout << sizeof(isReady);    // 4
```
> [!NOTE]\
> `sizeof()` operator returns the size of a type in bytes
>
> Since, we have 4 bool values, and bool type is usually 1 bytes\
> Then 4 x 1 = 4 bytes

### Array length
To get the length of an array
```cpp
string names[4] = {"Vikash", "Suraj", "Kartik", "Ajay"};
int arrLen = sizeof(names) / sizeof(string);

cout << arrLen;
```

#### WAP to print all the values of an array
```cpp
int myNums[5] = {10, 20, 30, 40, 50};
int len = sizeof(myNums) / sizeof(int);

for (int i = 0; i < len; i++) {
    cout << myNums[i] << endl;
}
```





### Next Chapter ⏭️

##### Happy Coding 💖