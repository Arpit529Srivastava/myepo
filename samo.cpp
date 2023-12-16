/*#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float r1, r2,rpart,ipart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    float d = b * b - 4 * a * c;
    if (d == 0) {
        r1 = -b / (2.0 * a);
        r2 = r1;
        printf("Roots are real and equal: r1 = %.2f, r2 = %.2f\n", r1, r2);
    }
if(d>0){
    r1=(-b+pow(d,0.5))/(2.0*a);
    r2=(-b-pow(d,0.5))/(2.0*a);
printf("Roots are real and equal: r1 = %.2f, r2 = %.2f\n", r1, r2);
}
else{
    rpart=-(b/(2.0*a));
    ipart=sqrt(fabs(d))/(2*a);
    printf("root is %f+i%f", rpart, ipart);
     printf("root is %f-i%f", rpart, ipart);
}
    return 0;
}
*/

//paladrome


/*#include <stdio.h>
int main(){
    int n, digit, temp;
    int rev=0; 
    scanf("%d", &n);
    temp=n;
    while(n!=0){
        digit= n%10;
        rev= rev*10+digit;
        n=n/10;
    }
    if(temp==rev){
        printf("palandrome hai");
    }
    else{
        printf("palandrome nhi hai");
    }
}
*/
/*#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the key to search: ");
    scanf("%d", &key);

    int mid;
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            printf("Key found at index: %d\n", mid);
            return 0;
        } else if (arr[mid] < key) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    printf("Key not found in the array\n");

    return 0;
}
*/
//
/*#include <stdio.h>
#include <string.h>
int main(){
    char s1[100], s2[100], s3[100];
    printf("enter the value of s1:");
    gets(s1);
    printf("enter the value of s2:");
    gets(s2);
    int count=0;
    int i, j=0;
    while(s1[i]!=0){
s3[count]=s1[i];
count++;
i++;
    }
    while(s2[j]!=0){
s3[count]=s2[j];
count++;
j++;
    }
    printf("s3 is %s",s3);

}*/

#include <stdio.h>
int main(){
    int n;
    int temp=0;
    int arr[n];
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("enter the elements of array");
    for(int i=0; i<n; ++i){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n-1; ++i){
        for(int j=0; j<n-1; ++j){
            if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }

    }
    printf("the sorted arry is");
    for(int i=0 ; i<n; ++i){
        printf("%d \n", arr[i]);
    }

}