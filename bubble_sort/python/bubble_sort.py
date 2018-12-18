#------------------------------BUBBLE SORT -------------------------------------#
#                is a simple sorting algorithm that repeatedly steps through    #
#the list to be sorted, compares each pair of adjacent items and swaps them if  #
#they are in the wrong order.   												# 
#-------------------------------------------------------------------------------#

#function taking array as an input 
def bubbleSort(a):
    for i in range(len(a)):
        for j in range(len(a) - i -1):
        
            if (a[j] > a[j+1]) :
                a[j], a[j+1] = a[j+1],a[j]
    return (a)
    
#driver code
a = [int(x) for x in input().split()]
print("sorted list:")
print(bubbleSort(a))
