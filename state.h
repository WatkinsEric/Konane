/**
 * @file state.h
 * @author Julian Martinez del Campo
 *
 * This file provides a state for konane
 */
#ifndef _STATE_H_
#define _STATE_H_

#define SIZE 8

/** state */
struct State {
    char player;            /**< current player */
    char board[SIZE][SIZE]; /**< board layout */
};

struct State * new_state( char board[][SIZE], char player );
int compare_state( const struct State * a, const struct State * b );
void print_state( const struct State * state );

#endif /* _STATE_H_ */
