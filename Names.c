# include <cs50.h>
# include <stdio.h>
# include <string.h>

int main(void)
{
    string names[4] = {"EMMA", "RODIGO", "BRIAN", "DAVID"};

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], "EMMA") == 0) // 지금같은 경우는 Numbers.c와 달리 string끼리의 비교이기 때문에 단순히 ==로 비교해서는 안됨. 왜냐면 c언어는 다른 언어와 다르게
                              // low-level부터 비교를 하기 때문에, 한글자 한글자씩을 비교해서 string의 일치 여부를 판단해야 함.
                              // 이를 위한 함수로는 strcmp : string campare이 별도로 있음.
                              // 두 문자열이 같으면 0을 반환함.
        {
            printf("Found\n");
            return 0; //성공의 의미
                      // 이것을 입려을 해야 Not found를 출력하지 않고, 제때에 main이 종료됨.
        }
    }
    printf("Not found\n");
    return 1;
}
