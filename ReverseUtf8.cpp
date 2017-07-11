#include <iostream>
#include <string>

// UTF-8:
// see https://en.wikipedia.org/wiki/UTF-8#Description
// byte 1: 0xxxxxxx	--> 1 byte
// byte 2: 110xxxxx --> 2 bytes
// byte 3: 1110xxxx --> 3 bytes
// byte 4: 11110xxx --> 4 bytes

// @todo: implement function reverse for unicode string
// @todo: now implement it in-place

// str is a null-terminated string
char* reverse(const char* str)
{
    return nullptr;    
}

int main ()
{
    std::string s(reverse("кот и кит"));
    std::cout << s;
    return 0;
}