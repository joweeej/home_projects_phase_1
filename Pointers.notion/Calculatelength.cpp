#include<iostream>
using namespace std;
int stringLength(const char* str){
    const char*ptr = str ;
    while(*ptr != '\0')//Is not null--has reached end of the last character
    {
       ptr++;
    }
    return ptr - str;//str initially points to the beggining of the string
    //ptr is initially set to str and the iterates through the string by charachter till it reaches null terminator (\0)
//ptr-str therefore calculates the length of the string by determinig the number of elements between the two pointers 
}
int main()
{


char myStr[]="Hello, World";

int length = stringLength(myStr);

cout<<"Length of the string: "<<length<<endl;













    return 0;
}