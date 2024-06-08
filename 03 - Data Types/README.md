## 03 - Data Types

### Basic data types in C++
In C++, we have data types which helps the machine to differentiate between type of data stored in the variable.

#### Numeric types
Use `int` when you need to store a whole number without decimals, like 35 or 1000, and `float` or `double` when you need a floating point number( with decimals ) like 9.99 or 3.14515

```cpp
int num1 = 1000;            // For storing int variable
cout << num1;

float num2 = 5.75;          // For storing float variable
cout << num2;

double num3 = 56.75557;     // For storing double variable
cout << num3;
```

### `float` vs `double`
The precision of `float` is only six or seven decimal digits, while `double` variable have a precision of about 15 digits.<br/>
Therefore it is safer to use `double` for most calculations.

#### Boolean types
A boolean data type is declared with `bool` keyword and can only take the values `true` or `false`.<br/>
When the value is returned, `true = 1` and `false = 0`

```cpp
bool isCodingFun = true;
bool isFishTasty = false;
```

> [!NOTE]\
> Boolean values are mostly used for conditional testing.

#### Character types
The `char` data type is used to store a *single* character.<br/>
The character must be surrounded by **single quotes**, like 'A' or 'c'

```cpp
char myGrade = 'A';
cout << myGrade;
```

#### String types
The `string` type is used to store a sequence of characters(text).<br/>
This is not a built-in type, but it behaves like one in its most basic usage.

string value must be surrounded by **double quotes**

```cpp
string greeting = "Hello!";
cout << greeting;
```

### Next Chapter ⏭️

##### Happy Coding 💖