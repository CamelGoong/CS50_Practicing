# include <cs50.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main(void)
{

    string s = get_string("Before:  ");
    printf("After: ");
    int n = strlen(s);

    /* 이 부분은 ASCII 문자에 character들이 숫자와 일대일로 대응되는 것을 고려해서 기계어에 가깝게 코드를 구현한 부분
    
    for(int i = 0; i < n; i++)
    {
        if((s[i] >= 'a') && (s[i] <= 'z')) //ASCII 문자에서의 숫자를 이용하는 것. 소문자 - 32  = 대문자
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);

        }
    }
    
    */

    for (int i = 0, n = strlen(s); i<n; i++)
    {
        printf("%c", toupper(s[i])); // <ctype.h>에서 가져온 함수를 사용, toupper(): 소문자를 대문자로 변환
    }
    printf("\n");
}
