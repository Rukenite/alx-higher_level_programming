#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary:
        the_list = list(a_dictionary.keys())
        score = 0
        top_n = ""
        for i in the_list:
            if a_dictionary[i] > score:
                score = a_dictionary[i]
                top_n = i
        return top_n
