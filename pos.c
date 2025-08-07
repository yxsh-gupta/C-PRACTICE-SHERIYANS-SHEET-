#include<stdio.h>
#include<math.h>


//     Q-18
//     char input;
// if (input == 'a'|| input =='e' || input =='i' || input =='o'||input=='u'){
//       printf("INPUT IS A VOWEL ");
//     }
//     else {
//       printf("INPUT IS A CONSONANT ");
//     }

//Q-22
// int a,b;
// char op;
// printf("enter first no. : ");
// scanf("%d", &a);
// printf("enter second no. : ");
// scanf("%d", &b);
// printf("enter operator : ");
// scanf(" %c", &op);
// if(op == '+'){
//     printf("result is %d", a+b);

// }
// else if(op == '-'){
//     printf("result is %d", a-b);
    
// }
// else if(op == '*'){
//     printf("result is %d", a*b);
    
// }
// else if(op == '/'){
//     printf("result is %d", a/b);

    // }
// else {
//     printf("try again");
// }


//Q-26
// int n , sum =0; 
// printf("enter the no. :");
// scanf("%d", &n);
// for(int i=1; i<=n; i++){
//     if(n%i == 0){
//         // printf("%d", i);
//         sum = sum +i;}}
// printf("the required sum is %d", sum);}
 
//Q-27 SUM OF ALL THE EVEN NOS. UPTO N
// int n = 10;
// int a = 3;
// double m = pow (n,a);
// printf ("the result is : %.0f",m);

// Q-28
// int n = 50, count = 0; 
// for (int i =1; i<=n ; i++){
//     if(i%2 == 0){
//     count = count +i ; 
//     }}
// printf ( "the sum of all the even number upto n is : %d", count );

/*                                                       ******  LOOPS ******                                                                     */

//Q-29-FIND THE PRIME NOS.
// int a ; 
// printf("enter first number : \n ");
// scanf("%d", &a);
// int b; 
// printf("enter second number : \n ");
// scanf("%d", &b);
// for (int i =a ; i<=b; i++ ) {
//     int isPrime =1;
//     for (int j=2; j<i; j++) {
//         if(i%j == 0) {
//             isPrime = 0;
//             break;}}
//         if(isPrime !=0) {
//             printf("%d\t", i);
//             }}

//Q-30 FIND THE SUM OF THE DIGIS 
//  int main() {
//         int a, sum =0 ;
//         printf("enter a number : ");
//         scanf("%d", &a);
//         for ( int i = a; i > 0; i= i/10){
//             sum = sum + (i%10); }
//             printf("the sum of digits of the no. is : %d", sum);
//             return 0;
//        }

// Q-31- FIBBONAXXI
// int hello(int n ) {
//      if (n<=1) {
//         return 0;
//     }
//     else if (n==2) {
//         return 1;
//     }
//     else {int fibN = hello(n-1)+hello(n-2);
// return fibN;}
// int main () {
//         int  n ;
//         printf( " enter input : ");
//         scanf("%d", &n );
//         for (int i = 1; i<=n ; i++){
//             printf("%d\t", hello(i));
//         }}

// Q-32  PALINDROME 
// int main () { 
//     int a, reversed =0 ;
//     printf ("enter a number : "); 
//     scanf ( " %d", &a );
//     int orig=a ; 
//     for( int i = a ; i!=0 ; i = i/10) {
//         int remainder = i%10; 
//         reversed = reversed*10 + remainder ; 
     
//     }
//     if (reversed == orig ){
//         printf("congo!!!!!!\n it is a palindrome ");
//     }
//     else {
//         printf ("try again ");
//     }
// }

// Q-EXTRA ARMSTRONG
// int main () { 
//     int a , hi = 0  ; 
//     printf ( " enter a number : " ); 
//     scanf ( " %d", &a ); 
//     for ( int i = a ; i !=0 ; i = i /10 ){ 
//         int remainder  = i%10 ; 
//         hi = hi + (remainder*);
//     }
//     if ( hi == a ){
//         printf(" congo!! it is armstrong ");
//     }
//     else {
//         printf("try again");
//     }
// }

// Q-EXTRA TO FIND MAXIMUM DIGIT OF A NUMBER 
// int main () {
//     int a , hi=0;  
//     printf ( " enter input : ");
//     scanf(" %d", &a );
//     for (int i = a ; i !=0 ; i= i /10){
//         int rem = i%10 ; 
//     if(hi < rem ) {
//         hi= rem ; 
//     }
//     }
//     printf(" maximum digit is : %d", hi);}

// Q-33 LCM OF TWO NOS.
// int main () {
//     int a, b ; 
//     printf("enter first number : "); 
//     scanf ("%d", &a ); 
//     printf("enter second number : "); 
//     scanf ("%d", &b  ); 
//     for ( int i =1 ; ; i++) { 
//      if ( i%a == 0 && i%b == 0) {
//           printf("the lcm is %d", i );
//           break; 
//      }
//     }}

