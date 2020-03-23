#include<stdio.h>
#include<math.h>

int sieve(int n);
int prime_facto(int n);

int arr[10001],base[20],power[20],prime_f[24];

int main()
{
    int n,p;
    printf("Enter a number : ");
    scanf("%d",&n);

    prime_facto(n);
}


int sieve(int n)
{
    int i,j;
    for(i=0; i<= n; i+=2)
    {
        arr[i] = 2;
    }

    for(i = 3; i*i<= n; i+=2)
    {
        if(arr[i]==0)
        {
            arr[i] = i;
            for(j=i*i; j<=n; j+=i*2)
            {
                if(arr[j] == 0)
                    arr[j] = i;
            }
        }
    }
    i=(i/2)*2+1;
    for(j=i; j<=n; j+=2)
    {
        if(arr[j] == 0)
            arr[j]=j;
    }
    return 0;
}

int prime_facto(int n)
{
    sieve(n);

    int i=0,pwr=0,sum = 0,nod=1;
    if(n!=1)
    {
        base[i++] = arr[n];
        pwr++;
        n = n/arr[n];
    }
    while(n!=1)
    {

        if(base[i-1] != arr[n])
        {
            power[i-1] = pwr-sum;
            nod *= power[i-1]+1;
            sum+=power[i-1];

            base[i++] = arr[n];
        }
        pwr++;
        n = n/arr[n];
    }

    power[i-1] = pwr-sum;
    nod *= power[i-1]+1;
    printf("nod = %d\n",nod);

    int limit = i,sod=1,ssp;//sod sum part
printf("limit %d\n",limit);
    for(i = 0; i<limit; i++)
    {
        ssp = 0;
        for(int j = 0; j<=power[i]; j++)
        {
            ssp += pow(base[i],j);
            printf("ssp = %d\n",ssp);
        }
        sod *= ssp;
    }
    printf("SOD = %d",sod);

    return 0;
}
