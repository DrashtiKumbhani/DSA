#include<stdio.h>
struct area
{
    int length;
    int breath;
};
int main()
{
    struct area rect = {10,20};
    struct area *prect = &rect;
    printf("\n length : %d",rect.length);
    printf("\n breath : %d",rect.breath);
    printf("\n area : %d",rect.breath*rect.length);
}
