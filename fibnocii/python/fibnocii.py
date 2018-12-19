
def fibo():
    num1,num2,into,i =0,1,0,0
    into=int(input("Enter the limit for the number of output from the series:- "))
    while(i<into):
        print(" num ",i+1,": ",num1+num2," ")

        num1=num1+num2;       #   moving to the next number by swap
        num2=num1-num2;
        num1=num1-num2;
        num2=num1+num2;       # next value updated
        i=i+1

def main():
    fibo()

if __name__ =='__main__':
    main()
