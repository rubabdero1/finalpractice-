#include <stdio.h>
#include <string.h>

typedef struct {
    char city[30];
    int zipcode;
    char state[50];
}address;
 
typedef struct{
    int rollno;
    char name[30];
    float cgpa;
    address a;
}student;
int main(){
    student s1;
    
    s1.rollno = 190;
    strcpy(s1.name,"ali raza");
    s1.cgpa = 3.62;

    strcpy(s1.a.city,"Karachi");
    s1.a.zipcode=7000;
    strcpy(s1.a.state,"WD");


    printf("Student rollno is : %d\n",s1.rollno);
    printf("name : %s\n",s1.name);
    printf("CGPA: %.2f\n",s1.cgpa);
    printf("City :%s\n",s1.a.city);
    printf("zipcode : %d\n",s1.a.zipcode);
    printf("state : %s\n",s1.a.state);

}
