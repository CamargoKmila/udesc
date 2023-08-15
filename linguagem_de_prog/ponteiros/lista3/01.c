// crie um programa que permita armazenar informção em um struct e mostre depois essa informação
#include <stdio.h>
#include <string.h>

struct player
{
    char name[40];
    float hp;

    char weapon[10];
    int ammo;
};

typedef char *str;

int main()
{
    struct player p1;

    p1.ammo = 30;
    strncpy(p1.name, "joao", 5);
    p1.hp = 100;
    strncpy(p1.weapon, "ak47", 5);

    printf("ammo count: %i\n", p1.ammo);
    printf("ammo count: %s\n", p1.name);
    printf("ammo count: %.1f\n", p1.hp);
    printf("ammo count: %s\n", p1.weapon);
    

    return 0;
}
