#include "calculator_operations.h"
#include<stdio.h>
int main()
{
    int choice;
    double input1,input2;
    double result;
    int res1;
    int in1,out;
    double triginput,trigoutput;
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int z=0;
    int n,ram=0;
    int year;
    printf("\nPlease select the required operation to be performed \n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Square Root\n");
    printf("6.Modulus\n");
    printf("7.Factorial\n");
    printf("8.Temperature\n");
    printf("9.Power\n");
    printf("10.log value\n");
    printf("11.log10 value\n");
    printf("12.Exponential\n");
    printf("13.To Find a number is even or odd\n");
    printf("14.Enter the year to know leap year or not \n");
    printf("15.Enter an integer to check whether it is prime or not \n"); 
    printf("16.Length Conversion\n");
    printf("\nEnter you choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\nEnter two number to add");
            scanf("%lf %lf",&input1,&input2);
            result = add(input1,input2);
            printf("%lf",result);
            break;

        case 2:
            printf("\nEnter two number to subtract");
            scanf("%lf %lf",&input1,&input2);
            result = subtract(input1,input2);
            printf("%lf",result);
            break;

        case 3:
            printf("\nEnter two number to multiply");
            scanf("%lf %lf",&input1,&input2);
            result = multiply(input1,input2);
            printf("%lf",result);
            break;

        case 4:
            printf("\nEnter two number to Divide");
            scanf("%lf %lf",&input1,&input2);
            result = divide(input1,input2);
            printf("%lf",result);
            break;

        case 5:
            printf("\nEnter a number for squareroot");
            scanf("%lf",&triginput);
            trigoutput =squareroot(triginput);
            printf("%lf",trigoutput);
            break;

        case 6:
            printf("\nEnter the operators to perform modulus operation");
            scanf("%d %d",a,b);
            result =modulo(a,b);
            printf("%d",result);
            break;


        case 7:
            printf("\nEnter a number for factorial");
            scanf("%d",&in1);
            out = fact(in1);
            printf("%d",out);
            break;

        case 8:
            temperature();
            break;
        case 9:
            printf("Enter the base number: ");
            scanf("%lf", &input1);
            printf("Enter the power raised: ");
            scanf("%lf",&input2);
            result=power(input1,input2);
            printf("%d\n",result);
            break;
        case 10:
            printf("Enter the number to find log value\n");
            scanf("%lf",&input1);
            result=logvalue(input1);
            printf("%lf",result);
            break;
        case 11:
            printf("Enter the number to find log10 value\n");
            scanf("%lf",&input1);
            result=log10value(input1);
            printf("%lf",result);
            break;
        case 12:
            printf("Enter the number to find Exponential value\n");
            scanf("%lf",&input1);
            result=exp(input1);
            printf("%lf",result);
            break;
        case 13:
            printf("Enter the number to find  even or odd\n");
            scanf("%d",&a);
            c=even_or_odd(a);
            if(c==0)
            {
            printf("Number is Even");
            break;
            }
            else
            {
            printf("Number is Odd");
            break;
            }
        case 14:
            
            printf("Enter any year : ");
            scanf("%d", &year);
            if(leap(year))
            {
            printf("\n%d is leap year",year);
            break;
            }
            else
            {
            printf("\n%d is not leap year",year);
            break;
            }
         case 15:
            
            printf("Enter an integer to check whether it is prime or not.\n");
            scanf("%d",&n);
 
             ram = prime(n);
 
             if (ram == 1)
             {
              printf("%d is prime.\n", n);
              break;
             }
             else
             {
              printf("%d is not prime.\n", n);
              break;
            }
            case 16:
            length();
            break;
            default :
            printf("Please choose valid choice to perform respective operation");

    }
}

   void temperature()
    {
        int choice;
        double result,input1;
        printf("choose the respective operation for different temperature conversions\n");
        printf("1.fahrenheit to celsius\n");
        printf("2.celsius to fahrenheit\n");
        printf("3.fahrenheit to kelvin\n");
        printf("4.kelvin to fahrenheit\n");
        printf("5.celsius to kelvin\n");
        printf("6.kelvin to celsius\n");
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
             printf("\nEnter  temp to convert fahrenheit into celsius");
             scanf("%lf",&input1);
             result=fahrenheit_to_celsius(input1);
             printf("%lf",result);
             break;

        case 2:
            printf("\nEnter  temp to convert celsius into fahrenheit");
            scanf("%lf",&input1);
            result=celsius_to_fahrenheit(input1);
            printf("%lf",result);
            break;
        case 3:
            printf("\nEnter  temp to convert fahrenheit into kelvin");
            scanf("%lf",&input1);
            result=fahrenheit_to_kelvin(input1);
            printf("%lf",result);
            break;
        case 4:
            printf("\nEnter  temp to convert kelvin into fahrenheit");
            scanf("%lf",&input1);
            result=kelvin_to_fahrenheit(input1);
            printf("%lf",result);
            break;
        case 5:
            printf("\nEnter  temp to convert celsius into kelvin");
            scanf("%lf",&input1);
            result=celsius_to_kelvin(input1);
            printf("%lf",result);
            break;
        case 6:
            printf("\nEnter  temp to convert kelvin into celsius");
            scanf("%lf",&input1);
            result=kelvin_to_celsius(input1);
            printf("%lf",result);
            break;
    }

    return 0;
}
void length()
    {
        int choice;
        double result,input1;
        printf("choose the respective operation for different length conversions\n");
        printf("1.kilometer to miles\n");
        printf("2.miles to kilometer\n");
        printf("3.kilometer to foot\n");
        printf("4.foot to kilometer\n");
        printf("5.miles to inches\n");
        printf("6.inches to miles\n");
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
             printf("\nEnter length to convert kilometer to miles");
             scanf("%lf",&input1);
             result=kilometer_to_miles(input1);
             printf("%lf",result);
             break;

        case 2:
            printf("\nEnter length to convert miles to kilometer");
            scanf("%lf",&input1);
            result=miles_to_kilometer(input1);
            printf("%lf",result);
            break;
        case 3:
            printf("\nEnter length to convert kilometer to foot");
            scanf("%lf",&input1);
            result=kilometer_to_foot(input1);
            printf("%lf",result);
            break;
        case 4:
            printf("\nEnter length to convert foot to kilometer");
            scanf("%lf",&input1);
            result=foot_to_kilometer(input1);
            printf("%lf",result);
            break;
        case 5:
            printf("\nEnter length to convert miles to inches");
            scanf("%lf",&input1);
            result=miles_to_inches(input1);
            printf("%lf",result);
            break;
        case 6:
            printf("\nEnter length to convert inches to miles");
            scanf("%lf",&input1);
            result=inches_to_miles(input1);
            printf("%lf",result);
            break;
    }

    return 0;
}




