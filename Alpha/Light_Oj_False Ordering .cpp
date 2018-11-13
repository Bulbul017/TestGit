#include<stdio.h>
#include<math.h>

void sq (int *ar)
{
    int i,v;
    for (i=1;i<32;++i)
    {
       v=(i*i)-1;
       *(ar+v)=-1;
    }
}

void div (int *ar)
{
   int i,a,b,c=0,d,j;
   for (i=1;i<1001;++i)
   {
      a=pow(i,0.5) ;
      for (j=1;j<=a;++j)
      {
          if (i%j==0)
          {
              ++c;
          }
      }
      d=i-1;
      *(ar+d)+=(c*2);
   }
}

int* alp (int *ar,int *nar)
{

    int i,j,n=1;
    *(nar)=1;
    for (i=2;i<33;++i)
    {
        for(j=999;j>0;j--)
        {
            if (*(ar+j)==i)
            {
               *(nar+n)=j+1;
               ++n;
            }
        }
    }
    return nar;
}
int main()
{
   int n,i,nar[1000],*p,ar[1000];
   scanf ("%d",&n);
   for (i=0;i<1000;++i)
   {
       *(ar+i)=0;
   }
   sq(ar);
   div(ar);
   p=alp(ar,nar);
   for (i=1;i<=n;++i)
   {
       int q;
       scanf ("%d",&q);
       printf ("Case %d: %d\n",i,*(p+q-1));
   }
   return 0;
}
