4. C++ Bitwise Complement Operator

The bitwise complement operator is a unary operator (works on only one operand). It is denoted by ~ that changes binary digits 1 to 0 and 0 to 1.

Bitwise Complement operation in C++
Bitwise Complement
It is important to note that the bitwise complement of any integer N is equal to -(N + 1). For example,

Consider an integer 35. As per the rule, the bitwise complement of 35 should be -(35 + 1) = -36. Now, let's see if we get the correct answer or not.

35 = 00100011 (In Binary)

// Using bitwise complement operator
~ 00100011 
 __________
  11011100
In the above example, we get that the bitwise complement of 00100011 (35) is 11011100. Here, if we convert the result into decimal we get 220.

However, it is important to note that we cannot directly convert the result into decimal and get the desired output. This is because the binary result 11011100 is also equivalent to -36.

To understand this we first need to calculate the binary output of -36. We use 2's complement to calculate the binary of negative integers.

2's Complement

The 2's complement of a number N gives -N.

In binary arithmetic, 1's complement changes 0 to 1 and 1 to 0.

And, if we add 1 to the result of the 1's complement, we get the 2's complement of the original number. 

For example,

36 = 00100100 (In Binary)

1's Complement = 11011011 

2's Complement :   
11011011
 +     1
_________
11011100    


Here, we can see the 2's complement of 36 (i.e. -36) is 11011100. This value is equivalent to the bitwise complement of 35 that we have calculated in the previous section.

Hence, we can say that the bitwise complement of 35 = -36.

Example 4: Bitwise Complement
#include <iostream>

int main() {
    int num1 = 35;
    int num2 = -150;
    cout << "~(" << num1 << ") = " << (~num1) << endl;
    cout << "~(" << num2 << ") = " << (~num2) << endl;

    return 0;
}
Run Code
Output

~(35) = -36
~(-150) = 149
In the above example, we declared two integer variables num1 and num2, and initialized them with the values of 35 and -150 respectively.

We then computed their bitwise complement with the codes (~num1) and (~num2) respectively and displayed them on the screen.

The bitwise complement of 35 = - (35 + 1) = -36
i.e. ~35 = -36

The bitwise complement of -150 = - (-150 + 1) = - (-149) = 149
i.e. ~(-150) = 149
This is exactly what we got in the output.
