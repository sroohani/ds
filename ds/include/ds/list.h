#ifndef DS_LIST_H
#define DS_LIST_H

#define DEFINE_NODE(name, type)                                                     \
  typedef struct tag_##name                                                         \
  {                                                                                 \
    type data;                                                                      \
    struct tag_##name *next;                                                        \
  } name;                                                                           \
                                                                                    \
  typedef void (*copy_##type)(type * target, const type *source);                   \
  name *ll_##name_insert_at(int index, const type *data, copy_##type copy_function) \
  {                                                                                 \
    return NULL;                                                                    \
  }

#endif // DS_LIST_H
