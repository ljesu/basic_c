int myisdigit(char c)
{
        if (48 <= c && c <= 57)
        {
                return (0);
        }
        else
        {
                return (1);
        }
return (0);
}

int main(void)
{
char c;
int a;
a = myisdigit(50);
c = a + 48;
write (1,&c,1);
return(0);
}














