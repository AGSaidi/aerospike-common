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

#include <citrusleaf/cf_shash.h>
#include <aerospike/as_hashmap.h>

/******************************************************************************
 * TYPES
 ******************************************************************************/

struct as_iterator_s;

/**
 * Iterator for as_hashmap
 */
struct as_hashmap_iterator_s {

	/**
	 * The hashmap
	 */
    shash * h;

    /**
     * Current entry
     */
    shash_elem * curr;

    /**
     * Next entry
     */
    shash_elem * next;

    /**
     * Position
     */
    uint32_t pos;

    /**
     * Number of entries
     */
    uint32_t size;
};

typedef struct as_hashmap_iterator_s as_hashmap_iterator;

/******************************************************************************
 * FUNCTIONS
 *****************************************************************************/

/**
 * Creates a heap allocated as_iterator for the given as_hashmap.
 */
struct as_iterator_s * as_hashmap_iterator_new(const as_hashmap * map);

/**
 * Initializes a stack allocated as_iterator for the given as_hashmap.
 */
struct as_iterator_s * as_hashmap_iterator_init(const as_hashmap * map, struct as_iterator_s * iterator);
