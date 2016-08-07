/*
 * Block_data.h
 *
 *  Created on: Jul 15, 2016
 *      Author: asma
 */

#ifndef BLOCK_DATA_H_
#define BLOCK_DATA_H_

#define BLOCK_ARRAY blocks
#define NUMB_SHAPES 10
#define MATRIX_WIDTH 5
#define MATRIX_HIGHT 5

static int blocks [10] [5] [5] = {

		// O
		{{0, 0, 0, 0, 0},
		 {0, 1, 1, 0, 0},
		 {0, 1, 2, 0, 0},
		 {0, 0, 0, 0, 0},
		 {0, 0, 0, 0, 0}},

		 // I
		{{0, 0, 1, 0, 0},
		 {0, 0, 1, 0, 0},
		 {0, 0, 2, 0, 0},
		 {0, 0, 1, 0, 0},
		 {0, 0, 1, 0, 0}},

		 // S
		{{0, 0, 0, 0, 0},
		 {0, 1, 1, 0, 0},
		 {0, 0, 2, 1, 0},
		 {0, 0, 0, 0, 0},
		 {0, 0, 0, 0, 0}},

		 // Z
		{{0, 0, 0, 0, 0},
		 {0, 0, 1, 1, 0},
		 {0, 1, 2, 0, 0},
		 {0, 0, 0, 0, 0},
		 {0, 0, 0, 0, 0}},

		 // L
		{{0, 0, 1, 0, 0},
		 {0, 0, 1, 0, 0},
		 {0, 0, 2, 1, 0},
		 {0, 0, 0, 0, 0},
		 {0, 0, 0, 0, 0}},

		 // J
		{{0, 0, 1, 0, 0},
		 {0, 0, 1, 0, 0},
		 {0, 1, 2, 0, 0},
		 {0, 0, 0, 0, 0},
		 {0, 0, 0, 0, 0}},

		 // T
		{{0, 0, 0, 0, 0},
		 {0, 0, 0, 0, 0},
		 {0, 1, 2, 1, 0},
		 {0, 0, 1, 0, 0},
		 {0, 0, 0, 0, 0}},

		 // V
		{{0, 0, 0, 0, 0},
		 {0, 0, 1, 0, 0},
		 {0, 1, 2, 0, 0},
		 {0, 0, 0, 0, 0},
		 {0, 0, 0, 0, 0}},

		 //W
		{{0, 0, 0, 0, 0},
		 {0, 0, 0, 1, 0},
		 {0, 0, 2, 1, 0},
		 {0, 1, 1, 0, 0},
		 {0, 0, 0, 0, 0}},

		 // P
		{{0, 0, 0, 0, 0},
		 {0, 0, 1, 1, 0},
		 {0, 0, 2, 1, 0},
	     {0, 0, 1, 0, 0},
		 {0, 0, 0, 0, 0}},

};

#endif /* BLOCK_DATA_H_ */
