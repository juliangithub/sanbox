#include <stdio.h>
#include <stdlib.h>

typedef struct np{
 int dat;
 struct np *left,*right;
} node;
node *create(void)
{
 return (malloc(sizeof(node)));
}
node *t(node *a,int d)
{
   if (a==NULL) {
    a=create();
    a->left =a->right =NULL;
    a->dat=d;
   }
   else if (d>=a->dat) {
   a->right =t(a->right,d);
  }
   else if (d<a->dat) {
   a->left =t(a->left ,d);
  }
   return a;
}
void inorder(node *r)
{
 if (r!=NULL) {
  inorder(r->left );
  printf("%d ",r->dat );
  inorder(r->right );
 }
}

int main(void)
{
 node *bst=NULL;

 int i;

while (!feof(stdin)){/*ctrl+z或者ctrl+d结束输入*/

  scanf("%d",&i);
  bst=t(bst,i);      /*生成二叉排序数*/
 }

 inorder(bst);      /*输出二叉排序树*/
 putchar('\n');

return 0;
}