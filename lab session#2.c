/*
//Qno.01 Write a C program to display the first n odd natural numbers and their sum using for, while and do-while loop.
Ans:
USING FOR LOOP:
#include <stdio.h>
int main() {
    int n,sum=0;
    printf("Enter a value:");
    scanf("%d",&n);
    printf("The odd natural numbers upto %d are:",n);
    for(int i=1;i<=n;i++){if(i%2!=0){printf(" %d ",i);
        sum+=i;}
    }
   printf("\nThe sum of first %d natural numbers is %d",n,sum);
    return 0;
}
//USING WHILE  LOOP:
#include <stdio.h>
int main() {
    int n,sum=0;
    int i=1;
    printf("Enter a value:");
    scanf("%d",&n);
    printf("The odd natural numbers upto %d are:",n);
   do{if(i%2!=0){printf(" %d ",i);
        sum+=i;
        ++i;}
       
   }while(i <= n);
   printf("\nThe sum of first %d natural numbers is %d",n,sum);
    return 0;
}
//USING DO-WHILE LOOP;
#include <stdio.h>
int main(){
int n, i=1,sum=0;
printf("Enter a Value;");
scanf("%d",&n);
printf("The Odd numbers upto %d are:",n);
do{if(i%2!=0){
printf(" %d",i);sum+=i;}
i+=1;
}while(i<=n);
printf("\nThe sum of odd natural numbers upto %d is: %d",n,sum);return 0;}
 //QNO. 02
#include <stdio.h>
int main() {
    int rows, print, space;
    int i=1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    while(i <= rows) {
        for (space = 1; space <= rows - i; space++){
            printf(" ");}
        for (print= 1; print <= 2 * i - 1; print++) {printf("*");
        }
        printf("\n");i++; }
 return 0;}
 //QNO. 03: Write a C program to compare two strings without using string library functions.
__
#include <stdio.h>j
int main(){
    char str1[10], str2[10];
    int i, response=0;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if(str1[i] != str2[i]) { response = 1;}}
    if(response ==0 && str1[i]=='\0' && str2[i]=='\0'){printf("The Strings are equal.");}
        else{printf("The Strings are unequal.");}
    return 0;
}
//QNO. 04: Write a C program to read a sentence and replace lowercase characters with uppercase and vice 
versa.
#include<stdio.h> 
#include<string.h> 
int main() 
{ 
    char str[100]; 
    int i; 
    printf("Enter the sentence: "); 
    gets(str) ;
    for(i=0;i<strlen(str);i++) 
    { 
        if(str[i]>=65 && str[i]<=90) 
            str[i]=str[i]+32; 
        else if(str[i]>=97 && str[i]<=122) 
            str[i]=str[i]-32; 
    } 
    printf("New sentence: %s",str); 
    return 0; 
}
//QNO. 05: Write a C program to print all unique elements in an array.
#include <stdio.h>

int main()
{
    int arr[100], n, i, j, unique = 1;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find unique elements
    printf("Unique elements in the array: ");
    for(i=0; i<n; i++)
    {
        unique = 1;
        for(j=0; j<i; j++)
        {
            if(arr[i] == arr[j])
            {
                unique = 0;
                break; }
        }
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                unique = 0;
                break;
            }
        }
        if(unique == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
//QNO. 06: Write a C program to add two distances in inch-feet system using structures.
#include <stdio.h>

struct Distance
{
    int feet;
    int inch;
} d1, d2, result;

int main()
{
    printf("Enter first distance in feet and inch:\n");
    scanf("%d %d", &d1.feet, &d1.inch);
    printf("Enter second distance in feet and inch:\n");
    scanf("%d %d", &d2.feet, &d2.inch);

    // Add distances
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    // If inch is greater than or equal to 12, convert it to feet
    if(result.inch >= 12)
    {
        result.feet += result.inch/12;
        result.inch = result.inch%12;
    }
    printf("Total distance is %d feet %d inch.", result.feet, result.inch);

    return 0;
}*/