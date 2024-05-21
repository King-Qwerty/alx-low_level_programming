<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

void print_opcodes(unsigned char *start, size_t num_bytes) {
    for (size_t i = 0; i < num_bytes; i++) {
        printf("%02x", start[i]);
        if (i < num_bytes - 1) {
            printf(" ");
        } else {
            printf("\n");
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes < 0) {
        fprintf(stderr, "Error\n");
        return 2;
    }

    unsigned char *main_start = (unsigned char *)main;
    print_opcodes(main_start, (size_t)num_bytes);

    return 0;
}

=======
#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
>>>>>>> refs/remotes/origin/master
