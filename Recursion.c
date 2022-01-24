#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int h)
{
    if (h == 0)
    {
        return; // 무한반복 루프가 되면 안되니까, h가 0일 때, return해라.
    }
    draw(h-1);
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}
