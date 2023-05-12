#include <stdio.h>
// this is simple calculator program
int cal(float a,float b,int choice){
float result=0;
if(choice==1){
        result=a+b;
}
else if(choice==2){
        result=a-b;
}
else if (choice==3){
        result=a*b;
}
else if(choice==4){
	result=a/b;
}
else{
printf("unsupported operation \n");
}
return result;
}

// main program
int main(){
float a,b,result;
int choice;
printf("Enter Two Numbers: \n");
printf("first number: \n");
scanf("%f",&a);
printf("second number: \n");
scanf("%f",&b);
printf("Enter operation, 1:add, 2:substract, 3:multiplaction, 4:division \n");
scanf("%d", &choice);
result=cal(a,b,choice);
printf("based on operation result of two operands are: %f \n", result);
return 0;
}

