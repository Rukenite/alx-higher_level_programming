#!/usr/bin/python3
def search_replace(my_list, search, replace):
    fresh_list = []
    for i in range(len(my_list)):
        if my_list[i] == search:
            fresh_list.append(replace)
        else:
            fresh_list.append(my_list[i])
    return fresh_list
