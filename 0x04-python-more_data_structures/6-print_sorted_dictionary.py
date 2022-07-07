#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    o_list = list(a_dictionary.keys())
    o_list.sort()
    for i in o_list:
        print("{}: {}".format(i, a_dictionary.get(i)))
