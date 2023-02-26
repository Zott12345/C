 #include <stdio.h>
  int main(){
    int n,i,j,weight=0,flag=0,correct=0,count=0,weightList[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char code[12]={'1','0','X','9','8','7','6','5','4','3','2'};
    scanf("%d",&n);
    char arr[n][19];
    for(i=0;i<n;i++){scanf("%s",arr[i]);}
    for(i=0;i<n;i++)
	{
        weight=0;
        flag=0;
        correct=0;
        for(j=0;j<17;j++)
		{
            if((arr[i][j]<='9')&&(arr[i][j]>='0'))
			{
                 weight=weight+(arr[i][j]-'0')*weightList[j];
            }
			else
			{
                 flag=1;
                 break;
            }
        }
        if(flag==0&&arr[i][j]==code[weight%11])
		{
            count++;
            correct=1;
        }
 
        if(correct==0)
		{
            printf("%s\n",arr[i]);
        }
    }
    if(count==n)
	{        
        printf("All passed\n");
    }
    return 0;
 }
