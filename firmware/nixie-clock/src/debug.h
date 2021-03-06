/*******************************************************************************
MIT License

Copyright (c) 2017 Jeff Kubascik

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*******************************************************************************/

#ifndef __DEBUG_H
#define __DEBUG_H

/* Includes *******************************************************************/


/* Definitions ****************************************************************/
#if DEBUG
#define debug_printf(...) 	printf(__VA_ARGS__) 
#define debug_breakpoint()	__asm__("BKPT")
#define debug_assert(x)		if(!(x)) debug_breakpoint()

#else
#define debug_printf(...) 	((void) 0)
#define debug_breakpoint() 	((void) 0)
#define debug_assert(x)		((void) 0)

#endif


/* Public function prototypes ************************************************/


#endif /* __DEBUG_H */
