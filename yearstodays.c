#include<stdio.h>

main()
{
	int years,days,month,temp,temp2,choice;

	printf("1.Years to days\n2.Days to years\nEnter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			printf("Enter Years:");
			scanf("%d",&years);
			days=years*365;
			printf("%d days in %d years",days,years);
			break;
		}
		case 2:
		{
			printf("Enter Days :");
			scanf("%d",&days);

			years=days/365;

			month=(days%365)/7;
			days=(days%365)%7;

			printf("%d years, %d weeks and %d days ",years,month,days);
			break;
		}
		default:{
			printf("Please Enter valid choice");
			break;
		}
	}
}
