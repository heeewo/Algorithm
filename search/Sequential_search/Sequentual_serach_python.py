def SequentialSearch(nlist, item):
    pos = 0
    found = False

    while pos < len(nlist) and not found:
        if nlist[pos] == item:
            found = True
        else:
            pos = pos + 1

    return found


nlist = [4, 2, 9, 7, 1, 3]
print(SequentialSearch(nlist, 3))

