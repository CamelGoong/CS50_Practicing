# include<stdio.h>

void cough(void); //이런 식으로 c를 속여서 int main(void)가 맨위에 오도록 할 수 있음 / 이 한 줄을 prototype이라고 함.

void cough1(int i);

int main(void)
{
    cough1(3);


}


void cough(void) // (void)는 입력을 받지 않겠다는 의미
{
    printf("cough\n");
}

void cough1(int n) // 지금은 i를 매개변수로 받고있음
{
    for(int i = 0; i < n; i++)
    {
        printf("cough\n");
    }
}
