# include <cs50.h>
# include <stdio.h>

//const int N = 3; // 상수 : 3을 담은 변수 N을 만들고 싶지만, 그 값이 변하지는 않게 설정, 대문자로 변수명을 적는 것은 그냥 관
//전역변수, 함수 밖에서 설정하는 것

float average(int length, int array[]);
//밑에서 정의한 average() 함수를 여기 사용했다는 것을 해줘야됨. 그래야지 멍청한 c언어가 알아들을 수 있음
//;세미콜론으로 끝내는거 까먹지 말기

int main(void)
{
    int n = get_int("Number of scores: ");

    int scores[n]; //크기가 n인 배열을 설정

    for(int i = 0; i <n; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }


    printf("Average: %.2f\n",average(n,scores));
}

float average(int length, int array[]) //length와 array를 input으로 받아서 float을 output으로 반환하는 함수
{
    int sum = 0;
    for(int i = 0; i < length; i ++)
    {
        sum += array[i];

    }
    return (float)sum / length; //int / int를 하면 int가 결과로 나옴, float이 나올 수 없음
}
