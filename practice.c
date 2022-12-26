#include<stdio.h>

int main(){
	char a[25];
	int vcount=0,i,numcount=0,concount=0,specount=0;
	printf("Enter any character ,digit,or special symbol: ");
	gets(a);
	for(i=0;a[i]!='\0';i++){
		
	if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
	{
		vcount=vcount+1;
	}
	else if (a[i]=='A' ||a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
	{
	
		vcount=vcount+1;
	}
	else if (a[i]>='1' &&a[i]<='9'){
		numcount=numcount+1;
	}
	else if (a[i]>='a'&& a[i]<='z')
	{
		concount=concount+1;
	}
	else if (a[i]>='A'&& a[i]<='Z'){
		concount=concount+1;
	
	}
	else{
		specount=specount+1;
	}
		
		
	}
printf("The number of vowel is %d\n",vcount);
printf("The number of digit is %d\n",numcount);
printf("The number of consonant is %d\n",concount);
printf("The number of special digit  is %d\n",specount);


	
}

