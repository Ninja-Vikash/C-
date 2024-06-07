## 02 - Variables and User Input

### C++ Variables
Variables are like containers for storing data values.<br/>
In C++, there are different types of variables( defined with different keywords )

- **int** - stores integers ( whole numbers ), without decimals<br/>
- **float** - stores floating point numbers, with decimals. Sufficient for storing 6-7 decimal digit.<br/>
- **double** - stores floating point numbers, with decimals. Sufficient for storing 15 decimal digit.<br/>
- **char** - stores single chracters. char values are surrounded by single quotes.<br/>
- **string** - stores text. string values are surrounded by double quotes.<br/>
- **bool** - stores values either `true` or `false`.

### Declaring or Creating variable
We can declare a variable by using the syntax below
```cpp
type variableName = value;
int     myNum     =   20 ;
```

### Difference between declaration and assigning variable
```cpp
int myNum;      // Declaration part
myNum = 20;     // Assigning part

// We can re-assign the variable again and fourth

myNum = 21;
cout << myNum;

// Output
// 21
```

### Declaration method for multiple variable of the same type
```cpp
int x = 4, y = 5, z = 6;
cout << x << endl;
cout << y << endl;
cout << z ;
```
> [!NOTE]\
> We can assign the same value to the multiple variable in one line
> ```cpp
> int x, y, z;
> x = y = z = 7;
> ```

### C++ Identifiers
All C++ variables must be identified with unique names.<br/>
These unique names are called **Identifiers**.

Identifiers can be **short** names ( like x and y ) or more **descriptive** names ( age, sum, totalVolume )

> [!NOTE]\
> It is recommended to use descriptive names in order to create understandable and maintainable code.

### Rules for naming variables

- Names can contain **letters**, **digits** and **underscores**.
- Names must begin with a **letter** or an **underscore** ( `_` ).
- Names are **case-sensitive** ( myVar and myvar are different )
- Names cannot contain **whitespaces** or special characters like `!`, `#`, `%` etc.
- Reserved words ( like C++ keywords, such as `int` ) cannot be used as names.

### Constants

When you do not want others ( or yourself ) to change existing variable values, use the `const` keyword.

This will declare the variable as `constant`, which means **unchangeable** and **read-only**. 
```cpp
const int myNum = 20;

myNum = 21;     // Error
```
> [!WARNING]\
> We cannot re-assign any const variable\
> Whenever you use const variable it must be assigned with value.
> ```cpp
> const int age;
> age = 20;         // Error
> ```

***

### User Input

We have already learnt that `cout` is used to output( print ) values.<br/>
Now we will use `cin` to get user input.

`cin` is a predefined variable that reads data from the keyword with the extraction operator >>

```cpp
int x;
cout << "Type a number : ";
cin >> x;
cout << "Your number is : " << x;
```

### Next Chapter ⏭️

##### Happy Coding 💖