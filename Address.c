# include <stdio.h>
int main(void)
{
    int n = 50;
    printf("%p\n", &n); // %p : 주소 형식연산자, &: 변수n이 메모리에 저장된 위치 반환하도록 하는 특수문자
    printf("%i\n", *&n); // *: 해당 메모리 주소로 가달라는 특수문
}
