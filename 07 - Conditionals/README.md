## 07 - Conditionals

### if-else statements
We already know that C++ supports the usual logic conditions from mathematics

- Less than a < b
- Less than or Equal to a <= b
- Greater than a > b
- Greater than or Equal to a >= b
- Equal to a == b
- Not Equal to a != b

We can use these conditionals to perform different actions for different (values) decisions.

#### C++ has the following conditional statements:

- Use `if` to specify a block of code to be executed, if a specified condition is `true`.
```cpp
int x = 5;
int y = 7;

if (x > y) {
    cout << "X is greater than Y";
}
```

- Use `else` to specify a block of code to be executed if the same condition is `false`.
```cpp
int x = 5;
int y = 7;

if (x > y) {
    cout << "X is greater than Y";
} else {
    cout << "Y is greater than X";
}
```

- Use `else if` to specify a new condition to test, if the first condition is `false`.
```cpp
int x = 5;
int y = 7;

if (x > y) {
    cout << "X is greater than Y";
} else if (x == y){
    cout << "X and Y are identical";
} else {
    cout << "Y is greater than X";
}
```

### Ternary Operator
Ternary Operator is the replacement of simple if-else statement.

```cpp
int x = 5;
int y = 7;

string result = (x > y) ? "X is greater than Y" : "Y is greater than X";
cout << result;
```

> [!NOTE]\
> Syntax of Ternary operator
>
> (condition) ? `true` : `false`

### Switch Statement
Use the switch statement to select one of many code blocks to be executed.
- The switch expression is avaluated once.
- The value of the expression is compared with the value of each `case`
- If there is a match, the associated block of code is executed.
- The `break` and `default` keywords are optional.

```cpp
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
```

#### `Break` Keyword
When C++ reaches a `break` keyword, it breaks out of the switch block.

This will stop the execution of more code and case testing inside the block.

When a match is found, and the job is done, it's time for a break.<br/>
There is no need for more testing.

> [!NOTE]\
> A break can save a lot of execution time because it **ignores** the execution of all the rest of the code in the switch block.

#### `Default` Keyword
The `default` keyword specifies some code to run if there is no case match.

### Next Chapter ⏭️

##### Happy Coding 💖