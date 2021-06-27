


int main(int ac, char **av)
{
	printf("%d\n", ac);
	int i=0,j=0;
	while(i<ac)
	{
		while (av[i][j] !="\0")
		{
			printf("%c\n", av[i][j]);
			j++;
		}
		i++
	}
	return 0;	
}
