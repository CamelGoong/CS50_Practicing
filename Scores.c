# include <cs50.h>
# include <stdio.h>

int main(void)
{
    int scores[3]; //3개짜리 원소를 가지는 배열을 만들겠다.

    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    printf("Average: %i\n",(scores[0] + scores[1] + scores[2]) / 3);
}
