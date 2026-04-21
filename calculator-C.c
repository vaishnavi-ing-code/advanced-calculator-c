// Advanced calculator in c
// Features: Basic oprations, marks percentage, loop-based execution
// Author: Vaishnavi Mishra
// Date: 20 April 2026
// Description: A loop-based calculator handling multiple oprerations use also for decimal and integer 

#include<stdio.h>
int main()
{
    printf("        ADVANCED CALCULATOR IN C        \n");// name of our calculator

    int i=1;         // prefroming the loop
    int choice;        // Stores user's menu choice
    float num1, num2, result;         //Stores input numbers and result

    // Loop to keep the calculator running until user exits
    do
    {
    printf("\n=======CALCULATOR MENU========\n");
     printf("1. Add\n");
     printf("2. Subtract\n");
     printf("3. Multiply\n");
     printf("4. Divide\n");
     printf("5. Marks Percentage\n");
     printf("6. Add Multiple Numbers\n");
     printf("7. Subtract Multiple Numbers\n");
     printf("8. Multiply Multiple Numbers\n");
     printf("9. MAX-MIN finder\n");
     printf("10. EXIT\n");

     // Input validation: check if user entered a number
     printf("Enter choice: ");
     if(scanf("%d",&choice) !=1)
     {
        printf("Invalid input! enter a number: \n");
        return 0; // stop program if input is wrong  
     }
     switch(choice)    // For multiple condition and if condition will be correct then code will be prefomed
     {
      // Addition operation
        case 1: 
        {
         printf("Enter numbers 1: ");
        scanf("%f", &num1);
         printf("Enter numbers 2: ");
        scanf("%f", &num2);;

        result = num1 + num2;   // calculte sum 
        printf("Result = %.2f\n", result);
        break;
        }

        // Subtraction operation
        case 2: 
        {
        printf("Enter numbers 1: ");
        scanf("%f", &num1);
         printf("Enter numbers 2: ");
        scanf("%f", &num2);

        result = num1 - num2;   // calculte difference
        printf("Result = %.2f\n", result);
        break;
        }

        // Multiplication operation
        case 3: 
        {
         printf("Enter numbers 1: ");
        scanf("%f", &num1);
         printf("Enter numbers 2: ");
        scanf("%f", &num2);

        result = num1 * num2;   // calculte product
        printf("Result = %.2f\n", result);
        break;
        }

        // Division operation
        case 4: 
        {
        printf("Enter numbers 1: ");
        scanf("%f", &num1);
         printf("Enter numbers 2: ");
        scanf("%f", &num2);

        // Check for division by zero
        if(num2 != 0)
        {
         result = num1 / num2;  
        printf("Result = %.2f\n", result);
        }
        else 
        {
         printf("Error! Division by zero\n");
        }
        break;
      }

        // Marks percentage calculation
        case 5: 
        {
        printf("Enter obtained marks: \n");
        scanf("%f", &num1);

        printf("Enter total marks: \n");
        scanf("%f", &num2);

        // Ensure total is not zero
        if(num2 != 0)
        {
         result = (num1 / num2) * 100;   // Calculate percentage
         printf("Percentage = %.2f%%\n", result);
        }
        else
        {
         printf("Error! Total cannot be zero\n");
        }
        break;
      }
        
        // Multiple addition operation
        case 6: 
        {
        int n, j;
        float num, sum = 0;

        printf("How many numbers do you want to add: ");
        scanf("%d", &n);

        // Loop to take 'n' numbers form user
        for(j=1; j<=n; j++)
        {
         printf("Enter number %d: ", j);
         scanf("%f", &num);

         sum=sum+num;   // Add each number to sum
        }
        printf("Total sum = %.2f\n", sum);
        break;
      }

        // Multiple subtraction  operation
        case 7: 
        {
        int n,j;
        float k,num, result=k;

        printf("How many numbers do you want to subtract: ");
        scanf("%d", &n);
        
      // Take first number as starting value
        printf("enter number 1: ");
        scanf("%f", &result);
       
      // Subtract remaining numbers
        for(j=2; j<=n; j++)
        {
         printf("Enter number %d: ", j);
         scanf("%f", &num);

         result = result - num;   // subtract each number
        }
        printf("Final Result = %.2f\n", result);
        break;
      }

      // Multiple Multiplication operation
        case 8:
        { 
        int n, j;
        float num, product = 1;

        printf("How many numbers do you want to product: ");
        scanf("%d", &n);

        // Loop to take 'n' numbers form user
        for(j=1; j<=n; j++)
        {
         printf("Enter number %d: ", j);
         scanf("%f", &num);

         product = product * num;      // Multiply each number
        }
        printf("Product = %.2f\n",product);
        break;
      }

      // Max-Min using array (improved version)
        case 9: 
        {
        int n, j;
        
        printf("How many numbers: ");
        scanf("%d", &n);

        float arr[n];  // Array to store numbers

        // Taking input in array
        for(j=0; j<n; j++)
        {
         printf("Enter number %d: ", j+1);
         scanf("%f", &arr[j]);
        }

        float max = arr[0];
        float min = arr[0];

        // Finding max and min
        for(j=1; j<n; j++)
        {
         if(arr[j] > max)
         max = arr[j];

         if(arr[j] < min)
         min = arr[j];
        }

        printf("Maximum = %.2f\n", max);
        printf("Minumum = %.2f\n", min);
        break;  
      }
      
      // Exit option
      case 10:
      i=0;
      printf("THANK YOU FOR USE\n");
      printf("Exiting calculator.....\n");
      break;

      // Handle invalid menu choices
      default:
      printf("Invalid choice! Please select 1-10.\n");
   }
   
    }
    while(i==1); // Repeat until user selects exit

    return 0;  // End of program 
    

}