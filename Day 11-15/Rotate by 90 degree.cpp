void rotate(int n,int a[][n])
{
    for(int i=0;i<n;i++){
        int temp,j=0,k=n-1;
        while(j<k){
            temp=a[i][j];
            a[i][j++]=a[i][k];
            a[i][k--]=temp;
        }
    }
    for(int i=0;i<n;i++){
        int j,temp;
        for(j=i+1;j<n;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    //code here
}
