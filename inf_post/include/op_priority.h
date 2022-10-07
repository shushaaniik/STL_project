#ifndef OP_PRIORITY_H
#define OP_PRIORITY_H

enum Operator_Priority { third, second, first, not_operator };

Operator_Priority op_priority(char);

#endif
