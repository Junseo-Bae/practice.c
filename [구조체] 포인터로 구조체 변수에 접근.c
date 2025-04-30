#include <stdio.h>
#include <stdlib.h>

struct show {

    char name[10];
    int su;
    int price;
};

int main()
{
    struct show t = {"스마트폰", 3, 960};
    struct show *p;

    p = &t;

    printf("%s %d %d\n", t.name, t.su, t.price);
    printf("%s %d %d\n", (*p).name, (*p).su, (*p).price);
    printf("%s %d %d\n", p->name, p->su, p->price);

    return 0;
}
