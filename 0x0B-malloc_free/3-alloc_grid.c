#include "main.h"

int **alloc_grid(int width, int height)
{

	int *ptr;

	if (width <= 0 || height <= 0)

		return (NULL);

	ptr = malloc((width * height) * sizeof(int));
}
