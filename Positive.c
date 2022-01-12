# include <cs50.h>
# include <stdio.h>

int get_positive_int(void); //Prototype / 이 함수의 의미는 (void): 아무 입력도 받지 않으나, int를 반환하는 것

int main(void)
{
    int i = get_positive_int();
    printf("The Positive Integer we get is %i\n", i);

}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Positive Integer: ");

    }
    while(n < 1); // n이 1보다 작은 정수라면 계속 do를 반복. / do while의 경우에는 앞에 배운 while과는 달리, 일단 한번 실행하고 나서 조건을 확인함.
    return n;
}
