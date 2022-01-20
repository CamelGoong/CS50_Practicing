# include <cs50.h>
# include <stdio.h>

int main(int argc, string argv[]) 
{
    if (argc !=2) //입력인자의 갯수가 '파일이름', 그 뒤에 오는 단어인 '명령행 인자'의 2개라면 == 즉, 명령행 인자가 입력되었다면,
    {
        printf("missing command-line argument\n"); //command가 들어오지 않은 문제가 발생
        return 1;
    }
    printf("hello, %s\n", argv[1]); //argv[0]는 처음 입력하는 단어에 해당하는 파일이름인 './Exit이 저장됨. 따라서 그 뒤에 단어가 저장되는 곳은 argv[1]
    return 0; //문제가 없다는 의미
}
