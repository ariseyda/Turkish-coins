#include<stdio.h>
#include<math.h>

//Write a program to dispense change. 
//The user enters the amount paid and the amount due. 
//The program determines how many Lira, 50 Kuruþ, 25 Kurus, 10 Kurus, and 5 Kurus should be given as change with least number of coins. 
//Write a function with five output parameters that determines the quantity of each kind of coin. 
//Lira=Turkish currency(1 lira= 2 x (50 kurus)
//Kurus=A monetary unit of Turkey, equal to one hundredth of a Turkish lira.

void give_back(float d,float p){
	
	int count1=0,count2=0,count3=0,count4=0;
	float give=p-d*1.0;
	
	int given=give*100.0;
	
	printf("Should be given:%.2f lira(%d kurus)\n",give,given);
	
	printf("%d lira ",given/100);
	
	int kurus=given%100;
	printf("%d kurus",kurus);
	
	if(kurus>=50){
		while(kurus>=50){
		kurus=kurus%50;
		count1++;
	   }
	   printf("\n%d -> %d kurus",count1,50);
	}
    if(kurus>=25 && kurus<50){
    	while(kurus>=25 && kurus<50){
    	kurus=kurus%25;
    	count2++;
	   }
	   printf("\n%d -> %d kurus",count2,25);
	}
    if(kurus>=10 && kurus<25){
    	while(kurus>=10 && kurus<25){
    	kurus=kurus%10;
    	count3++;
	   }
	   printf("\n%d -> %d kurus",count3,10);
	}
	if(kurus>=5 && kurus<10){
    	while(kurus>=5 && kurus<10){
    	kurus=kurus%5;
    	count4++;
	   }
	   printf("\n%d -> %d kurus",count4,5);
	}
	if(kurus<5){
		printf("\n%d -> %d kurus",kurus,1);
	}
	
}
int main(){
	
	float paid,due;
	
	printf("Enter the amount due:");
	scanf("%f",&due);
	printf("Enter the amount paid:");
	scanf("%f",&paid);
	
	give_back(due,paid);
	
	return 0;
}
