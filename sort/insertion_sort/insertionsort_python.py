def insertionSort(nlist):
    for i in range(len(nlist)):
        key = nlist[i]
        j = i-1
        while j >= 0 and nlist[j] > key:
            nlist[j+1] = nlist[j]
            j = j-1
            nlist[j+1] = key


nlist = [4, 2, 9, 7, 1, 3]
insertionSort(nlist)
print(nlist)
