/*
    จงรับค่าจากผู้ใชิ และวิเคราะห์ว่าจำนวนดังกล่าวเป็นจำนวนเต็มบวก หรือจำนวนเต็มลบ
    
    Test case:
        Input :
            49

    Output:
        Positive

    Test case:
        Input :
            -90

    Output:
        Negative

*/
#include <stdio.h>

int main() {
    int num = 0;

    printf("Enter Number :P : ");
    scanf("%d",&num);

    if ( num < 0 )
    {
      printf("Negative");
    }
    else if ( num > 0 )
    {
        printf("Positive");
    }
return 0 ;
}