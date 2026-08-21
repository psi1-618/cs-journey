
# Lisp

- For defining things in lisp we use syntax : **(define size 2 )** , now the value 2 is associated with size.
- For arithmetic equations like addition and all , syntax : **(+ ch_1 ch_2)** 
- **“fully expand and then reduce”** evaluation method is known as normal-order evaluation
- **“evaluate the arguments and then apply”** method that the interpreter actually uses, which is called applicative-order evaluation.
- **Conditions / case analysis**	 
> [!example]
 (define (abs x) (cond ((> x 0) x) ((= x 0) 0) ((< x 0) (- x))))
 this is to define absolute of x
 **OR**
 (define (abs x) (cond ((< x 0) (- x)) (else x)))
 **OR**
 (define (abs x) (if (< x 0) (- x) x))

- Syntax of if statements : 
```
if (condition)
	(procedure if true)
	(procedure if false)
```
 