#!/usr/bin/python3

def safe_print_division(a, b):
    """Returns the division of a by b."""
    try:
        divider = a / b
    except (TypeError, ZeroDivisionError):
        divider = None
    finally:
        print("Inside result: {}".format(divider))
    return (divider)
