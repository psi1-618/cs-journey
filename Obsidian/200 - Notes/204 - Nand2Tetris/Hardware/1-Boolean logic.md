- A **NAND** gate is called a universal gate as any basic logic gate can be built using number of nand gates differently connected.
	1. **NOT gate** using nand gate is created by connecting both inputs of the nand gate to same signal.
	   ==Y =   A NAND A  =   NOT(A⋅A)  =  NOT A==
	2. **AND gate** is created by using the nand gate twice.
	   ==X  =  A NAND B  =  not(A.B)== 
	   ==Y  =  X NAND X  =  A.B==
	3. **OR gate** is created by using the nand gate twice and the de morgan's law 
	   ==¬(A∧B)≡(¬A)∨(¬B)==    // not(a AND b) is equal to (NOT a) OR (NOT b)
	   ==X  =  A NAND B  =  NOT(A.B)==
	   ==Y  =  X NAND X  =  A.B==
	   ==Z  =  Y NAND Y  =  NOT(Y.Y)  =  NOT Y==

- The XOR function—shorthand for ‘‘exclusive or’’—returns 1 when its two variables have opposing truth-values and 0 otherwise.
- A **multiplexor** has 3 inputs with 3rd being the selector , where if its 0 then the output is value of a else its value of b. The selector answers =="Which input should I send to the output?"==
- A **demultiplexor** is opposite of the above as  the value of the selector input determines which input to take as an input , where if its 0 then a is taken as input or if 1 then b. The selector answers ==Which output should receive the input?==
- A **A multi bit** operation is where the specific operation is applied to each and every n bits in the array .
- **Multi-Way Versions of Basic Gates** 
	- An n-way Or gate outputs 1 when at least one of its n bit inputs is 1, and 0 otherwise. Here is the 8-way variant of this gate
	- A **multiplexer (MUX)** is basically a **digital selector**. Where there are multiple input options but a selector bit will tell which one will be the output.
	- The number of bits required for the controller or selector depends on the number of ways or the number of inputs .
	- **Multi-Way/Multi-Bit Demultiplexor** also exits.