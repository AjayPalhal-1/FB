//Finding F from C (temp).
#include<stdio.h>

     void   TempF_2_C();              // Q1
     void  Peri_Area_Rectangle ();   // Q2 A)
     void AreaOfCircle();           // Q2 B)
     void reverse();                // Q3 
     void EvnOdd ();                // Q4 
     void SalCalculator();          // Q5
     void MarrigAgeChecker();       // Q6 


int main ()
{
     TempF_2_C();              //Q1
     Peri_Area_Rectangle ();   //Q2 A)
     AreaOfCircle();           //Q2 B)
     reverse();                // Q3 
     EvnOdd ();                // Q4 
     SalCalculator();          // Q5
     MarrigAgeChecker();      // Q6 


}

  // Q1 
void  TempF_2_C ()
{
   float  C=45;
   float F= (9.0/5.0) * C + 32;
   printf("Conversion of Temp %f Celsius to Fahrenheit is %f\n\n\n",C,F);
}

// Q2 A) Finding area and perimeter of rectangle.

void Peri_Area_Rectangle ()
{
    int area,Len=15 ,wid= 25;
    area = Len*wid;
    printf("Area Of Reactangle  is %d\n\n",area);
    int peri = 2 *(Len + wid);
    printf("Perimeter  Of Reactangle  is %d\n\n",peri);
    
}

void AreaOfCircle()
{
//Finding area and Circumefrence  of  circle.
float rediuse = 30.0;
float pi = 3.14;
float Area = pi * (rediuse * rediuse );
float Curcom = 2 * (pi * (rediuse ));
printf("Area of Circle is %f\n\n",Area); 
printf("Curcom of Circle is %f\n\n",Curcom); 
}

//  Q3  Accept a 3 digit number from user and find the sum of the digits and also
// reverse the number

void reverse()
{
    int num=789;
    printf(" Provided No. %d \n",num);
    int rev = 0;
    int rem1 = num%10;
    int que1 = num/10;
    rev = (rev *10)+rem1 ;
    printf(" Reversed No. %d \n",rev);
    int rem2 = que1 %10;
    int que2 = que1 / 10;
    rev = (rev *10)+rem2 ;
    printf(" Reversed No. %d \n",rev);
    int rem3 = que2 % 10 ;
    int que3 = que2 / 10;
    rev = (rev *10)+rem3 ;
    printf(" Reversed No. %d \n",rev);
    int sum = rem1+rem2+rem3+que3;
    printf(" Sum Of three No. are %d \n\n\n\n",sum);
 }

 // Q4 Check if the given number is even or odd.

void EvnOdd ()
{
    int num= 1234 ;
   if ( num%2==0)
  {
     printf(" The Given Number is Even \n \n");
  }
  else 
    printf(" The Given is ODD \n\n"); 
}




 // Q5 Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
// 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and
// 30% respectively.

void  SalCalculator ()
{
    int basic =   55500;
    int totalSal =0;
    int da , ta ,hra;



    if  ( basic <= 5000 ) 
    {
        da = basic * 0.10;
        printf("10 percent  of %d is %d \n ", basic, da);
        ta = basic * 0.20;
        printf("20 percent  of %d is %d \n ", basic, ta);
        hra = basic * 0.25;
        printf("25 percent  of %d is %d \n ",basic, hra);

        // totalSal = da +ta + hra+ basic ;
        // printf(" The total salary is %d \n", totalSal);
    }
      else
       {
         da = basic * 0.15;
         printf("15 percent  of %d is %d \n ",basic, da);
         ta = basic * 0.25;
         printf("25 percent  of %d is %d \n ",basic, ta);
         hra = basic * 0.30;
         printf("30 percent  of %d is %d \n ",basic, hra);

          // totalSal = da +ta + hra+ basic ;

          // printf(" The total salary is %d \n ", totalSal);
        }     
        printf("da = ,%d , ta= %d , hra = %d , basic %d \n\n\n ", da,ta,hra,basic);
        totalSal = da + ta + hra + basic ;
        printf(" The total salary is %d \n \n ", totalSal);
}


//Write a program to check if person is eligible to marry or not (male age >=21
// and female age>=18).

void MarrigAgeChecker ()
{   
    int Fage = 48;
    int Mage = 11;
    if (Fage>=18)
    {
       printf(" Female Candidate is eligible  to marriage \n\n");
    }
    else 
    {
         printf("FeMale Candidate is  not eligible  to marriage\n\n");
    }
      if(Mage>=18)
    {
        printf(" male Candidate is eligible  to marriage \n\n");
    }
    else 
    {
         printf("Male Candidate is  not eligible  to marriage\n\n");
    } 
}


