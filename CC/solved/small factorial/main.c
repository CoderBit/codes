    #include<stdio.h>

    int main(void) {
    	int t,n,arr[200]={0},m=0,i,j,temp=0,x=0;
        scanf("%d",&t);
    	for(;t>0;t--) {
    		scanf("%d",&n);
    		arr[0]=1;
    		m=1;
    		for(i=2;i<=n;i++) {
    			for(j=0;j<m;j++) {
    				x=(arr[j]*i)+temp;
    				arr[j]=x%10;
    				temp=x/10;
    			}
    			if(temp>0) {
    				for(;temp!=0;) {
    					arr[m]=temp%10;
    					temp/=10;
    					m++;
    				}
    			}
    		}
    		for(i=m-1;i>=0;i--) {
    			printf("%d",arr[i]);
    		}
    		printf("\n");
    		temp=0;
    	}
    	return 0;
    }
