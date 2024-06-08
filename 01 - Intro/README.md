## 01 - C++ Intro

### Explanation of the firstprogram.cpp
```cpp
// firstprogram.cpp

#include<iostream>                    // Header file
using namespace std;                  // We can use names for object and variable from standard library
                                      // Blank line will be ignored
int main(){                           // This is a main() function, Any code inside its curly brackets `{}` will be executed.
    cout << "Hello World!";           // Printing values
    return 0;                         // Ends the main() function
}

// Output
// Hello World!
```
> [!IMPORTANT]\
> Every C++ statement ends with semi-colon `;`

***

### Multiline output
When we try to print output in a new line using another `cout`
```cpp
#include<iostream>
using namespace std;

int main(){
    cout << "Hello World!";
    cout << "I am learning C++";
    return 0;
}

// Output
// Hello World!I am learning C++
```

Lets try this 
```cpp
#include<iostream>
using namespace std;

int main(){
    cout << "Hello World!\n";           // Escape sequence character for new line
    cout << "I am learning C++";
    return 0;
}

// Output
// Hello World!
// I am learning C++
```

Another way to insert new line
```cpp
#include<iostream>
using namespace std;

int main(){
    cout << "Hello World!" << endl ;           // Using a manipulator
    cout << "I am learning C++";
    return 0;
}

// Output
// Hello World!
// I am learning C++
```

***

### Escape Sequence

Escape sequence are generally used with strings to add or manipulate string with special keys.

|  Escape Sequence | Description |
| :---             | :---        |
| \n |  Inserts a new line |
| \t | Creates a horizontal tab |
| \\\ | Inserts a backslash character |
| \\" | Inserts a double quote character |

***

### Comments

Comments can be used to explain C++ code, and to make it more readable.<br/>
It can also be used to prevent execution when testing alternative code.<br/>
Comments can be **Singled-Lined** or **Multi-Lined**
- Single Line comment
    ```cpp
    // Single line comment
    ```
- Multi-line comment
    ```cpp
    /*
      This is
      multi-line
      comment
    */
    ```

### Next Chapter ⏭️

##### Happy Coding 💖