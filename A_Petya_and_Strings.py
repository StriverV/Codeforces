
presents1 = input()
presents2 = input()

presents1 = presents1.lower()
presents2 = presents2.lower()

if presents1 == presents2:
    print("0")
    
elif presents1 < presents2:
    print("-1")

elif presents1 > presents2:
    print("1")