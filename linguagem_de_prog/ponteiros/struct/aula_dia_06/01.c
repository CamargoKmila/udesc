#include <stdio.h>

struct player
{
    char name[40];
    float hp;

    char weapon[10];
    int ammo;
};

int main()
{
    struct player p1;

    p1.ammo = 30;

    printf("ammo count: %d\n", p1.ammo);

    return 0;
}
