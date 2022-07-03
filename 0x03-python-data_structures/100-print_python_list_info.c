#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info - prints some basic info about Python lists
 *
 * @p: Object of python
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
void print_python_list_info(PyObject *p)
{
	long int s, a, i;
	PyObject *obj;

	s = PyList_Size(p);
	a = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %ld\n", s);
	printf("[*] Allocated = %ld\n", a);

	for (i = 0; i < size; i++)
	{
		obj = PyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(obj)->tp_name);

	}
}
