#include <stdio.h>
#include <string.h>
typedef struct {
    int id;
    char ward[30];

struct{
    char name[30];
    int age;
   
}patientinfo;
}hospitalrecord;


int main(){
    hospitalrecord h1;
     hospitalrecord *ptr = &h1;

     ptr->id=2;
     strcpy(ptr->ward,"ICU");
     strcpy(ptr->patientinfo.name,"ali");
     ptr->patientinfo.age=20;


     printf("id:%d\n",ptr->id);
     printf("ward : %s\n",ptr->ward);
     printf("name : %s\n",ptr->patientinfo.name);
     printf("age : %d\n",ptr->patientinfo.age); 
}
