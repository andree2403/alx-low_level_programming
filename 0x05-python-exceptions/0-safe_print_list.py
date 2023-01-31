#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    n = 0
    i = x - 1
    for j in range(0, i + 1):
        try:
            print("{:d}".format(my_list[j]), end='')
            n += 1
        except IndexError:
            break
    print()
    return n
