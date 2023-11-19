// // // // //Qno.01 Write a program in C to swap elements using call by reference. 
// // // // #include<stdio.h>
// // // // void swap(int *ptr1,int *ptr2){int vacancy;
// // // // vacancy=*ptr1; *ptr1= *ptr2; *ptr2 = vacancy;
// // // // }
// // // // int main(){int a,b;
// // // // int *ptr1,*ptr2;
// // // // printf("Enter the value for a:");scanf("%d",&a);
// // // // printf("Enter the value for b:");scanf("%d",&b); ptr1 = &a;
// // // // ptr2 = &b;
// // // // swap(ptr1,ptr2);printf("The value of 'a' after swap:%d\nThe value of 'b' after swap:%d",*ptr1,*ptr2);
// // // // return 0;
// // // // }
// // // // //Qno.02 Write a program in C to print a string in reverseusing pointers.
// // // // #include <stdio.h>
// // // // #include<string.h>
// // // // void reverse(char *string);
// // // // int main(){
// // // //     char string[50];
// // // //     printf("Enter a String:");fgets(string,50,stdin);reverse(string);printf("The reversed string is %s",string);
// // // //     return 0;}
// // // // void reverse(char *string){int len = strlen(string);for(int i =0;i<(len/2);i++){char new = string[i];
// // // // string[i]=string[(len-1)-i-1]; string[(len-1)-i-1]=new;}

// // // // }
// // // //Qno.03: Write a program in C to  input and print array elements using pointers.
// // // #include <stdio.h>
// // // int main(){
// // // int var[100];
// // // int n,i,*ptr;
// // // printf("How many elements:");scanf("%d",&n);
// // // for( i=0;i<n;i++){printf("Enter array elements:");scanf("%d",&var[i]);
// // // } i=0;
// // // ptr=&var[i];

// // // while(ptr<=&var[n-1]){
// // //     printf("Value of var[%d]= %d\n",i,*ptr);i++;ptr++;
// // // }
// // // return 0;
// // // }
// // //Qno.04: Write a C program to search for an element in an array using pointers.
// // #include <stdio.h>
// // int main(){ int array[5]={1,2,3,4,5};
// // int element = 2;
// // int i,*ptr=&array[0];
// // for(i=0;i<5;i++){if(*(ptr)==element){printf("%d found at index %d",*ptr,i);return *ptr;
// // }else{ptr++;}}
// // return 0;
// // }
// //Qno.05: Write a C program to add two matrices using pointers.
// #include<stdio.h>
// void Add_matrix(int *array1, int* array2,int*array3,int rows,int col);
// void Print_matrix(int*array3,int rows,int cols);
// int main(){int array1[3][2]= {{3,3},{1,2},{7,8}};
// int array2[3][2]= {{3,3},{1,2},{7,8}};
//    int array3[3][2];int rows=3;int col=2;
//  Add_matrix(&array1[0][0], &array2[0][0],&array3[0][0], rows, col);
//  Print_matrix(&array3[0][0], rows, col); 
// return 0;   
// }
// void Add_matrix(int *array1, int* array2,int*array3,int rows,int col)
// {int i,j;
// for(i=0;i<rows;i++){for(j=0;j<col;j++)
// {*(array3+i*col+j)=*(array1+i*col+j) + *(array2+i*col+j); }}   
// }
// void Print_matrix(int*array3,int rows,int cols)
// {int i,j;for(i=0;i<rows;i++){for(j=0;j<cols;j++){printf("%d ",*(array3+i*cols+j));}
// printf("\n");}}