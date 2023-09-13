#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    list_key = list(a_dictionary.keys())

    for dic_v in list_key:
        if value == a_dictionary.get(dic_v):
            del a_dictionary[dic_v]

    return (a_dictionary)
