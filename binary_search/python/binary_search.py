#------------------------------BINARY SEARCH --------------------------------#
#           Binary search, also known as half-interval search, is a search 	 #
#algorithm that finds the position of a target value within a sorted array	 #													 #
#----------------------------------------------------------------------------#

def binarySearch(l,x,startIndex=0,endIndex=None):
     #code to be able to search without providing start and end
    if(endIndex==None):
        endIndex=len(l)-1
        
    # base case is if a list contains only one element
    if(startIndex == endIndex):
        if(l[startIndex] == x):
            return startIndex
        else:
            return -1
    else:
        #divide the array into halves
        mid = ( startIndex + endIndex ) // 2
        if (l[mid] == x):
            return mid
        elif (l[mid] > x ):
            #left half
            return binarySearch(l,x,startIndex,mid - 1)
        elif (l[mid] < x):
            #right half
            return binarySearch(l,x,mid + 1,endIndex)
        
a = [1,4,67,99,456,789] # A sample array, can be anything

sizeoflist = len(a)

print(binarySearch(a,67,0,sizeoflist)) # searching the list for 67

print(binarySearch(a,99)) # searching the list for 99 without having to give start and end
