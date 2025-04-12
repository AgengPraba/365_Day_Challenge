# Write Number in Expanded Form
# You will be given a number and you will need to return it as a string in Expanded Form. For example:

#    12 --> "10 + 2"
#    45 --> "40 + 5"
# 70304 --> "70000 + 300 + 4"

def expanded_form(num):
    result = []
    bagi = 10
    
    for i in range(len(str(num))):
        sisa = num%bagi
        if sisa != 0:
            result.append(sisa)
        num = num - sisa
        bagi = bagi*10
    
    result = list(reversed(result))
    
    return " + ".join(map(str,result))