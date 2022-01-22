# include <cs50.h>
# include <stdio.h>

int main(void)
{
    int numbers[6] = {4, 8, 115, 16, 23, 42}; // 배열 안의 원소를 알때, 중괄호로 한번에 정의

    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == 50)
        {
            printf("Found\n");
        }
    }
    printf("Not found\n");
}
