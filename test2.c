#include"slist.h"
void SLTTest1()
{
	SLTNote* plist = NULL;
	SLTPushBack(&plist,1);
	SLTPushBack(&plist, 2);
    STLPrint(plist);

}






int main()
{
	SLTTest1();
	return 0;
}