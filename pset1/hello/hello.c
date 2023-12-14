#include <stdio.h>
#include <cs50.h>

int main()
{
    string username = get_string("Type your username:\n");
    printf("hello, %s\n", username);
}
