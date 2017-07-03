int main(void)
{
myputstr("salut");
return(0);
}
void fonction(char c)
{
	write(1,&c,1);
}

void myputstr(char str[])
{

	int i=0;
	while (str[i]!='\0')
	{

	fonction(str[i]);
	
	i=i+1;
	}
}

