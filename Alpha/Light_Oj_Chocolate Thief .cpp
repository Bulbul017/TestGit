#include<stdio.h>
int main()
{
    int n,i;
    scanf ("%d",&n);
    for (i=1;i<=n;++i)
    {
        int a,j,ar[1000][3],k,v,mini=198763,maxi=-12,dx,dy;
        scanf ("%d",&a);
        char br[1000][100];
        for (j=0;j<a;++j)
        {
            scanf ("%s",br[j]);
            scanf ("%d %d %d",&ar[j][0],&ar[j][1],&ar[j][2]);
            v=ar[j][0]*ar[j][1]*ar[j][2];
            if (v>=maxi)
            {
                maxi=v;
                dx=j;
            }
            if (v<mini)
            {
                mini=v;
                dy=j;
            }
        }
        if (maxi!=mini)
        {
            printf ("Case %d: %s took chocolate from %s\n",i,br[dx],br[dy]);
        }
        else if (maxi == mini)
        {
            printf ("Case %d: no thief\n",i);
        }
    }
    return 0;
}
