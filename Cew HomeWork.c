//______________Q1

// #include <stdio.h>
// int main() {

// int employeeId;
// float hoursWorked;
// float salaryPerHour;
// printf("Enter your Employee ID: \n"); scanf("%d",&employeeId);
// printf("Enter total hours worked in a month: \n"); scanf("%f",&hoursWorked);
// printf("Enter salary per hour: \n"); scanf("%f",&salaryPerHour);
// printf("employee ID :%d",employeeId);
// printf("salary per month:Rs.%.2f",hoursWorked*salaryPerHour);
// return 0;
// }

//__________________Q2

// #include <stdio.h>
// int main() {
// float height;
// float width;
// printf("Enter the height of the rectangle: \n"); scanf("%f",&height);
// printf("Enter width of the rectangle: \n"); scanf("%f",&width);

// printf("Perimeter of rectangle is :%.2f",2*(height+width));
// printf("Area of rectangle is: %.2f",height*width);
// return 0;
// }

//______________Q3

// #include <stdio.h>
// int main() {
// int height;printf("Enter your height in centimeters : \n"); scanf("%d",&height);
// if (height<150){
//     printf("Dwarf");
// }else if (height==150){
//     printf("Average");
// }else if (height>=165){
//     printf("Tall");
// }else{
//     printf("Sorry!");
// }
// return 0;
// }

//__________________Q4

// #include <stdio.h>
// void decimalToBinary(int num){
//     if(num>0){
//         decimalToBinary(num/2);
//         printf("%d",num%2);
//     }
// }
// int main() {
// int decimalNo;
// printf("enter any decimal number:");scanf("%d",&decimalNo);
// printf("Binary Representation:");
// decimalToBinary(decimalNo);
// return 0;
// }

//_______________Q5

// #include <stdio.h>
// void Fibonacci(int num){
//     int count=0;
//     int n1=0;
//     int n2=1;
//     while(count<num){
//     printf("%d ",n1);
//     int nth = n1 + n2;
//     n1 = n2;
//     n2 = nth;
//     count+=1;
        
//     }
// }
// int main() {
// int fab;
// printf("enter a number:");
// scanf("%d",&fab);
// if (fab==0){
// printf("Fibonacci series doesn't exist");
// }
// else {
// Fibonacci(fab);
// }
// return 0;
// }