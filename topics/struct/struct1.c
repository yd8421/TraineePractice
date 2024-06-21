#include<stdio.h>
 #include <string.h>
 #include<stdlib.h>


 struct student
 {
   int rollno;
   char name[10];
 };

 int main()
 {
   int i;
 //  struct student st[3];
   struct student *st;
   st = (struct student *) malloc(3* sizeof(struct student));
   printf("Enter Records of 3 students\n");
   for(i=0;i<3;i++)
   {
     printf("Enter Rollno: ");
     scanf("%d",&(st+i)->rollno);
     //scanf("%d",&st[i].rollno);
     printf("\nEnter Name: ");
     scanf("%s",(st+i)->name);
     //scanf("%s",st[i].name);
   }
   printf("\n\nStudent Information List:\n");

   for(i=0;i<3;i++)
   {
     printf("Rollno:%d, Name:%s\n",(st+i)->rollno,(st+i)->name);
     //printf("Rollno:%d, Name:%s\n",st[i].rollno,st[i].name);
   }


  return 0;
}
