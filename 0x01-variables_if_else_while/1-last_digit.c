/**
 * main - prnts the last digit of a ranomly generated number
 * and wether it is greater than 5, lessthan 6 or 0
 * Return:0
int main(void)
{
	int n;
	n=rand()- RAND_MAX /2;
	if((n%10)>5)
	{
		printf("last digit of %dis %d and is greater than 5/n";
		n,n%10) 			} 					else if((n%10)<6 &&(n%10)!=0)		{						printf("last digit of %dand less than 6 and not 0/n";			}					else					{						print("last digit of %d is %d and is 0/n";				}					return(0)			}
