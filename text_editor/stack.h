#ifndef	STACK_H
#define	STACK_H
#include"node.h"
struct	stack{
	public:
	node	*top=NULL;
	void	pop();
	void	push();
};
#endif
