#include<stdio.h>

int jenish(){
	int choice,add,sub,mult,a,b;
	float div,perc;
	
	
	printf("Press 1 for '+'\n");
	printf("Press 2 for '-'\n");
	printf("Press 3 for '*'\n");
	printf("Press 4 for '/'\n");
	printf("Press 5 for 'PERCENTAGE'\n");
	printf("Press 0 for exit\n");
	do{
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		
		case 1:
			printf("Enter first number:");
			scanf("%d",&a);
			printf("Enter second number:");
			scanf("%d",&b);
			add=a+b;
			printf("ADDITION IS:%d\n",add);
			break;
			
		case 2:
			printf("Enter first number:");
			scanf("%d",&a);
			printf("Enter second number:");
			scanf("%d",&b);
			sub=a-b;
			printf("SUB IS:%d\n",sub);
			break;	
			
		case 3:
			printf("Enter first number:");
			scanf("%d",&a);
			printf("Enter second number:");
			scanf("%d",&b);
			mult=a*b;
			printf("MULT IS:%d\n",mult);
			break;
		
		case 4:
			printf("Enter first number:");
			scanf("%d",&a);
			printf("Enter second number:");
			scanf("%d",&b);
			div=a/b;
			printf("DIV IS:%f\n",div);
			break;
		
		case 5:
			printf("Enter first number:");
			scanf("%d",&a);
			printf("Enter second number:");
			scanf("%d",&b);
			perc=(a*100)/b;
			printf("PERC IS:%f\n",perc);
			break;
			default:
                printf("Invalid choice\n\n");		
	}
}while (choice !=0);
}

void main(){
	jenish();
}
