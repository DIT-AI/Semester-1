void sort(char x[])
{
	int temp = 0;

	if((x[0]<=x[1]) && (x[0]<=x[2]) && (x[1]<=x[2]))
	{
	}
	else if ((x[0]<=x[1]) && (x[0]<=x[2]) && (x[2]<=x[1]))
	{
		temp = x[1];
		x[1] = x[2];
		x[2] = temp;
	}
	else if ((x[1]<= x[0]) && (x[1] <= x[2]) && (x[0]<= x[2]))
	{
		temp = x[0];
		x[0] = x[1];
		x[1] = temp;
	}
	else if ((x[1]<= x[0]) && (x[1] <= x[2]) && (x[2]<= x[0]))
	{
		temp = x[0];
		x[0] = x[1];
		x[1] = x[2];
		x[2] = temp;
	}
	else if ((x[2] <= x[0]) && (x[2] <= x[1]) && (x[0] <= x[1]))
	{
		temp = x[0];
		x[0] = x[2];
		x[2] = x[1];
		x[1] = temp;
	}
	else if ((x[2] <= x[0]) && (x[2] <= x[1]) && (x[1] <= x[0]))
	{
		temp = x[0];
		x[0] = x[2];
		x[2] = temp;
	}
}


