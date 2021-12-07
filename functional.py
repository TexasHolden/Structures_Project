#the function that checks in one line of code if the given string is equal to itself reversed, then returns "True" or "False"
def isPalindrome(s):
    return s == s[::-1]

s = "malayalam"
print("Is String a Palidrome?:", isPalindrome(s)) #also in one line of code we do many things. First, while we print our statement, we make a function
#call to isPalindrome(s), returning either "True" or "False". This print statemant is meant to answer the user's question.  

#Concepts and Their Differences

#(Concept 1) Unlike the c++ code, main is no where in sight. This is because python doesn't need one, for the Python interpreter from the top of the
#   file unless a specific function is defined. 
#(Concept 2) Python doesn't have a compiler like c++. Instead, is uses an application called an interpreter. The interpreter compiles and executes the 
#   code without storing the machine code being created.
#(Concept 3) Python doesn't use types because it's highly dynamic. The Interpreter can't figure out the type of anything without executing the
#   program, which defeats the purpose of Python being highly dynamic.
