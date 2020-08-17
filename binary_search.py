""" 
Write a function that takes in a sorted array of integers as well as a target integer.
This function should use the binary search algorith to determine if the target integer is
contained in the array and should returns its index if it is, otherwise -1

Sample input
arrar = [0, 1, 21, 33, 45, 45, 61, 71] 
target = 33

Sample output
3
"""

import unittest

def find(array, target):

    first = 0
    last = len(array) - 1

    while last >= first:
        pivot = (last - first)//2 + first

        if array[pivot] == target:
            return pivot
        elif array[pivot] > target:
            last = pivot - 1
        else:
            first = pivot + 1

    return -1

array1 = [0, 1, 21, 33, 45, 45, 61, 71, 72, 73]
array = [1, 5, 23, 111]
target = 23

print(find(array, target))


