#include <stdio.h>
#include <stdlib.h>

typedef struct _player {
    int x;
    int y;
    int speed;
    int hasBow;
    char status[100];
} Player;

void attack(Player* pp)
{
    if(pp->hasBow == 0)
    {
        printf("활이 장착되지 않았습니다.");
        return;
    }
    printf("현재 캐릭터가 보고 있는 방향으로 활을 쐈습니다.");
}

int main()
{
    Player p;

    p.hasBow = 1;
    attack(&p);

    return 0;
}
