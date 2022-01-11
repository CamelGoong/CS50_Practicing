# include <cs50.h>
# include <stdio.h>

int main(void)
{

    int age = get_int("What's your age\n");
    int days = age * 365;
    printf("you are a least %i days old.\n", days); // %i는 integer의 ,형식 연산자

}
