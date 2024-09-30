#include <bits/stdc++.h>

using namespace std;

// Pattern 1
// void print(int n){
//         for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<"*";
//     }
//     cout<<endl;
//     }
// }

// int main(){

//     int n;

//     cout<<"Enter x:";
//     cin>>n;
//     print(n);

//     return 0;
// }

// Pattern 2
// void print2(int n){
//         for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<"*";
//     }
//     cout<<endl;
//     }
// }

// int main(){

//     int n;

//     cout<<"Enter x:";
//     cin>>n;
//     print2(n);

//     return 0;
// }

// Pattern 3
// void print3(int n){
//         for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<j;
//     }
//     cout<<endl;
//     }
// }

// int main(){

//     int n;

//     cout<<"Enter x:";
//     cin>>n;
//     print3(n);

//     return 0;
// }

// Pattern 4
// void print2(int n){
//         for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<i;
//     }
//     cout<<endl;
//     }
// }

// int main(){

//     int n;

//     cout<<"Enter x:";
//     cin>>n;
//     print2(n);

//     return 0;
// }

// Pattern 5
// void print2(int n){
//         for(int i=0; i<=n ; i++){
//         for(int j=0; j<n-i; j++){
//             cout<<"*";
//     }
//     cout<<endl;
//     }
// }

// int main(){

//     int n;

//     cout<<"Enter x:";
//     cin>>n;
//     print2(n);

//     return 0;
// }


// // Pattern 6
// void print2(int n){
//         for(int i=0; i<=n ; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<j;
//     }
//     cout<<endl;
//     }
// }

// int main(){

//     int n;

//     cout<<"Enter x:";
//     cin>>n;
//     print2(n);

//     return 0;
// }

// // Pattern 7
// void print7(int n){
//         for (int i=0; i<n; i++){
//             //space
//             for(int j=0; j<n-i-1; j++){
//                 cout<<" ";
//             }
//             //star
//             for(int j=0; j<2*i+1; j++){
//                 cout<<"*";
//         }
//         //space
//         for(int j=0; j<n-i; j++){
//             cout<<" ";
//         }
//         cout<<endl;
// }
// }
// int main(){

//     int n;

//     cout<<"Enter x:";
//     cin>>n;
//     print7(n);

//     return 0;
// }

// // Pattern 8
// void print7(int n){
//         for (int i=0; i<n; i++){
//             //space
//             for(int j=0; j<i; j++){
//                 cout<<" ";
//             }
//             //star
//             for(int j=0; j<2*n-(2*i+1); j++){
//                 cout<<"*";
//         }
//         //space
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         cout<<endl;
// }
// }
// int main(){

//     int n;

//     cout<<"Enter x:";
//     cin>>n;
//     print7(n);

//     return 0;
// }

// // Pattern 9
// void print7(int n){
//         for (int i=0; i<n; i++){
//             //space
//             for(int j=0; j<n-i-1; j++){
//                 cout<<" ";
//             }
//             //star
//             for(int j=0; j<2*i+1; j++){
//                 cout<<"*";
//         }
//         //space
//         for(int j=0; j<n-i; j++){
//             cout<<" ";
//         }
//         cout<<endl;
// }
// }
// void print8(int n){
//         for (int i=0; i<n; i++){
//             //space
//             for(int j=0; j<i; j++){
//                 cout<<" ";
//             }
//             //star
//             for(int j=0; j<2*n-(2*i+1); j++){
//                 cout<<"*";
//         }
//         //space
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         cout<<endl;
// }
// }
// int main(){

//     int n;

//     cout<<"Enter x:";
//     cin>>n;
//     print7(n);
//     print8(n);

//     return 0;
// }

// Pattern 10

// void pattern10(int N)
// {
//       // Outer loop for number of rows.
//       for(int i=1;i<=2*N-1;i++){
          
//           // stars would be equal to the row no. uptill first half 
//           int stars = i;
          
//           // for the second half of the rotated triangle.
//           if(i>N) stars = 2*N-i;
          
//           // for printing the stars in each row.
//           for(int j=1;j<=stars;j++){
//               cout<<"*";
//           }
          
//            // As soon as the stars for each iteration are printed, we move to the
//           // next row and give a line break otherwise all stars
//           // would get printed in 1 line.
//           cout<<endl;
//       }
// }

// int main()
// {   
//     int N;
//     cout<<"Enter x:";
//     cin>>N;
//     pattern10(N);

//     return 0;
// }

