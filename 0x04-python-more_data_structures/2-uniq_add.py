#!/usr/bin/python3
def uniq_add(my_list=[]):
    """
    A function that adds all unique
    integers in a list (only once for each integer)
    """
    fresh_list = []
    sum = 0
    for n in my_list:
        if n not in fresh_list:
            sum += n
            fresh_list.append(n)
    return sum
