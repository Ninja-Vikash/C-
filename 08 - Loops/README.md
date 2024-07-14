## 08 - Loops
### Loops in C++

Loops are execute a block of code as long as a specified condition is reached.

Loops are handy because they save time, reduce errors, and they make code more readable.

#### While Loop
The `while` loop loops through a block of code as long as a specified condition is `true`.
```cpp
// while loop syntax
while (condition) {
    // Code to be executed
}
```

#### WAP to print Hello World 5 times
```cpp
#include <iostream>
using namespace std;

int main () {
    int i = 0;
    while (i < 5) {
        cout << "Hello World!\n";
        i++;   // Increments value of iterator
    }
    return 0;
}
```
> [!IMPORTANT]\
> Do not forget to increase the variable used in the condition, otherwise the loop will never end

#### Do-While Loop
The `do-while` loop is a variant of the while loop.<br/>
**This loop will execute the code block once**, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

```cpp
// do-while loop syntax
do {
    // Code to be executed
}
while (condition);
```

To understand the do-while loop logic here is an example
```cpp
int i = 0;

do {
    cout << "Coding is fun!";
    i++;
}
while (i < 0);  // false
```
> [!NOTE]\
> The above code block executed once.\
> Then checks the condition and get the `false`, therefore the loop is terminated.
>
> `do-while` loop runs its code block without checking the condition is true or not

### For Loop
When you know exactly how many times you want to loop through a block of code, use the `for` loop instead of a `while` loop.

```cpp
// for loop syntax
for (statement 1; statement 2; statement 3) {
    // Code to be executed
}
```
> [!NOTE]\
> **Statement 1**: is executed (one time) before the execution of the code block.\
> **Statement 2**: defines the condition for executing the code block.\
> **Statement 3**: is executed (every time) after the code block has been executed.

#### WAP to print Hello World 5 times.
```cpp
#include <iostream>
using namespace std;

int main () {
    for (int i = 0; i < 5; i++) {
        cout << "Hello World!\n";
    }
    return 0;
}
```

### Nested Loops
It is also possible to place a loop inside another loop.<br/>
This is called a **Nested loop**.

The inner loop will be executed one time for each iteration of the outer loop.

To understand loop look at the pattern printing code
```cpp
for (int i = 0; i < 5; i++){
    for (int j = i; j < 5; j++) {
        cout << "*\t";
    }
    cout << "\n";
}

/*
OUTPUT:

*   *   *   *   *
*   *   *   *
*   *   *
*   *
*

*/
```

We can print another pattern as
```cpp
for (int i = 5; i >= 0; i--){
    for (int j = i; j < 5; j++) {
        cout << "*\t";
    }
    cout << "\n";
}

/*
OUTPUT:

*
*   *
*   *   *
*   *   *   *
*   *   *   *   *

*/
```

### Break and Continue
Break used to jump out of a switch statement.

The `break` statement can also be used to jump out a loop.
```cpp
for (int i = 0; i < 5; i++) {
    if (i == 3) {
        break;
    }
    cout << i << "\n";
}
```

The `continue` statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

```cpp
for (int i = 0; i < 5; i++) {
    if (i == 3) {
        continue;;
    }
    cout << i << "\n";
}
```

### Next Chapter ⏭️

##### Happy Coding 💖