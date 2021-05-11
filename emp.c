#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char empname[30];
    int empage;
    int empphn;
    float salary;
 
} Employee;
 
int main()
{
    int i, n=20;
 
    Employee employees[n];
 
    printf("Add and display Details of %d Employee  \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- ",i+1);
        printf(" Name of the employee : ");
        scanf("%s",employees[i].empname);
      
        printf("Age: ");
        scanf("%d",&employees[i].empage);
         printf("Phone No: ");
        scanf("%d",&employees[i].empphn);
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }

 
    for(i=0; i<n; i++){
 
        printf("Name : ");
        printf("%s ",employees[i].empname);
 
        printf("age : ");
        printf("%d ",employees[i].empage);
        printf("Phone no : ");
        printf("%d ",employees[i].empphn);
        printf("Salary : ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
