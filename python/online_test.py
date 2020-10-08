import sys,copy
def processArray(array):
    lst= []
    lst = copy.deepcopy(array)
    print(len(array))
    for i in range(0,len(lst)-1,1):
        if array[i]%2>0:
            if i+1<len(array)-1 and array[i+1]%2>0:
                array.remove(array[i])


    return len(array)   # change this appropriately, if necessary

def run():
    array = []
    for line in sys.stdin:
        intval = int(line)
        if intval < 0:
            break
        array.append(intval)
    newlen = processArray(array)
    for i in range(newlen):
        print(array[i])

if __name__ == '__main__':
    run()



