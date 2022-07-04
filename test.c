// GITHUB REPO  IS JUST A HELPFULL QUICK GUIDE FROM MULTIPLE CODE BLOCKS ON THE 'C' COURSE ON CODEACEDEMY.  THIS IS NO PROJECT JUST SOMETHING I CAN COME BACK TO IF I FORGET SOMETHING

/*#include <stdio.h>
//INTRODUCTION
int main() {
  
  double testScore = 95.7;
  int displayScore = 0;

displayScore = (int)testScore;

  // No need to change below here
  printf("Great work, you got a %d%% on your test\n", displayScore);

}  shows conversions of variable types */

/* #include <stdio.h>
 //CASTING...way of converting charset values to numerical values
int main() {
  
  char targetChar;
  int sourceInt = 99;
  double sourceDouble = 55.67;

  // Cast here
targetChar = (char)sourceInt;
targetChar = sourceDouble;
  // No need to change below here
  printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);

} */
// MATHEMTICAL OPERATIONS WITH C
/* #include <stdio.h>

int main() {
  
  // Variables set for you, do not change here
  int booksSold = 100;
  double bookCost = 9.99;
  double totalSalesValue;

  // Make your changes here
booksSold = booksSold + 200;
totalSalesValue = booksSold * bookCost;
totalSalesValue = totalSalesValue / 2;
  // Output logic, no need to change this
  printf("You sold %d books and your take home was $%.2f\n", booksSold, totalSalesValue);
} */
// MODULE %%%
/* int endingDayOfWeek = 0;
  int daysThatPass = 7;
  int daysInWeek = 7;

 endingDayOfWeek = daysThatPass % daysInWeek;

  printf("You started on the 1st (0) day of the week, went %d days from this, so it is now the %d day of the week\n", daysThatPass, endingDayOfWeek); */
  // SIMPLE Increment and Decrement
   /*  #include <stdio.h>

      int main() {
        int n = 13;
        int m = 10;
        m = m--;
        n = n++;
        printf("m = %d\n", m);
        printf("n = %d\n", n);
      } */
      //ASSIGNMENT OPERATOR
     
      /* 
       int timesServerCrashed = 5;
        double losses = 500.95;
        losses *= timesServerCrashed;
        losses /= 2;
        printf("Total Losses: $%.2f\n", losses);
        /*
  /* comparisins  < > <> <= >= != ==
      #include <stdio.h>

int main() {
  
  int x = 5;
  int y = 42;

  if (x < y) {
   printf("Congratulations on setting up a comparison correctly!");
  }

}
      
      */
   // LOGICAL OPERATORS
   /*
    #include <stdio.h>

int main() {
  
  int x = 1;
  int y = 27;

  if (x == y) {
    printf("Congratulations on setting up a comparison correctly!");
  } else {
    printf("Please try again!");
  }

}
   */  
// PEMDAS (ORDER OF OPERATIONS IS ALSO USED IN C, FOLLOW ON DOCS)