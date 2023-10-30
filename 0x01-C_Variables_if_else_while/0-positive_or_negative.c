@@ -13,15 +13,15 @@ int main(void)
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
		printf("%d is positive\n", n);
	}
	else if	(n == 0)
	{
		print("%d is zero", n);
		printf("%d is zero\n", n);
	}
	else
	{
		printf("is negative");
		printf("%d is negative\n", n);
	}
	/* return value is */
	return (0);

