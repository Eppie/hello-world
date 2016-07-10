#!/usr/bin/python


def quicksort(lst):
    l = len(lst)
    if l <= 1:
        return lst
    pivot = lst[l // 2]
    equal = []
    lesser = []
    greater = []
    for e in lst:
        if e < pivot:
            lesser.append(e)
        elif e > pivot:
            greater.append(e)
        else:
            equal.append(e)
    if greater:
        greater = quicksort(greater)
    if lesser:
        lesser = quicksort(lesser)
    return lesser + equal + greater


lst = list(range(10, 0, -1))
print(lst)
print(quicksort(lst))
