//Kevin O'Hare
//Embedded Systems Section 1
//Email: oharek8@students.rowan.edu
//Dependent Libraries: math.h

#include <math.h>

int math(int num1, int num2, char Operator)
/*Inputs are the First and Second Integers, as well as the desired operation*/
{
    switch(Operator) //A switch statement uses the Operator to decide which function to perform
    {
        case '+': return num1 + num2; //Adds Num1 and Num2
        case '-': return num1 - num2; //Subtracts Num2 from Num1
        case '*': return num1 * num2; //Multiplies Num1 by Num2
        case '/': return num1 / num2; //Divides Num1 by Num2
        case '%': return num1 % num2; //Modulo Divides Num1 by Num2
        case '<': return num1 << num2;//Binary Shifts Num1 to the Left by amount Num2
        case '>': return num1 >> num2;//Binary Shifts Num1 to the Right by amount Num2
        case '&': return num1 & num2; //Bitwise And's Num1 and Num2
        case '|': return num1 | num2; //Bitwise Or's Num1 and Num2
        case '^': return num1 ^ num2; //Bitwise Xor's Num1 and Num2
        case '~': return ~num1;       //Returns Binary inverse of Num1. Also known as the One's Complement
        default: return 0; //If unknown operator is entered, nothing is done
    }
}