// Q-34 1+11+111+1111........
// int main () {
//      int n ; 
//      float hello=0 , sum=0 ; 
//      printf(" enter input : "); scanf("%d", &n );
//      for( int i = 0 ; i<n; i++) { 
//           hello = hello + pow(10,i); 
//           sum = sum + hello;
//      } 
//      printf(" the required sum is : %f", sum );}
 
// Q-35 HARSHAD NUMBER 
//    int a , sum =0 ; 
//    printf( " enter input : "); scanf("%d", &a );
//    for( int i =a ; i!=0 ; i= i/10) {
//      int rem = i%10;
//      sum = sum + rem ;
//    }
//    if (a % sum == 0 ) {
//      printf ( " yes it is harshad ");
//    }
// else {
//      printf ("try again");}}

// Q-36  PERFECT NO.
// int main () {
//    int a , sum =0 ; 
//    printf( " enter input : "); scanf("%d", &a );
//    for( int i=1; i<a ; i++) {
//          if ( a%i ==0 ){
//           sum = sum + i ; 
//          }}
//          if (a==sum ){
//           printf ( "it is a perfect no.");}
// else {
//      printf("try again ");}}

// Q-38 STRONG NUMBER 
// int fact(int n) {
//      int hi =1 ;  
// for(int i = 1 ; i<=n ; i++){
//  hi = hi*i;}
//      return hi ;}
// int main () {
//      int a, sum=0 ; 
//      printf (" enter input : "); scanf("%d", &a );
//      for (int i=a ; i!=0 ; i = i/10 ) { 
//           int rem = i%10 ; 
//           sum = sum + fact(rem); }
     
//      if (sum == a )     { printf( " yes it is a strong no.");}
// else { printf("try again");}}

/*  ARRAYS  */

// Q-39
// int main() { 
//     int arr[] = {1,2,3,4,5};
    
//     for (int i =0 ; i<5/2; i++ ) {
        
//         int first = arr[i]; 
//         int second = arr[5-i-1];
//         arr[i] = second;
//         arr[4-i] = first;
//     }
    
    
// Q-40
// int main() { 
//     int array[] = { 1,2,3,-78,56,-98,105};
//     printf("The positive elements are: ");
//     for (int i=0 ; i<6  ; i++) {
//         if ( array[i]>0){
//             printf("%d\t", array[i]);
//         }
//     }
//     printf("\n");
//     printf("The negative elements are: ");
//     for (int i=0 ; i<6  ; i++) {
//         if ( array[i]<0){
//             printf("%d\t", array[i]);
//         }}}

// Q-41 
// int summ( int arr[], int n ) {
//     int sum =0;
//     for (int i =0 ; i<n ; i++){
//         sum = sum + arr[i];
//     }
//     printf("The sum is : %d", sum );
// }
// int main () {
// int n ; 
// printf("enter size : ");
// scanf ("%d", &n ); 
// int arr[n];
// for (int i=0 ; i<n ; i++ ) {
//     scanf("%d", &arr[i]);
// }
// summ( arr, n);
// }

// Q-42 
// int main () {
//     int n , nope = -1; 
// printf("enter size : ");
// scanf ("%d", &n ); 
// int arr[n];
// for (int i=0 ; i<n ; i++ ) {
//   scanf("%d", &arr[i]);
// }
// int k ;/* element you want to search  */
// printf("enter the element you want to search : ");
// scanf ("%d", &k); 
// for (int i =0 ; i<n ; i++) {
//     if (k == arr[i]) {
//         nope = i;}
// }
// if(nope ==-1) {
//     printf("-1"); 
// }
// else {
//     printf("The element is found at %d index", nope);
// }}

// Q-43 BINARY SEARCH 
// int main (){
// int n=10;
// int array [] = {1,2,3,4,5,6,7,8,9,10};
// int k ; 
// printf("element you want to search : ");
// scanf("%d", &k);
// int st = 0 , end = n-1, found =-1, mid;
// while (st<=end ) {
//    mid = (st + end )/2; 
//     if (array[mid]<k ) { st = mid +1;}
//     else if ( array[mid] > k) { end = mid - 1;}
//     else if (array[mid] ==k ) {
//        found = mid;
//        break;
//     }}
//   if (found!=-1) {printf("the element is found at %d index", found );}
//     else {printf("%d", found);}
// }

// Q-44 BUBBLE SORTING
// int main()  {
// int n ; 
// printf (" enter size : ");
// scanf("%d", &n );
// int arr[n];
// for (int i=0 ; i<n ; i++ ) {
//   scanf("%d", &arr[i]);}   // abhi tak aray bana liya hai  
//   for(int i = 0 ; i<n; i++ ) {
//     for (int j=0 ; j <n -i; j++ ) {
//       if (arr[j] > arr[j +1]) {
//         int temp = arr[j];
//         arr[j] = arr[j+1];
//         arr[j+1] = temp; 
//       }
//     }
//   }
// for (int i = 0 ; i <n ; i++ ){
//   printf("%d\t", arr[i]);
// }}

