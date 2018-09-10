# Assignment
The assignment was to implement a math function with a variety of functions using a provided prototype.
# Summary of Code
The calculator I designed utilizes a switch function to perform the following functions:
  1. Addition
  2. Subtraction
  3. Multiplication
  4. Division
  5. Modulo Division
  6. Shift Left
  7. Shift Right
  8. And (Bitwise)
  9. Or (Bitwise)
  10. Xor (Bitwise)
  11. Inverse (Bitwise) <br/><br/>
After the calculation is resolved, the answer is returned as an integer.
# Functionality
The math function has three inputs: a first integer "num1", a second integer "num2", and a character "Operator". Num1 is the left operand, num2 is the right operand, and Operator determines the function performed using the two integers. When the Operator character is passed to the switch function, a mathematical function corresponding to the function is performed. For example:<br/>
`math(2, 5, '+')`<br/>
will add 2 and 5.<br/>
`2 + 5 = 7`
The result of this function is returned as an integer.
## Character Assignments
1. '+' Addition - Adds two integers
2. '-' Subtraction - Subtracts second integer from first integer
3. '*' Multiplication - Multiplies two integers
4. '/' Division - Divides first integer by second integer
5. '%' Modulo Division - Modulo Divides first integer by second integer
6. '<' Shift Left - Binary Shifts first integer to the left by n, n = Second Integer
7. '>' Shift Right - Binary Shifts first integer to the Right by n, n = Second Integer
8. '&' And - Binary Ands two integers
9. '|' Or - Binary Ors two integers
10. '^' Xor - Binary Xors two integers
11. '~' Invert - Binary inverts first integer (While the second integer is unused, one must still be provided)

# Troubleshooting
If using the function results in an error, there are two things you can check. First, make sure you are passing the variables in the right order. Passing a character through an integer port will result in an error. Second, make sure you are passing through the right data types. Mistkaing a float or decimal number for an integer, or a string for a character will result in a data mismatch, and could cause the program to crash.

# Closing Remarks
I hope this README has explained the functionality of the code to your liking. If you have any comments, questions, suggestions, or concerns, please feel free to email me at oharek8@students.rowan.edu, or message me on Slack.
