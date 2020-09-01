
def bubble_sort(array):

    holder = 0

    for j in range(len(array)-1):
        for i in range(len(array)-1):
            if(array[i+1] < array[i]):
                holder = array[i]
                array[i] = array[i+1]
                array[i+1] = holder
                

    return array


array = [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]

print(bubble_sort(array))
print(count)
