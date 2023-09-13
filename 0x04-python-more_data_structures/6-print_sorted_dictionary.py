#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    keyz = list(a_dictionary.keyz())
    keyz.sort()
    for key in keyz:
        print("{}: {}".format(key, a_dictionary[key]))
