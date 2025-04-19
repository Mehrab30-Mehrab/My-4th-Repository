#include<Stdio.h>
int main (){
    int num;
    printf("The gven number = ");
    scanf("%d", &num);
    if (num%2==0){
            printf("The given number is Even");
    }
    else{
            printf("The given number is Odd");
    }
    return 0;
}
