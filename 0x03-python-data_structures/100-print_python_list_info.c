#include <Python.h>
#include <stdio.h>

void print_python_list_info(PyObject *p)
{
    int i, size;
    PyObject *item;
    PyListObject *list;

    if (PyList_Check(p))
    {
        list = (PyListObject *)p;
        size = Py_SIZE(list);

        printf("[*] Size of the Python List = %d\n", size);
        printf("[*] Allocated = %d\n", (int)list->allocated);

        for (i = 0; i < size; i++)
        {
            item = PyList_GET_ITEM(p, i);
            printf("Element %d: %s\n", i, Py_TYPE(item)->tp_name);
        }
    }
}
