#include<stdio.h>
#include<math.h>
double pi = acos(-1);
int main()
{
    int q,i;
    scanf ("%d",&q);
    for (i=1;i<=q;++i)
    {
        double R,a,b,c,d,e,f;
        int n;
        scanf ("%lf %d",&R,&n);
        a=pi/n;
        b=sin(a);
        c=(R*b)/(1+b);
        printf ("Case %d: %.10lf\n",i,c);

    }
    return 0;
}
