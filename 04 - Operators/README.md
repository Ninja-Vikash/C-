## 04 - Operators

Operators are used to perform operations on variables and values.

In C++, Operators like-
- Arithmetic Operator
- Assignment Operator
- Comparison Operator
- Logical Operator

### Arithmetic
Arithmetic operators are used to perform common mathematical operations.
```cpp
int num1 = 6;
int num2 = 8;

cout << num1 + num2 << "\n";            // Addition Operator
cout << num1 - num2 << "\n";            // Subtraction Operator
cout << num1 * num2 << "\n";            // Multiplication Operator
cout << num1 / num2 << "\n";            // Division Operator
cout << num1 % num2 << "\n";            // Modulas Operator
```

### Assignment
Assignment operators are used to assign values to variables.
```cpp
int num1;

num1 = 12;              // Assigns the value
cout << num1 << "\n";

num1 += 3;              // num1 = num1 + 3
cout << num1 << "\n";

num1 -= 5;              // num1 = num1 - 5
cout << num1 << "\n";

num1 *= 2;              // num1 = num1 * 2
cout << num1 << "\n";

num1 /= 4;              // num1 = num1 / 4
cout << num1 << "\n";

num1 &= 10;
cout << num1;
```

### Comparison
Comparison Operators are used to compare to variables and returns a boolean value as `true = 1` or `false = 0`

```cpp
int num1 = 3;
int num2 = 5;

cout << (num1 == num2);         // 0
cout << (num1 != num2);         // 1
cout << (num1 < num2);          // 1
cout << (num1 > num2);          // 0
cout << (num1 >= num2);         // 0 
cout << (num1 <= num2);         // 1
```

### Logical
Logical Operators are used to evaluate an expression and returns a boolean value
```cpp
int num1 = 5;
int num2 = 6;
int num3 = 5;

cout << ((num1 < num2) && (num2 > num3));       // 1
cout << ((num1 < num2) || (num2 < num3));       // 1
cout << (!(num1 > num2) && (num2 > num3));      // 1
```

> [!IMPORTANT]\
> For evaluate the final expression we use `Truth Table`
> 
> Truth Table for Logical AND`(&&)`
> |   AND   |   true   |   false   |
> | :---: |  :---:   |   :---:   |
> | **true**  |   true   |   false   |
> | **false** |   false   |   false   |
>
> Truth Table for Logical OR`(||)`
> |   OR   |   true   |   false   |
> | :---: |  :---:   |   :---:   |
> | **true**  |   true   |   true   |
> | **false** |   true   |   false   |
>
> **Order of Evaluation**\
> NOT `(!)` > AND `(&&)` > OR `(||)`