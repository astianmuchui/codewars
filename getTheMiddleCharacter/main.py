text = 'youtdj'
length = len(text)
def midChar():
    print("")
if length%2 == 0:
    half = length/2
    start_point = half-1
    end_Point = half
    print (text[int(start_point):int(end_Point+1)])
else:
    half = length/2
    char_pos = round(half,0)
    start_point = char_pos-1
    end_Point = len-char_pos
    print(text[int(start_point):int(end_Point)])         
    midChar()
