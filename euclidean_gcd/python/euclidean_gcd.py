#------------------------------EUCLIDIAN GCD -----------------------------------#
#                Euclid's algorithm, is an efficient method for computing them  # 
# greatest common divisor (GCD) of two numbers, the largest number that divides # 
# both of them without leaving a remainder algorithm that finds the position of #
# a target value within a sorted array	 									    #												    #
#-------------------------------------------------------------------------------#

def gcd(a,b):
    if (a == 0):
        return b;
    return gcd(b % a,a)

# taking inputs to find GCD

a = int(input())
b = int(input())

if(a>b):
    print(gcd(b,a))
else:
    print(gcd(a,b))