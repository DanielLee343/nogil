switch (opcode) {
  case CLEAR_ACC: goto CLEAR_ACC;
  case CLEAR_FAST: goto CLEAR_FAST;
  case ALIAS: goto ALIAS;
  case COPY: goto COPY;
  case MOVE: goto MOVE;
  case FUNC_HEADER: goto FUNC_HEADER;
  case METHOD_HEADER: goto METHOD_HEADER;
  case CFUNC_HEADER: goto CFUNC_HEADER;
  case CFUNC_HEADER_NOARGS: goto CFUNC_HEADER_NOARGS;
  case CFUNC_HEADER_O: goto CFUNC_HEADER_O;
  case CMETHOD_NOARGS: goto CMETHOD_NOARGS;
  case CMETHOD_O: goto CMETHOD_O;
  case FUNC_TPCALL_HEADER: goto FUNC_TPCALL_HEADER;
  case UNARY_POSITIVE: goto UNARY_POSITIVE;
  case UNARY_NEGATIVE: goto UNARY_NEGATIVE;
  case UNARY_NOT: goto UNARY_NOT;
  case UNARY_NOT_FAST: goto UNARY_NOT_FAST;
  case UNARY_INVERT: goto UNARY_INVERT;
  case BINARY_MATRIX_MULTIPLY: goto BINARY_MATRIX_MULTIPLY;
  case BINARY_POWER: goto BINARY_POWER;
  case BINARY_MULTIPLY: goto BINARY_MULTIPLY;
  case BINARY_MODULO: goto BINARY_MODULO;
  case BINARY_ADD: goto BINARY_ADD;
  case BINARY_SUBTRACT: goto BINARY_SUBTRACT;
  case BINARY_SUBSCR: goto BINARY_SUBSCR;
  case BINARY_FLOOR_DIVIDE: goto BINARY_FLOOR_DIVIDE;
  case BINARY_TRUE_DIVIDE: goto BINARY_TRUE_DIVIDE;
  case BINARY_LSHIFT: goto BINARY_LSHIFT;
  case BINARY_RSHIFT: goto BINARY_RSHIFT;
  case BINARY_AND: goto BINARY_AND;
  case BINARY_XOR: goto BINARY_XOR;
  case BINARY_OR: goto BINARY_OR;
  case IS_OP: goto IS_OP;
  case CONTAINS_OP: goto CONTAINS_OP;
  case COMPARE_OP: goto COMPARE_OP;
  case INPLACE_FLOOR_DIVIDE: goto INPLACE_FLOOR_DIVIDE;
  case INPLACE_TRUE_DIVIDE: goto INPLACE_TRUE_DIVIDE;
  case INPLACE_ADD: goto INPLACE_ADD;
  case INPLACE_SUBTRACT: goto INPLACE_SUBTRACT;
  case INPLACE_MULTIPLY: goto INPLACE_MULTIPLY;
  case INPLACE_LSHIFT: goto INPLACE_LSHIFT;
  case INPLACE_RSHIFT: goto INPLACE_RSHIFT;
  case INPLACE_AND: goto INPLACE_AND;
  case INPLACE_XOR: goto INPLACE_XOR;
  case INPLACE_OR: goto INPLACE_OR;
  case INPLACE_MODULO: goto INPLACE_MODULO;
  case INPLACE_MATRIX_MULTIPLY: goto INPLACE_MATRIX_MULTIPLY;
  case INPLACE_POWER: goto INPLACE_POWER;
  case LOAD_FAST: goto LOAD_FAST;
  case LOAD_NAME: goto LOAD_NAME;
  case LOAD_CONST: goto LOAD_CONST;
  case LOAD_ATTR: goto LOAD_ATTR;
  case LOAD_GLOBAL: goto LOAD_GLOBAL;
  case LOAD_METHOD: goto LOAD_METHOD;
  case LOAD_DEREF: goto LOAD_DEREF;
  case LOAD_CLASSDEREF: goto LOAD_CLASSDEREF;
  case STORE_FAST: goto STORE_FAST;
  case STORE_NAME: goto STORE_NAME;
  case STORE_ATTR: goto STORE_ATTR;
  case STORE_ATTR_REG: goto STORE_ATTR_REG;
  case STORE_GLOBAL: goto STORE_GLOBAL;
  case STORE_SUBSCR: goto STORE_SUBSCR;
  case STORE_SUBSCR_REG: goto STORE_SUBSCR_REG;
  case STORE_DEREF: goto STORE_DEREF;
  case DELETE_FAST: goto DELETE_FAST;
  case DELETE_NAME: goto DELETE_NAME;
  case DELETE_ATTR: goto DELETE_ATTR;
  case DELETE_GLOBAL: goto DELETE_GLOBAL;
  case DELETE_SUBSCR: goto DELETE_SUBSCR;
  case DELETE_DEREF: goto DELETE_DEREF;
  case CALL_FUNCTION: goto CALL_FUNCTION;
  case CALL_FUNCTION_EX: goto CALL_FUNCTION_EX;
  case CALL_METHOD: goto CALL_METHOD;
  case CALL_INTRINSIC_1: goto CALL_INTRINSIC_1;
  case CALL_INTRINSIC_N: goto CALL_INTRINSIC_N;
  case RETURN_VALUE: goto RETURN_VALUE;
  case RAISE: goto RAISE;
  case YIELD_VALUE: goto YIELD_VALUE;
  case YIELD_FROM: goto YIELD_FROM;
  case JUMP: goto JUMP;
  case JUMP_IF_FALSE: goto JUMP_IF_FALSE;
  case JUMP_IF_TRUE: goto JUMP_IF_TRUE;
  case JUMP_IF_NOT_EXC_MATCH: goto JUMP_IF_NOT_EXC_MATCH;
  case POP_JUMP_IF_FALSE: goto POP_JUMP_IF_FALSE;
  case POP_JUMP_IF_TRUE: goto POP_JUMP_IF_TRUE;
  case GET_ITER: goto GET_ITER;
  case GET_YIELD_FROM_ITER: goto GET_YIELD_FROM_ITER;
  case FOR_ITER: goto FOR_ITER;
  case IMPORT_NAME: goto IMPORT_NAME;
  case IMPORT_FROM: goto IMPORT_FROM;
  case IMPORT_STAR: goto IMPORT_STAR;
  case BUILD_SLICE: goto BUILD_SLICE;
  case BUILD_TUPLE: goto BUILD_TUPLE;
  case BUILD_LIST: goto BUILD_LIST;
  case BUILD_SET: goto BUILD_SET;
  case BUILD_MAP: goto BUILD_MAP;
  case END_EXCEPT: goto END_EXCEPT;
  case CALL_FINALLY: goto CALL_FINALLY;
  case END_FINALLY: goto END_FINALLY;
  case LOAD_BUILD_CLASS: goto LOAD_BUILD_CLASS;
  case GET_AWAITABLE: goto GET_AWAITABLE;
  case GET_AITER: goto GET_AITER;
  case GET_ANEXT: goto GET_ANEXT;
  case END_ASYNC_WITH: goto END_ASYNC_WITH;
  case END_ASYNC_FOR: goto END_ASYNC_FOR;
  case UNPACK: goto UNPACK;
  case MAKE_FUNCTION: goto MAKE_FUNCTION;
  case SETUP_WITH: goto SETUP_WITH;
  case END_WITH: goto END_WITH;
  case SETUP_ASYNC_WITH: goto SETUP_ASYNC_WITH;
  case LIST_EXTEND: goto LIST_EXTEND;
  case LIST_APPEND: goto LIST_APPEND;
  case SET_ADD: goto SET_ADD;
  case SET_UPDATE: goto SET_UPDATE;
  case DICT_MERGE: goto DICT_MERGE;
  case DICT_UPDATE: goto DICT_UPDATE;
  case SETUP_ANNOTATIONS: goto SETUP_ANNOTATIONS;
  case SET_FUNC_ANNOTATIONS: goto SET_FUNC_ANNOTATIONS;
  case WIDE: goto WIDE;
  case 128+CLEAR_FAST: goto WIDE_CLEAR_FAST;
  case 128+ALIAS: goto WIDE_ALIAS;
  case 128+COPY: goto WIDE_COPY;
  case 128+MOVE: goto WIDE_MOVE;
  case 128+FUNC_HEADER: goto WIDE_FUNC_HEADER;
  case 128+BINARY_MATRIX_MULTIPLY: goto WIDE_BINARY_MATRIX_MULTIPLY;
  case 128+BINARY_POWER: goto WIDE_BINARY_POWER;
  case 128+BINARY_MULTIPLY: goto WIDE_BINARY_MULTIPLY;
  case 128+BINARY_MODULO: goto WIDE_BINARY_MODULO;
  case 128+BINARY_ADD: goto WIDE_BINARY_ADD;
  case 128+BINARY_SUBTRACT: goto WIDE_BINARY_SUBTRACT;
  case 128+BINARY_SUBSCR: goto WIDE_BINARY_SUBSCR;
  case 128+BINARY_FLOOR_DIVIDE: goto WIDE_BINARY_FLOOR_DIVIDE;
  case 128+BINARY_TRUE_DIVIDE: goto WIDE_BINARY_TRUE_DIVIDE;
  case 128+BINARY_LSHIFT: goto WIDE_BINARY_LSHIFT;
  case 128+BINARY_RSHIFT: goto WIDE_BINARY_RSHIFT;
  case 128+BINARY_AND: goto WIDE_BINARY_AND;
  case 128+BINARY_XOR: goto WIDE_BINARY_XOR;
  case 128+BINARY_OR: goto WIDE_BINARY_OR;
  case 128+IS_OP: goto WIDE_IS_OP;
  case 128+CONTAINS_OP: goto WIDE_CONTAINS_OP;
  case 128+COMPARE_OP: goto WIDE_COMPARE_OP;
  case 128+INPLACE_FLOOR_DIVIDE: goto WIDE_INPLACE_FLOOR_DIVIDE;
  case 128+INPLACE_TRUE_DIVIDE: goto WIDE_INPLACE_TRUE_DIVIDE;
  case 128+INPLACE_ADD: goto WIDE_INPLACE_ADD;
  case 128+INPLACE_SUBTRACT: goto WIDE_INPLACE_SUBTRACT;
  case 128+INPLACE_MULTIPLY: goto WIDE_INPLACE_MULTIPLY;
  case 128+INPLACE_LSHIFT: goto WIDE_INPLACE_LSHIFT;
  case 128+INPLACE_RSHIFT: goto WIDE_INPLACE_RSHIFT;
  case 128+INPLACE_AND: goto WIDE_INPLACE_AND;
  case 128+INPLACE_XOR: goto WIDE_INPLACE_XOR;
  case 128+INPLACE_OR: goto WIDE_INPLACE_OR;
  case 128+INPLACE_MODULO: goto WIDE_INPLACE_MODULO;
  case 128+INPLACE_MATRIX_MULTIPLY: goto WIDE_INPLACE_MATRIX_MULTIPLY;
  case 128+INPLACE_POWER: goto WIDE_INPLACE_POWER;
  case 128+LOAD_FAST: goto WIDE_LOAD_FAST;
  case 128+LOAD_NAME: goto WIDE_LOAD_NAME;
  case 128+LOAD_CONST: goto WIDE_LOAD_CONST;
  case 128+LOAD_ATTR: goto WIDE_LOAD_ATTR;
  case 128+LOAD_GLOBAL: goto WIDE_LOAD_GLOBAL;
  case 128+LOAD_METHOD: goto WIDE_LOAD_METHOD;
  case 128+LOAD_DEREF: goto WIDE_LOAD_DEREF;
  case 128+LOAD_CLASSDEREF: goto WIDE_LOAD_CLASSDEREF;
  case 128+STORE_FAST: goto WIDE_STORE_FAST;
  case 128+STORE_NAME: goto WIDE_STORE_NAME;
  case 128+STORE_ATTR: goto WIDE_STORE_ATTR;
  case 128+STORE_ATTR_REG: goto WIDE_STORE_ATTR_REG;
  case 128+STORE_GLOBAL: goto WIDE_STORE_GLOBAL;
  case 128+STORE_SUBSCR: goto WIDE_STORE_SUBSCR;
  case 128+STORE_SUBSCR_REG: goto WIDE_STORE_SUBSCR_REG;
  case 128+STORE_DEREF: goto WIDE_STORE_DEREF;
  case 128+DELETE_FAST: goto WIDE_DELETE_FAST;
  case 128+DELETE_NAME: goto WIDE_DELETE_NAME;
  case 128+DELETE_ATTR: goto WIDE_DELETE_ATTR;
  case 128+DELETE_GLOBAL: goto WIDE_DELETE_GLOBAL;
  case 128+DELETE_SUBSCR: goto WIDE_DELETE_SUBSCR;
  case 128+DELETE_DEREF: goto WIDE_DELETE_DEREF;
  case 128+CALL_FUNCTION: goto WIDE_CALL_FUNCTION;
  case 128+CALL_FUNCTION_EX: goto WIDE_CALL_FUNCTION_EX;
  case 128+CALL_METHOD: goto WIDE_CALL_METHOD;
  case 128+CALL_INTRINSIC_1: goto WIDE_CALL_INTRINSIC_1;
  case 128+CALL_INTRINSIC_N: goto WIDE_CALL_INTRINSIC_N;
  case 128+YIELD_FROM: goto WIDE_YIELD_FROM;
  case 128+JUMP: goto WIDE_JUMP;
  case 128+JUMP_IF_FALSE: goto WIDE_JUMP_IF_FALSE;
  case 128+JUMP_IF_TRUE: goto WIDE_JUMP_IF_TRUE;
  case 128+JUMP_IF_NOT_EXC_MATCH: goto WIDE_JUMP_IF_NOT_EXC_MATCH;
  case 128+POP_JUMP_IF_FALSE: goto WIDE_POP_JUMP_IF_FALSE;
  case 128+POP_JUMP_IF_TRUE: goto WIDE_POP_JUMP_IF_TRUE;
  case 128+GET_ITER: goto WIDE_GET_ITER;
  case 128+GET_YIELD_FROM_ITER: goto WIDE_GET_YIELD_FROM_ITER;
  case 128+FOR_ITER: goto WIDE_FOR_ITER;
  case 128+IMPORT_NAME: goto WIDE_IMPORT_NAME;
  case 128+IMPORT_FROM: goto WIDE_IMPORT_FROM;
  case 128+IMPORT_STAR: goto WIDE_IMPORT_STAR;
  case 128+BUILD_SLICE: goto WIDE_BUILD_SLICE;
  case 128+BUILD_TUPLE: goto WIDE_BUILD_TUPLE;
  case 128+BUILD_LIST: goto WIDE_BUILD_LIST;
  case 128+BUILD_SET: goto WIDE_BUILD_SET;
  case 128+BUILD_MAP: goto WIDE_BUILD_MAP;
  case 128+END_EXCEPT: goto WIDE_END_EXCEPT;
  case 128+CALL_FINALLY: goto WIDE_CALL_FINALLY;
  case 128+END_FINALLY: goto WIDE_END_FINALLY;
  case 128+GET_AWAITABLE: goto WIDE_GET_AWAITABLE;
  case 128+GET_AITER: goto WIDE_GET_AITER;
  case 128+GET_ANEXT: goto WIDE_GET_ANEXT;
  case 128+END_ASYNC_WITH: goto WIDE_END_ASYNC_WITH;
  case 128+END_ASYNC_FOR: goto WIDE_END_ASYNC_FOR;
  case 128+UNPACK: goto WIDE_UNPACK;
  case 128+MAKE_FUNCTION: goto WIDE_MAKE_FUNCTION;
  case 128+SETUP_WITH: goto WIDE_SETUP_WITH;
  case 128+END_WITH: goto WIDE_END_WITH;
  case 128+SETUP_ASYNC_WITH: goto WIDE_SETUP_ASYNC_WITH;
  case 128+LIST_EXTEND: goto WIDE_LIST_EXTEND;
  case 128+LIST_APPEND: goto WIDE_LIST_APPEND;
  case 128+SET_ADD: goto WIDE_SET_ADD;
  case 128+SET_UPDATE: goto WIDE_SET_UPDATE;
  case 128+DICT_MERGE: goto WIDE_DICT_MERGE;
  case 128+DICT_UPDATE: goto WIDE_DICT_UPDATE;
  case 128+SET_FUNC_ANNOTATIONS: goto WIDE_SET_FUNC_ANNOTATIONS;
  default: goto _unknown_opcode;
};
