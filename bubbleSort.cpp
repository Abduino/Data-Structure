# include <iostream.h>
# include <iomanip.h>
# include <conio.h>

void bubleSort (int list[], int last);
int main()
{
clrscr();
int ary[5]={ 10,3,18,5,7};

cout <<"Un sorted array: ";
for(int i =0; i< 5; i++)
cout << setw(5)<<ary[i];
cout <<endl;

bubleSort(ary, 5-1);

cout<<"\n Sorted Array:    ";
for(int j =0; j< 5; j++)
cout << setw(5)<<ary[j];
cout <<endl;
getch();
return 0;
}

void bubleSort (int list[],int last)
{
for( int current=0; current<last; current++)
   {	for(int walker = last ; walker > current; walker--)
	if(list[walker] < list[walker -1])
       {
	int  tempData = list[walker];
	list[walker] = list[walker -1];
	list[walker -1] = tempData;
	       }
   }
//smallest selected: exchange with the current element
return;
}
