#include <stdio.h>

struct Emp
{
    char name[20];
    int age;
    int number;
    int sal;
};

int main()
{
    printf("Name \t Age \t PhoneNumber \t Salary \n");
    struct Emp e={"Chirag",24,1234567788,20000};
    printf("%s\t%d\t%d\t%d \n",e.name,e.age,e.number,e.sal);

    struct Emp h={"Arnav",31,1234567891,56000};
    printf("%s\t%d\t%d\t%d \n",h.name,h.age,h.number,h.sal);

     struct Emp j={"Shivam",45,8881101111,30500};
    printf("%s\t%d\t%d\t%d \n",j.name,j.age,j.number,j.sal);

    return 0;
}
