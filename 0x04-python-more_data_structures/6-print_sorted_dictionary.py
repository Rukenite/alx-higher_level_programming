#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    """
    A function that prints a dictionary by ordered keys
    """
    i = list(a_dictionary.keys())
    i.sort()
    for i in keys:
        print("{}: {}".format(i, a_dictionary[i]))
