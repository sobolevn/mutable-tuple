#include <Python.h>


static PyObject *
tuple_set_item(PyObject *self, PyObject *args)
{
    PyObject *tup, *obj;
    Py_ssize_t index;

    if (!PyArg_ParseTuple(args, "OnO:tuple_set_item", &tup, &index, &obj)) {
        return NULL;
    }

    if (!PyTuple_CheckExact(tup)) {
        PyErr_SetString(PyExc_TypeError, "'tup' is not a tuple");
        return NULL;
    }

    if (index < 0 || index >= Py_SIZE(tup)) {
        PyErr_SetString(PyExc_IndexError, "out of bounds");
        return NULL;
    }
    Py_DECREF(PyTuple_GET_ITEM(tup, index));
    PyTuple_SET_ITEM(tup, index, obj);

    Py_RETURN_NONE;
}

PyDoc_STRVAR(tuple_set_item__doc__,
"set_item($module, tup, index, obj, /)\n"
"--\n"
"\n"
"Mutate 'tup' and set item at 'index' as 'obj'.");


static PyMethodDef module_methods[] = {
    {"set_item", (PyCFunction)tuple_set_item, METH_VARARGS, tuple_set_item__doc__},
    {NULL}  // sentinel
};


static struct PyModuleDef mutable_tuple_spec = {
    PyModuleDef_HEAD_INIT,
    "mutable_tuple",
    PyDoc_STR("Mutate your tuples!"),
    -1,
    module_methods
};


PyMODINIT_FUNC PyInit_mutable_tuple(void) {
    return PyModule_Create(&mutable_tuple_spec);
}
