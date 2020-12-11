import random


a = random.randint(35, 75)

print("No of hours = ", a)

n = 10

if a < 40:

    print("Salary connot be generated")

elif a == 40:

    print("total wage is = ", a*n)

elif a > 40 and a <= 60:

    overtime = a - 40

    regularhours = 40

    print("total wage is = ", 40*n + overtime * 1.5*n)

elif a > 60:

    extratime = a - 60

    print("total wage is = ", 700 + extratime*2*n)
