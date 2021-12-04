#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct CString
{
    char * ptr;
} CString;

void returnCstring(const CString ctx) {
    printf("%s\n", ctx.ptr); 
}

// Pobranie długości ma być w czasie O(1)
int getSizeOfString(const CString ctx) {
    return strlen(ctx.ptr);
}

// Pobranie dowolnego znaku ma być w czasie O(1)
void getAnyChar(const CString ctx, unsigned int charNmb) {
    if (charNmb > strlen(ctx.ptr))
    {
        printf("Cstring deosn't have so many char.. Try lower number \n");
    } else  {
        printf("Given number represents: %c ",(ctx.ptr[charNmb-1]));
    }
}

// Zmiana dowolnego znaku ma być w czasie O(1)
void changeAnyChar(CString ctx, unsigned int swapNmb, char c) {
    (ctx.ptr[swapNmb]) = c; 
} 

// (zmieniamy tylko za pomocą funkcji z punktu powyżej)
CString* cstring_new(const char* str, unsigned int nmb, const char c)
{
    CString* ret = malloc(sizeof(CString));
    ret->ptr = str;

    return ret;
}


int main() {


    return 0;
}
