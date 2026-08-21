
- Blocks begin with a `{` symbol, end with a `}` symbol, with the statements to be executed being placed in between.
- The **namespace** used after "using" and before "std" for cout and cin is a keyword that allows us to use these two words only for this purpose through out the code.
-  **user defined namespace** also exists, syntax as follows :
```
  namespace NamespaceIdentifier
{
    // content of namespace here
}
``` 

- Here inside the curly bracket we define the func of the namespace, generally we use names with first letter capitalized to distinguish between namespace and class objects as we use the same syntax ,  **namespace_identifier :: func** .
- Identifiers have another property named _linkage_. An identifier’s **linkage** determines whether a declaration of that same identifier in a different scope refers to the same object (or function).
- Scope determines where declaration of a single identifier can be seen and used in the code. Linkage determines whether multiple declarations of the same identifier refer to the same object or not.
- While creating new variables , its better to declare in as smaller scope as possible.
- Global variables are declared outside of all functions
- Variables declared in namespace are also global variables.
- Global variables are created when the program starts (before `main()` begins execution), and destroyed when it ends. This is called **static duration**. Variables with _static duration_ are sometimes called **static variables**.
-  variables with static duration are zero-initialized by default.
```
- Program launched
```
```
 
    → OS loads the executable into memory
    → Global variables are allocated and initialized    ← happens HERE
    → main() begins execution
    → ... your program runs ...
    → main() returns
    → Global variables are destroyed
    → Program exits
```
- **constant global variables** can be initiated similar to local variables
- ```cpp
	const int g_x{value};  
	constexpr int g_w {value} ; 
```
- When we have a variable inside a nested block that has the same name as a variable in an outer block. The nested variable hides the global variable for its own scope.
- Similarly , the local variables can shadow global variables , and if you want to use the global variable instead of the local one , use the scope operator without any prefix ( ::name).
- **Linkage**  answers one question: **when the same name appears in multiple places, do they all refer to the same thing or different things?**
	- if nothing is specified then it is no linkage
	- if **static** keyword is used then it becomes internal linkage, ==**eg** : static int x {} ;==  // This is internal linkage where x means only this x whenever used in the entire file .
	- if **extern** keyword is used then it becomes external linkage which is where it means this specific variable throughout all files being compiled together and it tells the compiler that the variable being used is from some other file.

- Const and constexpr global variables have internal linkage by default (and thus don’t need the `static` keyword -- if it is used, it will be ignored).
- The use of the `static` keyword above is an example of a **storage class specifier**, which sets both the name’s linkage and its storage duration. The most commonly used `storage class specifiers` are `static`, `extern`, and `mutable`. The term `storage class specifier` is mostly used in technical documentations.
- If you want to define an uninitialized non-const global variable, do not use the extern keyword, otherwise C++ will think you’re trying to make a forward declaration for the variable.
- Only use `extern` for global variable forward declarations or const global variable definitions.  
- Do not use `extern` for non-const global variable definitions (they are implicitly `extern`).

```
// Global variable forward declarations (extern w/ no initializer):
extern int g_y;                 // forward declaration for non-constant global variable
extern const int g_y;           // forward declaration for const global variable
extern constexpr int g_y;       // not allowed: constexpr variables can't be forward declared

// External global variable definitions (no extern)
int g_x;                        // defines non-initialized external global variable (zero initialized by default)
int g_x { 1 };                  // defines initialized external global variable

// External const global variable definitions (extern w/ initializer)
extern const int g_x { 2 };     // defines initialized const external global variable
extern constexpr int g_x { 3 }; // defines initialized constexpr external global variable
```
- ==Scope determines where a variable is accessible. Duration determines when a variable is created and destroyed. Linkage determines whether the variable can be exported to another file or not.==

> [!failure]
> Dont use non const global variable because there are many problems related to it like as its being used in the entire program , it is being used and changed many ties at different places that can be hard to keep track of. 
> Also if we use multiple such variables then we cant predict which ones are initiated  first and which after that and in this if there are variable interdependent then it becomes a huge mess.
> 


> [!success] 
> If u have to use it anyways for constants like values of mathematical const we can just create a namespace.

- All of the extra work that must happen to setup, facilitate, and/or cleanup after some task (in this case, making a function call) is called **overhead**.
- **Inline functions :**
	- Earlier these functions were used when functions that are smaller and being used and called a lot . These functions directly puts the values of the arguments while compiling in the statements. But nowadays the compilers decide this themselves whether to make a func inline or not.
	- But now these funcs are used for declaring different functions having same names in different files.
	  **Eg:**  inline double pi() { return 3.14159; } // saving in file called pi.h....... and used as header files but 
	  #'include "pi.h" // will include a copy of pi() here
	  
> [!important] inline functions
> Disobey ODR (one definition rule )

