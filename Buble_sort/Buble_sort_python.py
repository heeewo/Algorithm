def BubbleSort(nlist):
    for i in range(len(nlist)):
        for j in range(len(nlist)-1, i, -1):
            if (nlinst[j] <  nlist[j-1]):
                Swap(nlist, j, j-1)


def Swap(nlist, x, y):
    temp = nlist[x]
    nlist[x] = nlist[y]
    nlist[y] = temp


nlist = [4, 2, 9, 7, 1, 3]
BubbleSort(nlist)
print(nlist)