// Q-45 LEFT ROTATION OF ARRAY 
// int main () {
//   int n ; 
//   printf("enter the no by which it is to be rotated : ");
//   scanf("%d", &n);
// int arr [] = {1,2,3,4,5};
// for (int j=1; j<=n ; j++) {
// int temp = arr[0];
// for(int i = 1 ; i < 5 ; i ++ ) {
// arr[i-1] = arr[i]; 
// }
// arr[4] = temp ;} 
// for (int i = 0 ; i<5; i++ ) {
//   printf("%d\t", arr[i]);
// }}

// Q-46 RIGHT ROTATION OF ARRAY 
// int main () {
//   int n ; 
//   printf("enter the no by which it is to be rotated : ");
//   scanf("%d", &n);
// int arr [] = {1,2,3,4,5};
// for (int i= 0 ; i<=n ; i++){ 
// int temp = arr[4] ; 
// for ( int i=3 ; i>=0 ; i-- ){
// arr[i+1]= arr[i];
// }
// arr[0] = temp ; }
// for (int i = 0 ; i<5; i++ ) {
//   printf("%d\t", arr[i]);
// }}

// Q-49 CHECKING PALINDROME OF ARRAY 
// int main () { 
//   int n ; printf("enter size : ");  scanf("%d", &n );
// int arr[n], paki=1;
// for (int i=0 ; i<n ; i++ ) {
//   scanf("%d", &arr[i]);}
//   for (int i= 0 ; i <n ; i++) {
//     if(arr[i]!= arr[n-i-1]){paki = 0; break; }
//   }
//   if (paki!=0 ) {
//     printf("the given array is palindrome !!!!");
//   }
//   else { printf("not palindrome");}
// }

// Q-50 TO FIND THE LARGEST ELEMENT OF AN ARRAY 
// int main () { 
//   int n ; printf("enter size : ");  scanf("%d", &n );
// int arr[n];
// for (int i=0 ; i<n ; i++ ) {
//   scanf("%d", &arr[i]);}
//   for ( int i = 0; i<n ; i++){
//     int count =0 ; 
//   for (int j=0; j<n; j++) {
//        if (arr[i]>= arr[j]){
//       count++;}
//     }
//     if(count == n ) {
//       printf("%d is the largest element and its index is %d", arr[i], i );
//       break; 
//     }
//   }
// }

/* STRINGS */

// Q-51 
// int main () { 
//   char name[1000];
//   gets(name); 
//   puts(name); 
//   int len = strlen(name); 
//   printf("the length of string is : %d", len );
//  }

// Q-52 REVERSING STRING 
// void reverse(char arr[]) {
//   char reverse[1000];
//   int len = strlen(arr); 
//   for (int i=0 ; i<len ; i++) {
//    reverse[len - i-1] = arr[i]; 
//   }
//   reverse[len]='\0';
//   puts(reverse);
// }
// int main () {
//   char st [100];
//   gets(st);
//   printf("the reversed string is :") ;
//   reverse(st);
// }

// Q-53 COMPARISION OF STRING
// int main () {
//   char first[1000], second[1000];
//   printf("enter first string : ");
//   gets(first);
//   printf("enter second string : ");
//   gets(second);
//   int hello = strcmp(first, second);
//   if (hello ==0 ) {
//     printf("identical");
//   }
// else { printf("non identical ");}
// }

// Q-57 PALINDROMIC STRING 
// void check(char arr[]) {
//     int len = strlen(arr);
//     int isPalindrome = 1;  // Assume true
//     for (int i = 0; i < len / 2; i++) {
//         if (arr[i] != arr[len - i - 1]) {
//             isPalindrome = 0;
//             break;}}
//     if (isPalindrome)
//         printf("Yes, it is a palindromic string.\n");
//     else
//         printf("It is not a palindromic string.\n");}
// int main() {
//     char str[1000];
//     gets(str);  // unsafe, better use fgets
//     check(str);
//     return 0;
// }

// Q-58 REMOVING OF SPACES FROM STRING 
// int main () {
//     char str[1000]; 
//     printf("enter your name : ");
//     gets(str); 
//     for (int i=0 ; str[i]!='\0'; i++) {
//         if (str[i] == ' ') {
//             for (int j=i ; str[j] !='\0'; j++) {
//                 str[j] = str[j+1]; 
//             }
//             i--;
//         }
//     }
//     puts(str); 
// }

// Q-60 MERGING OF TWO STRINGS 
// int main () {
//     char first[1000], second[1000], merged[2000]; 
    
//     printf("enter first string : ");
//     gets(first); 
//     printf("enter second string : ");
//     gets(second); 
//         int m = strlen(first)+strlen(second);
// for (int i=0 , j=0 ; first[i]!='\0'; i++, j=j+2){
//     merged[j]=first[i]; 
// }
// for (int i=0 , j=1 ; second[i]!='\0'; i++, j=j+2){
//     merged[j]=second[i]; 
// }
// merged[m]='\0';
// puts(merged);}

