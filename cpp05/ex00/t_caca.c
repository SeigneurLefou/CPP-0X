typedef struct s_caca
{
	int posx;
}	t_caca;

int t_caca()
{
	return(42);
}

int main()
{
	t_caca	caca = (t_caca){.posx = 6};
	t_caca();
}
