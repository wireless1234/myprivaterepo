#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    i = 0
    my_list_3 = []
    while i < list_length:
        try:
            my_list_3.append(my_list_1[i] / my_list_2[i])
        except TypeError:
            my_list_3.append(0)
            print("wrong type")
        except ZeroDivisionError:
            my_list_3.append(0)
            print("division by 0")
        except IndexError:
            my_list_3.append(0)
            print("out of range")
        finally:
            i += 1
    return my_list_3
