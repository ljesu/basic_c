/*int main(void)
{
printf("%d\n",strlen("salut"));
return(0);
}

int my_strlen(void)*/

#include<unistd.h>
int my_fct(char dd[])
{
	int i=0;
	while (dd[i]!='\0')
	{
		i=i+1;
	}
	return(i);
}

int main(void)
{
int i;
i= my_fct("salut max");
printf("%d\n",i);
return(0);
}

