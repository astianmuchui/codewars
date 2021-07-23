n=12
m=48
def splitChocolate():
   print("")
if n*m<1:
    print("No chocolate to split")
else:
    area = n*m
    num_squares = area/1
    num_breaks = num_squares-1
    print(str(num_breaks)+" Breaks required")
    splitChocolate()