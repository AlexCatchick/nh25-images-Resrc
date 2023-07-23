#include <stdio.h>
int isPowerOfTwo(int);
int main()
{
    int num;
    scanf("%d",&num);
    (isPowerOfTwo(num)==1) ? printf("true\n") : printf("false\n");
    return 0;

}
int isPowerOfTwo(int num)
{
    int count=0;
    if(num==0)
    {
        return 0;
    }
    else
    {
        while(num!=0)
        {
            int bit = num & 1;
            if(bit==1)
            count++;
            num = num>>1;
        }
        if(count==1)
        return 1;
        else
        return 0;
    }
}