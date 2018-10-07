Ryan Durnan Lab3 Submission

The code for this lab implements numerous functions for calculating the sum/product of numbers
up to (and including) the upper limit n. Additionally, I examine an oddity using a float/double
in a for-loop.

Jagadish (TA) helped me figure out how to determine overflow in parts 4 and 5.

Part 1:
n = 1, sum = 1
n = 3, sum = 3
n = 5, sum = 15
n = 10, sum = 55

Part 2:
You can detect overflow in the process of computing the sum of consecutive numbers by asking if
the sum is negative. Given the design of two's complement binary addition, the sum eventually
overflows with an extra carry; consequently, the entire sum becomes negative.
The function in this part causes overflow when n = 256.

Part 3:
n = 1, sum = 1
n = 3, sum = 3
n = 5, sum = 15
n = 10, sum = 55

The function in this part causes overflow when n = 65536

Part 4:
n = 1, product = 1
n = 3, product = 6
n = 5, product = 120
n = 10, product = 3628800

You can detect overflow in the process of computing the product of consecutive numbers by
comparing the result of the function with the result of another function utilizing more precise
variable types. As soon as the two values no longer match, you know an overflow has occurred.
The function in this part causes overflow when n = 14.

Part 5:
n = 1, product = 1
n = 3, product = 6
n = 5, product = 120
n = 10, product = 3628800

To find overflow with the function in this part, another method was necessary. Using the 
isinf function in math.h determines if the set of operations returns an infine value. If the 
value returned by my function is infinite (as determined by isinf), then an overflow has occurred.
The function in this part causes overflow when n = 171.

Part 6:
The expected value of the function is 0. If the computations are exact, the function adds the
fraction 1/n to itself n times then subtracts 1. The sum of the fractions adds up to be 1 given 
the structure of function. The final difference returns 1-1, which is 0.
In reality, some values of n returned 0 as expected; however, there are some values that returned
decimals either greater than or less than 0. This is an issue with the precision of variable 
types. There exist fractions that binary values simply cannot represent exactly, though they can 
give very close approximations. As such, the function occaisionally subtracted 1 from a value 
greater than 1/less than 1, resulting the incorrect return values.

Part 7:
The code block in this part unexpectedly prints up to (and including) i = 4.4. The for-loop should 
terminate as soon as i = 4.4; evidently, that was not the case. This is another problem with type 
precision. The machine simply assigns a decimal point to i that is incorrectly rounded. With float
types, 4.4 is not necessaryily stored as 4.4; rather, it is stored as a value minutely less than 4.4.
Thus, the code block extends further than expected.

Part 8:
The code block in this part behaves exactly as it should. The for-loop terminates when it is 
supposed to, and i only prints up to (and including) i = 4.2. While double variables have to store
approxiamted values in the same manner as floats, doubles are still capable of rounding more accurately
to true values. As such, the for-loop was able to terminate at the right time.
