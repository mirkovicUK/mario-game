#include<stdio.h>
#include<cs50.h>

// functions to print block(#) & empty space respectively
void print_block(int n);
void print_space(int n);

int main(void)
{
// get user input with condition 1 < n < 8  
    int n;
    do
    {
        n = get_int("n: ");
    }
    while (n < 1 || n > 8);
    
// loop to call printing functions as needed to form shape on screen    
    for (int i = n; i > 0; i--)
    {
        print_space(i - 1);
        print_block(n - i + 1);
        print_space(2);
        print_block(n - i + 1);
        printf("\n");
    }
}

// 2 functions block/space print n amount of blocks on screen
void print_block(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    
}

void print_space(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
   
}

