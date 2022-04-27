#include <bits/stdc++.h>

////  the matrix elements must in decending order



using namespace std;

int32_t main()
{
   int row, column, target;
   cin>>row>>column>>target;
   int mat[row][column];
   for(int i=0;i<row; i++)
   {
       for(int j=0;j<column; j++)
       {
           cin>>mat[i][j];


       }
   }

       int r=0, c=column-1;
         bool found= false;
       while(r<row && c>=0)
       {
           if(mat[r][c]==target)
           {
               found=true;

           }
           if(mat[r][c]>target)
           {
                c--;

           }
          else r++;


       }


       if(found){
        cout<<"the element is found\n"<<endl;

       }

      else {cout<< "the element is not found\n"<<endl;


      }
    return 0;
}
