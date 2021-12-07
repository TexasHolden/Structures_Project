#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

//object oriented languages can take advantage of classes, structures, and obviously objects. This is the class I made for this problem.
class isPalindrome {
    string s, r; //s is for the actually string, r is for the reverse string
public:
    void setString(string); //sets the string and makes the reverse string
    bool checkStrings() {return (s==r);} //checks the string
};
void isPalindrome::setString(string x){
    s = x;
    r = s;
    reverse(r.begin(), r.end()); 
}

int main() {
    isPalindrome s1; //creates the object "s1"
    s1.setString("level");
    cout << "Is the string a Palindrome?: ";
    if (s1.checkStrings()) cout << "Yes" << endl;
    else cout << "No" << endl;
}

//Concepts and Their Differences

//(Concept 1) C++ NEEDS a main, or what we'll call an entry point. Programs in c++ just need an entry point it can direct it around with function 
//      calls (and ect.) until main has ended.
//(Concept 2) C++ uses a compiler while python uses interpreters. Compilers take high level programs and convert them into machine code which is saved
//      as an executable on a disk and then the user can runt it as a.out.
//(Concept 3) C++ constantly uses types, it being a statically-typed language, making types a highly important part of C++. Everything (variables, function arguement, function return values)
//      need a type to be compiled. This is important for memory, for what type determines the amount of memory it needs allocated. 
