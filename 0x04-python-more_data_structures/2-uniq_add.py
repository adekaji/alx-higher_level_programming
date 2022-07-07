#!/usr/bin/python3
def uniq_add(my_list=[]):
    uniq_int_list = set(my_list)
    num = 0

    for i in uniq_int_list:
        num += i

    return (num)
