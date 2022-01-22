# include <cs50.h>
# include <stdio.h>
# include <string.h>

typedef struct
{
    string name;
    string number;
}
person;
 // 새로운 타입을 정의
 // person이라는 새로운 자료형을 만든 것이고, 그 안에는 string datatype의 name과 number라는 구성요소가 있음.

int main(void)
{
    person people[4]; // person이라는 자료형의 people이라는 배열 선언
    
    people[0].name = "EMMA";
    people[0].number = "617-555-0100";

    people[1].name = "RODRIGO";
    people[1].number = "617-555-0101";
    
    people[2].name = "BRIAN";
    people[2].number = "617-555-0102";
    
    people[3].name = "DAVID";
    people[3].number = "617-555-0103";

    // string names[4] = {"EMMA", "RODIGO", "BRIAN", "DAVID"};
    // string numbers[4] = {"617-555-0100", "617-555-0101", "617-555-0102", "617-555-0103"};

    for (int i = 0; i <4; i++)
    {
        if (strcmp(people[i].name, "EMMA") == 0)
        {
            printf("%s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
