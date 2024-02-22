#include<stdio.h>
void sum_of_two_num();
void SI_of_num();
void num_is_positive_or_negative();
void odd_or_even();
void greatest_among_three_num();
void read_and_display_sum();
void sum_of_n_num();
void factoriol();
void fibb();
void count_num();
void reverse_digits();
void check();
void electricity_bill();
void hcf_lcm();
void primefactor();
void choic();
void main()
{
    int choice;
    do{
        choic();
        printf("\nenter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0:
            break;
            case 1:sum_of_two_num();break;
            case 2:SI_of_num();break;
            case 3:num_is_positive_or_negative();break;
            case 4:odd_or_even();break;
            case 5:greatest_among_three_num();break;
            case 6:read_and_display_sum();break;
            case 7:sum_of_n_num();break;
            case 8:factoriol();break;
            case 9:fibb();break;
            case 10:count_num();break;
            case 11:reverse_digits();break;
            case 12:check();break;
            case 13:electricity_bill();break;
            case 14:hcf_lcm();break;
            case 15:primefactor();break;
            default:
            printf("invalid choice try again");
        }
    }while(choice!=0);
        }
void choic(){
    printf("\n\n0. exit\n");
    printf("1. calculate the sum of two given numbers\n");
    printf("2. calculate the simple interest using SI=(P*T*R)/100\n");
    printf("3. check if a number is positive or negative\n");
    printf("4. check if a number is odd or even\n");
    printf("5. find largest among given three different numbers\n");
    printf("6. read n numbers and find their sum\n");
    printf("7. find the sum of series 1+2+3+4+5+...+N\n");
    printf("8. calculate factorial of a given number N\n");
    printf("9. display fibonacci series up to  given number N\n");
    printf("10. calculate digit of the  given number N\n");
    printf("11. display the reverse  of a given number N\n");
    printf("12. check the requred condition \n");
    printf("13. calculate electricity bill of a given number N\n");
    printf("14. calculate HCF AND LCM of a given number N\n");
    printf("15. calculate prime factor of a given number N\n");
}
void sum_of_two_num()
{
    //calculate the sum of two numbers
    int a,b;
    printf("enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    printf("/n the sum of two number is: %d",a+b);

}
void SI_of_num(){
	//calculate simple intrest using SI=(p*t*r)/100
     int p,t,r,si;
    printf("enter the principle, rate and time: ");
    scanf("%d %d %d",&p,&r,&t);
    si=(p*t*r)/100;
    printf("the si of the given value is: %d",si);
}
void num_is_positive_or_negative(){
	//check if a given number is +ve or -ve
     int a;
    printf("\nenter the num for the positive or negative: ");
    scanf("%d",&a);
    if(a==0)
    {
        printf("\nthe num is: zero");
    }
    else if (a>0)
    {
        printf("\nthe num is: +ve");
    }
    else
    printf("\nthe num is: -ve");
}
void odd_or_even(){
	//check if a given number is odd or even
      int a;
    printf("\nenter the num for odd or even: ");
    scanf("%d",&a);
    if(a==0)
    {
        printf("\nthe num is: zero");
    }
    else {
           if (a%2==0)
         {
             printf("\nthe num is: even");
         }
            else
             printf("\nthe num is: odd");
        }
}
void greatest_among_three_num(){
	//find greatest of the three numbers
     int a,b,c;
    printf("\nenter the three num for the greatest:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("\nthe a is: greatest");
    }
    else if (b>c&&b>a)
    {
        printf("\nthe b is: greatest");
    }
    else
    printf("\nthe c is: greatest");
}
void read_and_display_sum(){
	//read n numbers and display the sum
     int i,n,sum=0;
    printf("\nenter the value of n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("\nenter the %d no",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
   

    printf("\nthe sum of the n num is: %d",sum);
}
void sum_of_n_num(){
    //find sum of series 1+2+3+4+5+......+ n
    int i,n,sum=0;
    printf("\nenter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       
        sum=sum+i;
    }
    printf("\nthe sum of the n num is: %d",sum);
}
void factoriol(){
	//calculate the factorial of the given number
int n,i=1,factorial=1;
    printf("\nenter the num to find factorial: ");
    scanf("%d",&n);
    if(n==0||n==1)
    {
        printf("\nthe factorial is: 1");
    }
    else{
        while(n!=0)
        {
            factorial=factorial*i;
            i++;
            n--;
        }
        printf("\nthe factorial of the given num is: %d",factorial);
    }
}
void electricity_bill()
{
    //calculate electricity bill as per following:
    // Rs.80 for first 20 units
    //Rs.8 for next 100 units
    //Rs.10 per unit for any more
int a,b=0;
    printf("\nenter the units: ");
    scanf("%d",&a);
    if(a<=20)
    {
        b=a*80;
        printf(" /nrs. is: %d",b);
    }
     else if(a<=120)
    {
        b=20*80+(a-20)*100;
        printf(" /nrs. is: %d",b);
    }
    else{
          {
        b=20*80+100*8+(a-120)*1;
        printf(" /nrs. is: %d",b);
    }
    }
}


void hcf_lcm(){
	// calculate hcf and lcm of two numbers
     int a,b,c,d;
    printf("\n the value of a and b:");
    scanf("%d %d",&a,&b);
    d=a;
    c=b;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        b=b-a;
    }
    printf("\nthe hcf is: %d",b);
    printf("\nthe lcm is: %d",(d*c)/b);
}
void fibb(){
  //calculate fibonacci series upto N terms
    int a=0,b=1,c=0;
    int i,n;
    printf("\nenter the num find the fibbonacci series up to term n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     printf("%d,",c);
     a=b;
     b=c;
     c=a+b;
    }
}
void count_num(){
	// count number of digits in a number
    int a,i,b,c=0;
    printf("\nenter the value of a: ");
    scanf("%d",&a);
    while(a!=0)
       {
         b=a%10;
         if(b>=0)
         {
             c++; 
         }
       
        a=a/10;
          }
    printf("\nthe digit is: %d",c);
}
void reverse_digits(){
	//Reverse a digits in a number
     int a ,b=0,c;
     printf("\nenter the value of a: ");
     scanf("%d",&a);
     while(a!=0)
     {
        c=a%10;
        b=b*10+c;
        a=a/10;
     }
     printf("\nthe rev is: %d",b);
}
void primefactor(){
	//find prime factor of a number
    int a;
    int n;
    int i;
    printf("\nenter the num:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            printf("%d,",i);
            n=n/i;
        }
    }
}
void check(){
    //check if a number is greater than N1, less than N2 and divisible by 7
      int a,b,c;
    printf("\nenter the value of a ,b and c");
    scanf("%d%d%d",&a,&b,&c);
    if(b>a&&c<b&&c%7==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
