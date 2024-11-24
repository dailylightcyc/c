// #include <stdio.h>
// // int main () {
// //     float a;
// //     scanf ("%f",&a);
// //     if (a>10000)printf ("%.2f",2000+(a*0.2));
// //     else if (a>7000 && a<=10000)printf ("%.2f",2000+(a*0.15));
// //     else if (a>3000 && a<=7000)printf ("%.2f",2000+(a*0.1));
// //     else if (a<=3000)printf ("0");
// // 	return 0;
// // }


// #include <stdio.h>
// int main () {
//     int n,c,b=0;
//     scanf ("%d",&n);
//         c=n;
//         while (c>0){
//         c/=10;
//         b++;
//     }
//     printf ("%d\n",b);
//     if (n<99999){
//         for (int i=0;n>0;i++){
//             int a;
//             a=n%10;
//             n/=10;
//             printf ("%d",a);
//             }
//             }
//              return 0;
//         }




// #include <stdio.h>
// int main () {
//     int n,b=0,c,e,a,d=0;
//     scanf ("%d",&n);
//     c=n;
//     while(c>0){
//         c/=10;
//         b++;
//     }
//     printf ("%d\n",b);
//     if (n<99999){
//         while(n>0){
//             a=n%10;
//             d=d*10+a;
//             n/=10;}
//                while (d>0){
//                    e=d%10;
//                    d/=10;
//             printf ("%d",e);
//             }
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a, b, c;
    
//     // 读取用户输入的三个整数
//     printf("请输入三个整数（用空格分隔）: ");
//     scanf("%d %d %d", &a, &b, &c);
    
//     // 按从小到大的顺序输出这三个数
//     if (a > b) {
//         int temp = a;
//         a = b;
//         b = temp;
//     }
//     if (a > c) {
//         int temp = a;
//         a = c;
//         c = temp;
//     }
//     if (b > c) {
//         int temp = b;
//         b = c;
//         c = temp;
//     }
    
//     printf("从小到大的顺序输出为: %d, %d, %d\n", a, b, c);
    
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int a,b,c,d=0;
//     scanf ("%d %d %d",&a,&b,&c);
//     if (a>b){
//         int d=b;
//         b=a;
//         a=d;
//     };
//     if (a>c){
//         int d=a;
//         a=c;
//         c=d;
//     }
//     if (b>c){
//         int d=c;
//         c=b;
//         b=d;
//     }
//     printf ("%d %d %d",a,b,c);
//     return 0;
// }





#include <stdio.h>

int main() {
    int a,b,c;
    scanf ("%d %d %d",&a,&b,&c);
    
}