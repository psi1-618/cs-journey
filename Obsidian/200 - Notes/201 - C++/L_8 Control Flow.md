![[Pasted image 20260728154742.png]]

- **Conditional statements:**

   1. *If statement :* 
		 -  if (condition)
	      true_statement;
	      else
	      false_statement;
	      
		 - A semicolon can be used as a null statement where a statement is necessary for the code compilation but not for the programmer.
		 - if (nuclearCodesActivated()) **;**
		   // the semicolon acts as a null statement
		  blowUpTheWorld(); // and this line always gets executed!
		  - ==Normally the conditions of the if statement are evaluated at runtime but if we use constexpr in it then it will be evaluated at compile time and hence if its true then the else statement will never compile== 
		  - The compiler will go through that statement and flag if any errors but it will not instantiate stuff if its present in the else statement that is never going to be executed.
		  - **example** 
```
#'include <iostream>
int main(){
constexpr double gravity{9.8}
if constexpr (gravity == 9.8)
{std::cout<<"yes" }
else 
{std::cout<<"no"}
return 0;}
```


2. *Switch statements :* 
	- syntax : 
	  switch (cond statement)
	  {
	  case value_1:
	     result_1;
	     return;
	
	   case value_2:
	     result_2;
	     return;
	 
	  default:	
	     result_default;
	     return;
	
	  }
	  
	  - here, if the value of the cond statement matches with any of the values succeeding the "case" then that case's result is executed , otherwise the default is executed if present.
	- **imp:** we should use **break** instead of **return** as return will end the entire function ,however , break will just end the witch function and continue with the functions after switch.

> [!important]
> 	switch requires values known at compile time and doesn't work with floating point