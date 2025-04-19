
    
s = input()
max_balanced_string = 0
L=0
R=0

l = []
str = ""
for  i in s:
    if  i == 'L':
        L += 1
        str += i
    
    else:
        R += 1
        str += i
        
           
    if(L == R):
        
        
