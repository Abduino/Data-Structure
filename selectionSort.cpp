// abdurehman redi
# include <iostream.h>
# include <iomanip.h>
# include <conio.h>

void selectionSort (int list[], int last);
int main()
{
clrscr();
int ary[5]={ 10,3,18,5,7};

cout <<"Un sorted array: ";
for(int i =0; i< 5; i++)
cout << setw(5)<<ary[i];
cout <<endl;

selectionSort(ary, 5-1);
cout<<"\n Sorted Array:    ";
for(int j =0; j< 5; j++)
cout << setw(5)<<ary[j];
cout <<endl;
getch();
return 0;
}

void selectionSort (int list[],int last)
{
for( int current=0; current<last; current++)
{int  smallest=current;
for(int walker=current +1; walker<=last; walker++)
if(list[walker] < list[smallest])
smallest=walker;

//smallest selected :exchange with the current element
int  temp = list[current];
list[current] = list[smallest];
list[smallest] = temp;
}
return;
}
