/******************************************************************************
 * Copyright 2008-2013 by Aerospike.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy 
 * of this software and associated documentation files (the "Software"), to 
 * deal in the Software without restriction, including without limitation the 
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
 * sell copies of the Software, and to permit persons to whom the Software is 
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in 
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *****************************************************************************/

#pragma once

#include <aerospike/as_arraylist.h>

/******************************************************************************
 * TYPES
 ******************************************************************************/

struct as_iterator_s;

/**
 * Iterator for as_arraylist.
 */
struct as_arraylist_iterator_s {

	/**
	 * The as_arraylist being iterated over
	 */
	const as_arraylist * list;

	/**
	 * The current position of the iteration
	 */
	uint32_t pos;
};

typedef struct as_arraylist_iterator_s as_arraylist_iterator;

/******************************************************************************
 * FUNCTIONS
 *****************************************************************************/

/**
 * Creates a new heap allocated as_iterator for as_arraylist.
 */
struct as_iterator_s * as_arraylist_iterator_new(const as_arraylist *);

/**
 * Initializes a stack allocated as_iterator for as_arraylist.
 */
struct as_iterator_s * as_arraylist_iterator_init(const as_arraylist *, struct as_iterator_s *);