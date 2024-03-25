

#include <iostream>
using namespace std;

int main()
{

	int b = 1,a;
	*f(&a) = b;
	b = 2;
	f(a) = b;
	int ter[]={2,2,2,2,2,2,2,2,1};
	int *g = ter;
	//cout << sizeof(ter)/sizeof(int) << endl;
	//cout << g << endl<<*g<<endl<<ter<<endl<<*ter;

       int zindex = 1000, yindex = zindex, xindex = zindex;

       int*** arr = new int** [zindex];

       for (int i = 0; i < zindex; i++) {
           arr[i] = new int* [yindex];

           for (int j = 0; j < yindex; j++) {
               arr[i][j] = new int[xindex];
           }
       }

       for (int z = 0; z < zindex; z++)
           for (int y = 0; y < yindex; y++)
               for (int x = 0; x < xindex; x++)
               {if (z%2==0 and y%2==0 and x%2==0)  arr[z][y][x] = 2; else
                   arr[z][y][x] = 1;
               }

       for (int z = 0; z < zindex; z++)
           for (int y = 0; y < yindex; y++)
               for (int x = 0; x < xindex; x++)
                   cout << arr[z][y][x]<<" ";





	cout << a;

}
