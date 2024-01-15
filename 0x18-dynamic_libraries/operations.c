// File: operations.c
#include "Python.h"
#include <stddef.h>

/**
 * add - Adds two integers.
 */
int add(int a, int b) {
	return a + b;
}

/**
 * sub - Subtracts two integers.
 */
int sub(int a, int b) {
	return a - b;
}

/**
 * mul - Multiplies two integers.
 */
int mul(int a, int b) {
	return a * b;
}

/**
 * my_div - Divides two integers.
 */
int my_div(int a, int b) {
	if (b == 0) {
		PyErr_SetString(PyExc_ZeroDivisionError, "division by zero");
		return -1;  // Error
	}
	return a / b;
}

/**
 * mod - Computes the remainder of the division of two integers.
 */
int mod(int a, int b) {
	if (b == 0) {
		PyErr_SetString(PyExc_ZeroDivisionError, "modulo by zero");
		return -1;  // Error
	}
	return a % b;
}

// Define the Python module methods
static PyObject *py_add(PyObject *self, PyObject *args) {
	int a, b;
	if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
		return NULL;
	}
	return PyLong_FromLong(add(a, b));
}

static PyObject *py_sub(PyObject *self, PyObject *args) {
	int a, b;
	if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
		return NULL;
	}
	return PyLong_FromLong(sub(a, b));
}

static PyObject *py_mul(PyObject *self, PyObject *args) {
	int a, b;
	if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
		return NULL;
	}
	return PyLong_FromLong(mul(a, b));
}

static PyObject *py_div(PyObject *self, PyObject *args) {
	int a, b;
	if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
		return NULL;
	}
	return PyLong_FromLong(my_div(a, b));
}

static PyObject *py_mod(PyObject *self, PyObject *args) {
	int a, b;
	if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
		return NULL;
	}
	return PyLong_FromLong(mod(a, b));
}

// Define the Python module
static PyMethodDef methods[] = {
	{"add", py_add, METH_VARARGS, "Add two integers."},
	{"sub", py_sub, METH_VARARGS, "Subtract two integers."},
	{"mul", py_mul, METH_VARARGS, "Multiply two integers."},
	{"div", py_div, METH_VARARGS, "Divide two integers."},
	{"mod", py_mod, METH_VARARGS, "Compute remainder of division."},
	{NULL, NULL, 0, NULL}  // Sentinel
};

static struct PyModuleDef module = {
	PyModuleDef_HEAD_INIT,
	"operations",  // Module name
	NULL,          // Documentation
	-1,            // Size of per-interpreter state or -1
	methods        // Methods
};

PyMODINIT_FUNC PyInit_operations(void) {
	return PyModule_Create(&module);
}

