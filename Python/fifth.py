# problem 1
'''rain = True
if rain:
    print("Don't Go To School")
else:
    print("Go To School")'''

# problem 2

marks = int(input("Enter Your marks: "))  # Convert input to an integer

if marks>=80 and marks <=100:
    print("You Got A+")
elif marks>=70 and marks <=79:
    print("You Got A")
elif marks>=60 and marks <=69:
    print("You Got A-")
elif marks>=50 and marks <=59:
    print("You Got B")
elif marks>=40 and marks <=49:
    print("You Got C")
elif marks>=33 and marks <=39:
    print("You Got D")
else:
    print("You Failed! Try Next Time.")
