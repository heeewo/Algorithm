def SelectionSort(nlist):
    for i in range(len(nlist)):
        minPos = getMinPos(nlist, i)
        temp = nlist[minPos]
        nlist[minPos] = nlist[i]
        nlist[i] = temp


def getMinPos(nlist, start):
    minPos = start
    for i in range(start+1, len(nlist)):
        if nlist[i] < nlist[minPos]:
            minPos = i
    return minPos


nlist = [4, 2, 9, 7, 1, 3]
SelectionSort(nlist)
print(nlist)

