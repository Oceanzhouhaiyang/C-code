#include"seqlist.h"
seqlisttest()
{
	Seqlist s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListprint(&s1);


}
int main()
{
	seqlisttest();
	return 0;
}