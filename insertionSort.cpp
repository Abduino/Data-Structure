# include <iostream.h>
# include <iomanip.h>
# include <conio.h>

void insertionSort (int list[], int last);
int main()
{
clrscr();
int ary[5]={ 10,3,18,5,7};

cout <<"Un sorted array: ";
for(int i =0; i< 5; i++)
cout << setw(5)<<ary[i];
cout <<endl;

insertionSort(ary, 5-1);

cout<<"\n Sorted Array:    ";
for(int j =0; j< 5; j++)
cout << setw(5)<<ary[j];
cout <<endl;
getch();
return 0;
}
void insertionSort (int list[], int last)
{
for(int current = 1; current <= last; current++)
{
int walker;
int located = 0;
int temp = list[current];
for (walker = current-1 ; walker >=0 && !located; )
      {
if(temp < list[walker])
{
list[walker + 1] = list[walker];
walker--;
}
else
located=1;
      	}
list[walker + 1] = temp;
      }
return;}