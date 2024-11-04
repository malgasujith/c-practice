# include <stdio.h>

struct student{
    int rollno;
    char name[20];
    float marks;
};
int main(){
    struct  student S;
    struct student *ptr = &S;
    printf("enetr the s array elements");
    scanf("%d", &ptr->rollno);
    scanf("%s", ptr->name);  
    scanf("%f", &ptr->marks);
    printf("%d,%s,%f",ptr->rollno,ptr->name,ptr->marks);
    return 0;
}

