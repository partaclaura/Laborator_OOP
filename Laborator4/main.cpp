#include"Sort.h"
#include <iostream>

int main()
{
    Sort* sort1 = new Sort(5, 10, 20);
    sort1->printList();
    Sort* sort2 = new Sort(5, new int[5]{ 4, 25, 14, 8, 10 });
    sort2->printList();
    Sort* sort3 = new Sort(5, 3, 3, 4, 8, 1);
    sort3->printList();
    Sort* sort4 = new Sort("34,12,5,90,1");
    sort4->printList();
    sort4->BubbleSort(true);
    sort4->printList();
}

