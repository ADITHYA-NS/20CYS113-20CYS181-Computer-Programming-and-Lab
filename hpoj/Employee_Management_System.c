#include <stdio.h>
enum EmpType{ fulltime , parttime};
union EmployeeDetails{
    struct Fulltime {
        float monthsal;
        float bonus;
    }ft;
     struct Parttime{
        float hrate;
        int numh;
    }pt;
};
    struct Emp{
    char name[50];
    int age;
    enum EmpType type;
    union EmployeeDetails ed;
};

int main() {
    int numemp,i;
    printf("Enter the number of employess:");
    scanf("%d",&numemp);
    struct Emp ep[numemp];
    int type1;
    for(i=0;i<numemp;i++){
        printf("Enter the name : ");
        scanf("%s",&ep[i].name);
        printf("Enter age : ");
        scanf("%d",&ep[i].age);
        printf("Enter the employee type (0 for fulltime, 1 for part time:) ");
        scanf("%d",&type1);
        if(type1==fulltime){
            ep[i].type=fulltime;
            printf("Enter monthly salary;");
            scanf("%f",&ep[i].ed.ft.monthsal);
            printf("Enter the bonus:");
            scanf("%f",&ep[i].ed.ft.bonus);
        }
        else if(type1==parttime){
            ep[i].type=parttime;
            printf("Enter hour rate;");
            scanf("%f",&ep[i].ed.pt.hrate);
            printf("Enter number of hours:");
            scanf("%d",&ep[i].ed.pt.numh);
        }
        else{
            printf("Invalid type entered! Setting default full time");
            ep[i].type=fulltime;
            printf("Enter monthly salary;");
            scanf("%f",&ep[i].ed.ft.monthsal);
            printf("Enter the bonus:");
            scanf("%f",&ep[i].ed.ft.bonus);
        }
    }
    int choice;
    printf("Enter 1 to Calculate the total monthly salary for all full-time employees\n");
    printf("Enter 2 to Calculate the total earnings for all part-time employees. \n");
    printf("Enter 3 to Display the details of all employees; \n");
    printf("Enter 4 to exit \n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: float sum=0.0;
        for(int i=0;i<numemp;i++){
            sum=sum+ep[i].ed.ft.monthsal;
        }
        printf("Total Monthly salary of all employees:%.2f \n",sum);
        break;
        case 2: float sum1=0.0;
        for(int i=0;i<numemp;i++){
            sum1+=ep[i].ed.pt.hrate*ep[i].ed.pt.numh;
        }
        printf("total earnings for all part-time employees:%.2f \n",sum1);
        break;
        case 3:
        for(i=0;i<numemp;i++){
            printf("Employee%d \n",i+1);
            printf("Name: %s \n",ep[i].name);
            printf("Age: %d \n",ep[i].age);
            if(ep[i].type==fulltime){
                printf("Type: FullTime \n");
                printf("Monthly salary:%.2f \n",ep[i].ed.ft.monthsal);
                printf("Bonus: %.2f \n",ep[i].ed.ft.bonus);
            }
            else{
                printf("Part time \n");
                printf("Hourly rate; %.2f \n",ep[i].ed.pt.hrate);
                printf("Number of hours:%d  \n",ep[i].ed.pt.numh);
            }
            break;
            case 4:
            printf("Bye !!");
            break;
            default:
            printf("Invalid Choice!!");	
        }
    }
    return 0;
}
