//*****************1.1*****************

#include <stdio.h>

int main()

{

   char name[20];

   int age;

   long long contact_num;

   float perc;

   printf("Enter name in capital letters: ");

   scanf("%s", name);

   printf("Enter age: ");

   scanf("%d", &age);

   printf("Enter contact number: ");

   scanf("%lld", &contact_num);

   printf("Enter perc in 12th: ");

   scanf("%f", &perc);

   printf("Name= %s", name);

   printf("\nAge= %d", age);

   printf("\nPhone Number= %lld", contact_num);

   printf("\nPerc =%.2f", perc);

   return 0;
}

//*****************1.2*****************

#include <stdio.h>

int main()

{

   int side_of_cube, cut_into, new_side, number_of_cubes;

   printf("Enter the length of side of painted cube: ");

   scanf("%d", &side_of_cube);

   printf("Enter new side of cube to cut into: ");

   scanf("%d", &cut_into);

   new_side = side_of_cube / cut_into;

   number_of_cubes = new_side * new_side * new_side;

   printf("number of smaller cubes generated= ");

   printf("%d", number_of_cubes);

   return 0;
}

//****************1.3******************

#include <stdio.h>

int main()

{

   int d;

   printf("Enter distance travelled in kms\n");

   scanf("%d", &d);

   float t, speed_car;

   printf("Enter time in mins lost by the train while stopping at stations\n");

   scanf("%f", &t);

   speed_car = (float)(60 * d) / (3 * t);

   printf("Speed of car :- %f\n", speed_car);

   return 0;
}

//***************1.4*******************

#include <stdio.h>

int main()

{

   char post1;

   char post2;

   int m, n, result;

   printf("Enter the postion of Sonu from top: ");

   scanf("%c", &post1);

   //The toupper() function is used to convert lowercase alphabet to uppercase.

   m = toupper(post1) - 64;

   printf("Enter the postion of Sonu from bottom: ");

   scanf(" %c", &post2);

   n = toupper(post2) - 64;

   result = m + n - 1;

   printf("How many students are there in the class : %d ", result);

   return 0;
}

//***************1.5*******************

#include <stdio.h>

int gcd(int a, int b)

{

   if (b == 0)

      return a;

   return gcd(b, a % b);
}

int main()

{

   int x, y, total_work, lcm;

   printf("Enter time taken(number of days) by 1st person to complete the task\n");

   scanf("%d", &x);

   printf("Enter time taken(number of days) by 2nd person to complete the task\n");

   scanf("%d", &y);

   total_work = gcd(x, y);

   // let total work be lcm of both work

   lcm = (x * y) / (total_work);

   total_work = (lcm / x) + (lcm / y);

   printf("\nnumber of days =%d ", lcm / total_work);

   return 0;
}