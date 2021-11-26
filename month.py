#!/usr/bin/env python3

# Created by: Abdul Basit
# Created on: Nov 2021
# this program tells the name of the months 


def main():
    # this function tells the name of the months
    
    integer = int(input("Enter the number of a month (ex : 3 for march): "))
    
    if integer == 1:
        print("January")
        print("")
    elif integer == 2:
        print("February")
        print("")
    elif integer == 3:
        print("March")
        print("")
    elif integer == 4:
        print("April")
        print("")
    elif integer == 5:
        print("May")
        print("")
    elif integer == 6:
        print("June")
        print("")
    elif integer == 7:
        print("July")
        print("")
    elif integer == 8:
        print("August")
        print("")
    elif integer == 9:
        print("September")
        print("")
    elif integer == 10:
        print("October")
        print("")
    elif integer == 11:
        print("November")
        print("")
    elif integer == 12:
        print("December")
        print("")
    else:
        print("Invalid entry")
        print("")
    
    print("Done.")
if __name__ == "__main__":
    main()
