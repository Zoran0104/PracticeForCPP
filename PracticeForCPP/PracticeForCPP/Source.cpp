#include<iostream>
int main()
{
	std::string list1[50], list2[50], list3[50];
	for (int i = 0; !list1->empty()||!list2->empty(); i++){
		int flag = 0;
		for (int j = 0; !list2->empty(); j++)
			flag = list1[i] == list2[j] ? 1 : 0;
		list3[i] = flag == 0 ? list1[i] : NULL;	}
}