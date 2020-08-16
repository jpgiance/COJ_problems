
# Reverse an integer assuming that the input is a 32-bit integer.
# If the reversed integer overflows, print -1 as the output
# Example 1:
# input: 123
# output: 321

# Example 2:
# input: -123
# output: -321

# Example 3:
# input: 120
# output: 21


import random
import math

def reverse_int(number):

    input = math.fabs(number)
    output = 0

    while input > 0:
        output = output*10 + input%10

        if output > 1<<32:
            return -1
        
        input = input // 10

    if number > 0:
        return int(output)
    else:
        return int(-output)



#n = random.randint(0, 999999999999)
x = 1111111119

print(reverse_int(x))








    


