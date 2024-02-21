#include <stdio.h>
#include <stdlib.h>

#include <ds/list.h>

typedef struct
{
  int int_data;
  double double_data;
} MyData;

DEFINE_NODE(MyDataNode, MyData)

int main()
{
    MyDataNode mdn =
    {
        .data.int_data = 10,
        .data.double_data = 2.5
    };

    printf("int_data = %d\ndouble_data = %f\n", mdn.data.int_data, mdn.data.double_data);

    return 0;
}
