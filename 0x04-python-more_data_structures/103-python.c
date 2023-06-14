#include <stdio.h>
#include <Python.h>

/**
 * print_python_bytes - Prints bytes information
 * @p: parameter
 * Return: 0 on success
 */

void print_python_bytes(PyObject *p)
{
	char *str;
	long int s, a, lim;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}
	s = ((PyVarObject *)(p))->ob_size;
	str = ((PyBytesObject *)p)->ob_sval;
	printf("  size: %ld\n", s);
	printf("  trying string: %s\n", str);
	if (s >= 10)
		lim = 10;
	else
		lim = s + 1;
	printf("  first %ld bytes:", lim);
	for (a = 0; a < lim; a++)
		if (str[a] >= 0)
			printf(" %02x", str[a]);
		else
			printf(" %02x", 256 + str[a]);
	printf("\n");
}

/**
 * print_python_list - Prints list information
 * @p: parameter
 * Return: 0 on success
 */

void print_python_list(PyObject *p)
{
	long int s, a;
	PyListObject *list;
	PyObject *obj;

	s = ((PyVarObject *)(p))->ob_size;
	list = (PyListObject *)p;
	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", s);
	printf("[*] Allocated = %ld\n", list->allocated);
	for (a = 0; a < s; a++)
	{
		obj = ((PyListObject *)p)->ob_item[a];
		printf("Element %ld: %s\n", a, ((obj)->ob_type)->tp_name);
		if (PyBytes_Check(obj))
			print_python_bytes(obj);
	}
}
