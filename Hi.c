# include<stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%c %c %c\n", c1, c2, c3);
    printf("%i %i %i\n", (int) c1, (int) c2, (int) c3); //원래 ASCII 코드 같은 경우에는 문자들도 컴퓨터에서는 하나하나의 정수(숫자)와 대응됨.
                                                        //따라서, 이 정수들을 보여주도록 하는 것을 '형 변환(Casting)'이라고 함
    printf("%i %i %i\n", c1, c2, c3); //C언어는 그래도 똑똑해서, 이런식으로 해도 알아서 정수를 불러와줌.

}
