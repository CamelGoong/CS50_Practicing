# include <cs50.h>
# include <stdio.h>

int main(int argc, string argv[]) //이렇게 코드를 작서하면, 사용자가 get_string() 함수를 기다린 후에 입력을 하는 식이 아니고, 명령 프롬프트에 입력을 할 수 있게 됨.
// main() 함수는 기본적으로 반환값을 가짐. 
// main은 0을 반환: 컴퓨터에 아무런 문제가 없다는 뜻

{
    if (argc == 2) //사용자가 입력한 인자의 갯수인 argc == 2개라면, 
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
      printf("hello, world\n");  // 프로그램을 실행할 때, 프로그램 이름 뒤에 ./Argv haegyun 이런식으로 단어(명령행 인자)를 입력하면, 그 단어는 argv라는 string[] 배열에 들어가게 됨.
                                // 이와 동시에 argc에는 단어의 갯수가 저장됨
    }
}
