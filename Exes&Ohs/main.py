"""
check to see if a string has the same number of x's and o's.
"""
word = ""
resultX = word.find('x')
if (word.find('x') != -1):
    count_x = word.count('x')
else:
    count_x = 0    
if (word.find('o') != -1 ):
    count_o = word.count('o')
else:
    count_o = 0    
if((count_x == 0) and (count_o == 0) ):
    print("The letters are equally appearing, zero")
        
if (count_o == count_x):
    print("The letters appear equally")        
else:
    print("The letters do not appear equally")
    