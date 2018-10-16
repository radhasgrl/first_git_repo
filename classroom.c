#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() {
/*
 1-[to find the area and perimeter of a rectangle]

    float l,b,A,P;
    printf("Enter the length:");
    scanf("%f",&l);
    printf("Enter the breadth:");
    scanf("%f",&b);
    A = l*b;
    P = 2*(l+b);
    printf("The area of the rectangle is %.2f.\nThe perimeter of rectangle is %.2f.",A,P);

2-[to convert temperature from celsius to fahrenheit]

    float C,F;
    printf("Enter temperature in celsius:");
    scanf("%f",&C);
    F = (9/5.0*C)+32;
    printf("The temperature in fahrenheit is %f.",F);

3-[to swap to values using third variable]

    int a,b,Z;
    printf("Enter the value of a & b:\n");
    scanf("%d %d",&a,&b);
    Z = a;
    a = b;
    b = Z;
    printf("After swaping the values a and b are %d and %d.",a,b);

4-[to swap two numbers without using third variable]

    int a,b;
    printf("Enter the two values:\n");
    scanf("%d%d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swaping the values of a and b are %d and %d.",a,b);

5-[to swap two numbers without using third variable and arithmetic operators]

    int a,b;
    printf("Enter the two values:\n");
    scanf("%d%d",&a,&b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("After swaping the values of a and b are %d and %d.",a,b);

6-[to find the area of a triangle by Heron's formula']

    double a,b,c,s,area;
    printf("enter the values of a,b,c respectively:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    s = (a+b+c)/2;
    area =  sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is %lf.",area);

7-[to calculate the gross salary of an employee where DA is 60% of basic salary and HRA is 40% of basic salary.]

    float DA,HRA,basic,gross_salary;
    printf("Enter the basic salary:");
    scanf("%f",&basic);
    printf("Enter the DA and HRA respectively:\n");
    scanf("%f%f",&DA,&HRA);
    DA = 0.06*basic;
    HRA = 0.04*basic;
    gross_salary = DA + HRA + basic;
    printf("The gross salary of the employee is %.3f.",gross_salary);

8-[to check any number is even or not]

    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("%d is even.\n",n);
    }
    if (n%2!=0)
    {
        printf("%d is odd.\n",n);
    }

9-[to check the no. is odd or not .If it is odd then print the no. (3times of number +1) of the current no. otherwise (1/2times-1) of the current no.]

    int n;
    printf("Enter the no.:");
    scanf("%d",&n);
    if (n%2!=0)
    {
        printf("%d",3*n+1);
    }
    else
    {
        printf("%d",n/2-1);
    }

10-[to check the no. is positive or negative]

    int n;
    printf("enter the no.:");
    scanf("%d",&n);
    if (n > 0)
    {
        printf("%d is positive.",n);
    }
    else if (n == 0)
    {
        printf("%d is neither positive nor negative.",n);
    }
    if (n < 0)
    {
        printf("%d is negative.",n);
    }

11-[to check any year is leap year or not]
   >>>>>[There is a leap year every year whose number is perfectly divisible by 4 -except for years which are
         both divisible by 100 and not divisible by 400]

    int y;
    printf("Enter the year:");
    scanf("%d", &y);
    if (y%100 == 0)
    {
        if (y % 400 == 0)
            printf("The year %d is a leap year.\n", y);
        else
            printf("The year %d is not a leap year.\n", y);
    }
    else
    {
        if (y%4 == 0)
            printf("The year %d is a leap year.\n",y);
        else
            printf("The year %d is not a leap year\n.",y);
    }

12-[to find the greatest number among the three numbers]

 (1)-[using nested if]

    int a,b,c;
    printf("Enter the numbers a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a > b)
    {
        if (a > c)
            printf("%d is greatest.",a);
        else
            printf("%d is greatest.",c);
    }
    else
    {
        if (b > c)
            printf("%d is greatest.",b);
        else
            printf("%d is greatest.",c);
    }

 (2)-[using else if ladder]

    int a,b,c;
    printf("Enter the numbers a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
        printf("%d is greatest.",a);
    else if (b>a && b>c)
        printf("%d is greatest.",b);
    else
        printf("%d is greatest.",c);

13-[to check entered character is vowel or consonant]

    char ch;
    int lower ,upper;
    printf("Enter the character:");
    scanf("%c",&ch);
    lower = ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    upper = ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U';
    if (lower || upper)
        printf("Vowel");
    else
        printf("Consonant");

14-[to check entered character is alphabet or not]

    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90 || ch>=97 && ch<=122)
    printf("Entered character is an alphabet");
    else
    printf("Entered character is not an alphabet");

15-[to convert uppercase letter to lowercase letter and vice versa without using built-in function]

    char ch;
    printf("Enter the character:");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        ch = ch + 32;
        printf("Converted character is %c.", ch);
    }
    else if (ch >= 97 && ch <= 122)
    {
        ch = ch - 32;
        printf("Converted character is %c.", ch);
    }
    else
    {
        printf("Entered character is not an alphabet.");
    }

16-[to find all roots of a quadratic equation where coefficients entered by the user]

    float a, b, c, D, x1, x2, imag1, imag2, real;
    printf("Enter coefficient of quadratic equation:\n");
    scanf("%f%f%f", &a, &b, &c);
    D = b * b - 4*a*c;
    if (D == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("%f and %f are real and equal roots of the equation.", x1, x2);
    }
    else if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("%f and %f are real and unequal roots of the equation.", x1, x2);
    }
    else
    {
        real = -b/(2*a);
        imag1 = sqrt(-D)/(2*a);
        imag2 = imag1;
        printf("x1 = %f + %f\nx2 = %f - %f",real,imag1,real,imag2);
    }

17-[to print the grade based on following condition ,if the percentage of 5 subjects' marks is:-
    percentage >= 90        --  'A' grade
    80 >= percentage < 90   --  'B' grade
    70 >= percentage < 80   --  'C' grade
    60 >= percentage < 70   --  'D' grade
    percentage <= 60        --  'FAIL'

    float P,C,M,E,CS,total,percentage;
    printf("Enter the marks:\n");
    scanf("%f%f%f%f%f",&P,&C,&M,&E,&CS);
    total = P+C+M+E+CS;
    percentage = total/5.0;
    printf("The total marks of the student are %f and the percentage is %.2f.\n",total,percentage);
    if (percentage > 60)
    {
        if (percentage >= 90.0)
            printf("'A' grade");
        else if (percentage >= 80.0 && percentage < 90.0)
            printf("'B' grade");
        else if (percentage >= 70.0 && percentage < 80.0)
            printf("'C' grade");
        else if (percentage >= 60.0 && percentage < 70.0)
            printf("'D' grade");
    }
    else
        printf("FAILED!!! Better luck next time.");

18-[For an organisation, ask an employee his/her gender (M/F), salary,marrital status (M/U) and age ,then calculate
    his/her bonus based on the conditions:-
  1) if employee is female then bonus is 20%
  2) if employee is male, unmarried and age between 20-40, bonus is 15%
  3) if employee is male, married and age between 40-60, bonus is 10%
    Also calculate gross salary. {gross salary = salary + bonus}

    char g,m_s;
    double GS,bonus;
    int sal,age;
    printf("Enter the gender(m/f):\n");
    scanf("%c",&g);
    printf("Enter the salary and age:\n");
    scanf("%d%d",&sal,&age);

    if (g=='f')
        bonus=0.20*sal;
    else
    {   printf("Enter the marital status(y/n):\n");
        scanf(" %c",&m_s);        //char has only 1 bit space memory that's why it takes input only once
                                  //use space before %c to take the input again as it clears the buffer (previous input memory)
        if (m_s=='y')
        {
            if (age>=40)
            {
                if (age<60)
                    bonus = 0.10*sal;
            }


        }
    else
        {
            if (age>=20)
            {
                if (age<40)
                    bonus = 0.15*sal;
            }

        }
    }
    GS = sal + bonus;
    printf("The gross salary of the employee is %.2lf",GS);

19-[to simulate the calculator]

    char operator;
    double a,b,out;
    printf("Enter the operator(+,-,*,/): ");
    scanf("%c", &operator);
    printf("Enter two numbers:\n");
    scanf("%lf%lf",&a,&b);

    switch (operator)
    {
        case '+':out = a+b;
            printf("Sum = %lf",out);     break;
        case '-':out = a-b;
            printf("Subtraction = %lf",out);     break;
        case '*':out = a*b;
            printf("Product = %lf",out);     break;
        case '/':out = a/b;
            printf("Division = %lf",out);    break;
        default:printf("Operator is not correct");
    }

20-[menu driven program to calculate the area of different geometrical figures]

    int n;
    float a,b,area;
    printf("Press the symbol code:\n1-Circle\n2-Rectangle\n3-Square\n4-Triangle\n");
    scanf("%d",&n);
    switch (n)
    {
        case 1:printf("enter the radius:");
            scanf("%f",&a);
            area = 3.14*a*a;
            break;
        case 2:printf("enter the length and breadth:");
            scanf("%f %f",&a, &b);
            area = a*b;
            break;
        case 3:printf("enter the side:");
            scanf("%f",&a);
            area = a*a;
            break;
        case 4:printf("enter the base and height:");
            scanf("%f %f",&a, &b);
            area = (1.0/2.0)*a*b;
            break;
        default:printf("Please give the correct dimensions.");
    }
    printf("Area of the given geometrical figure is %.2f",area);

21-[to print 1 to 10 using goto statement]

    int a=1;
    int n;
    printf("Enter the maximum value of n upto which to have to print:");
    scanf("%d",&n);
    BEGIN:
    printf(" %d", a);
    a++;
    if (a<=n)
        goto BEGIN;

22-[to check the entered character is vowel or not till the user wants]
 1)-[using if else statement]

    char ch;
    int lower ,upper;
    START:
    printf("Enter the character:\n");
    scanf(" %c",&ch);
    lower = ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    upper = ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U';
    if (lower || upper)
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
    printf("If you want to continue press Y and if you want to exit press N\n");
    scanf(" %c",&ch);
    if (ch == 'Y' || ch == 'y')
    {
        printf("Again\n");
        goto START;
    }

 2)-[using switch statement]

    char ch;
    START:
    printf("Enter the character:\n");
    scanf(" %c",&ch);
    switch (toupper(ch))    //'toupper' is used to convert lowercase to uppercase letters
                            // e.g. if you enter 'a' then it will be converted to 'A' and hence it will print vowel
    {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("vowel\n");
                break;
        default :printf("not a vowel\n");
    }
    printf("If you want to continue press Y and if you want to exit press N:\n");
    scanf(" %c",&ch);
    if (ch == 'Y' || ch == 'y')
    {
        printf("Again\n");
        goto START;
    }

23-[to check the status of a student according to his/her grade]

    char ch;
    printf("Enter the grade:");
    scanf(" %c",&ch);
    switch (toupper(ch))
    {
        case 'A':printf("Excellent");
            break;
        case 'B':printf("Good");
            break;
        case 'C':printf("Average");
            break;
        case 'D':printf("Bad");
            break;
        case 'E':printf("Worse!! You have to do a lot of work.");
            break;
        default:printf("Enter the correct grade.");
            break;
    }

24-[to add any number till then the addition is 1000]

    int a,n;
    printf("Enter the number:\n");
    scanf("%d",&a);
    printf("Enter the number upto which u have to add the number:\n");
    scanf(" %d",&n);
    START:
    printf("%d\n",a);
    a = a+a;
    if (a<=n)
    goto START;

25-[to print the sum of n numbers using while loop]

    int a=1,sum=0,n;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    while (a<=n)
    {
        sum+=a;
        a++;
    }
    printf("Sum = %d",sum);

26-[to print the sum of n numbers using for loop]

    int i,sum=0,n;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    for (i = 0; i <=n; ++i)
        sum+=i;
        printf("%d",sum);

27-[to print the sum of n numbers using do while loops]

    int n,i=1,sum=0;
    printf("Enter the number:\n");
    scanf(" %d",&n);
    do
    {
        sum+=i;
        i++;
    }while(sum<=n);
    printf("Sum = %d",sum);

28-[to print the tabular form of a number]

    int i=1,n;
    printf("Enter the number:\n");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
        printf("%d * %d = %d\n",n,i,n*i);

29-[to print the factorial of a given number]

    int i,n,fact=1;
    printf("Enter n:\n");
    scanf("%d",&n);
    if (n<0)
        printf("error");
    else
    {
        for (i=1;i<=n;++i)
            {
                fact = fact*i;
            }
        printf("Factorial of %d = %d",n,fact);
    }

30-[to print the sum of even and odd numbers between 1 to 100]

    int i,sum_E=0,sum_O=0,n;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    for (int i=1 ; i<=n ; ++i)
    {
        if (i%2 == 0)
            sum_E += i;
        else
            sum_O += i;
    }
    printf("Sum of even numbers = %d\n",sum_E);
    printf("Sum of odd numbers = %d",sum_O);

31-[to print the sum of digits of a given number]

    long n,sum=0,i;
    printf("Enter the number:\n");
    scanf("%ld",&n);
    while (i != 0)
    {
        i = n % 10;
        sum += i;
        n /= 10;
    }
    printf("Sum of the digits = %ld",sum);

32-[to print the reverse of a given number]
33-[to check the entered number is palindrome or not]

    int n,rev=0,a,temp;
    printf("Enter the number:\n");
    scanf(" %d",&n);
    temp = n;
    while(n != 0)
    {
        a = n % 10;
        rev = rev*10 + a;
        n /= 10;
    }
    printf("Reversed number = %d\n",rev);
    if (temp == rev)
        printf("Number is palindrome.");
    else
        printf("Number is not palindrome.");

34-[to check the entered number is armstrong number or not (three digit number)]

    int n, temp, a, result = 0;
    printf("Enter a three digit number:\n");
    scanf("%d",&n);
    temp = n;
    while (n != 0)
    {
        a = n % 10;
        result += a*a*a;
        n /= 10;
    }
    if (result == temp)
        printf("Number is Armstrong.");
    else
        printf("Number is not Armstrong.");

35-[to check the entered number is prime number or not]

    int n, i, result = 0;
    printf("Enter the number:\n");
    scanf(" %d",&n);
    for (i=2 ; i<=2 ; i++)
    {
        if(n%i == 0)
        {
            result = 1;
            break;
        }
    }
    if (result == 0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);

36-[to check the entered number is perfect number or not]

    int n, i, result = 0, a;
    printf("Enter the number:\n");
    scanf(" %d",&n);
    for(i=1 ; i<=(n-1) ; i++)
    {
        a = n % i;
        if (a == 0)
        {
            result += i;
        }
    }
    if (result == n)
        printf("Number is a perfect number.");
    else
        printf("Number is not a perfect number.");

37-[to check the entered number is strong number or not]

    int n,a,i,temp,result = 0;
    long fact;
    printf("Enter the number:\n");
    scanf(" %d",&n);
    temp = n;
    while (n>0)
    {
        a = n % 10;
        fact = 1;
        for (i=1 ; i<=a ; i++)
        {
            fact = fact * i;
        }
        result = result + fact;
        n /= 10;
    }
    if (result == temp)
        printf("%d is a Strong number.",temp);
    else
        printf("%d is not a Strong number.",temp);

38-[to check character is not whitespace (space,tab and enter)]

    char ch=' ';
    if (isspace(ch))
        printf("This is a whitespace.");
    else
        printf("This is not a whitespace.");


39-[to print the Fibonacci series]

    int i,n,t1=0,t2=1,next_term;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    for (i = 1; i <= n ; i++)
    {
        printf("%d ",t1);
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }

40-[to print factors of a number]

    int n,i;
    printf("Enter number:");
    scanf("%d",&n);
    for (i=1 ; i<=n ; i++)
    {
        if (n%i == 0)
            printf("%d is a factor of %d.\n",i,n);
        else
            printf("%d is not a factor of %d.\n",i,n);
    }

41-[to convert binary to decimal]

    long n,dec = 0,a,bin,base = 1;
    printf("Enter the number:\n");
    scanf("%ld",&n);
    bin = n;
    while (n > 0)
    {
        a = n%10;
        dec = dec + a*base;
        n /= 10;
        base = base * 2;
    }
    printf("Number in decimal form is %ld.",dec);

42-[to convert decimal to binary]

    long n,dec,a,bin = 0,base = 1,no_of_1s = 0;
    printf("Enter the number:\n");
    scanf("%ld",&n);
    dec = n;
    while (n > 0)
    {
        a = n%2;
        if (a == 1)
        {
            no_of_1s++;
        }
        bin = bin + a*base;
        n /= 2;
        base = base *10;
    }
    printf("Number in binary for is %ld.",bin);

43-[to print the table of 2,3,4,5]

    int i,j;
    for (i=1 ; i<=10 ; i++)
    {
        for (j = 2; j <= 5; j++)
        {
            printf("%d\t", j*i);
        }
        printf("\n");
    }
44-[to print prime numbers between 1 to 500]

    int n,i,temp;
    for (n = 2 ; n<=500 ; n++)
*/

    return 0;
}