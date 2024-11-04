# include <stdio.h>

struct student{
    int rollno;
    char name[20];
    float marks;
}
int main(){
    struct student s1 = {1,"sujith",23.5}; // compile time initialization
    printf("%d,%c,%f",s1.rollno,s1.name,s1.marks);
    
    struct student s2; // object creation
    printf("enter the s2");  // run time initialization
    scanf("%d",&s1.rollno);
    scanf("%c",&s1.name);
    scanf("%f",&s1.marks);
    printf("%d,%c,%f",s1.rollno,s1.name,s1.marks);
    return 0;
}
    
