#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main() 
{
	char FirstName [10][30], LastName[10][10];
    strcpy(FirstName[1],"Orson Milka"); strcpy(LastName[1],"Iddins");
    strcpy(FirstName[2],"Erna Dorey"); strcpy(LastName[2],"Battelle");
    strcpy(FirstName[3],"Flori Chaunce"); strcpy(LastName[3],"Franzel");
    strcpy(FirstName[4],"Odetta Sue"); strcpy(LastName[4],"Kaspar");
    strcpy(FirstName[5],"Roy Ketti"); strcpy(LastName[5],"Kopfen");
    strcpy(FirstName[6],"Madel Bordie"); strcpy(LastName[6],"Maplebeck");
    strcpy(FirstName[7],"Selle"); strcpy(LastName[7],"Bellison");
    strcpy(FirstName[8],"Leonerd Adda Mitchell"); strcpy(LastName[8],"Monaghan");
    strcpy(FirstName[9],"Debra"); strcpy(LastName[9],"Micheli");
    strcpy(FirstName[10],"Hailey Avie"); strcpy(LastName[10],"Annakin");
    
    ofstream myfile;
	myfile.open("unsorted name list.txt");
	    for(int i=1;i<11;i++)
	    {
	    myfile
		<<FirstName[i]<<" "<<LastName[i]<<endl;
		 	
		}
	myfile.close();
    
    for(int i=1;i<11;i++)
	{
 		printf("%s %s\n",FirstName[i],LastName[i]);
            
                    }
    
  	puts("\n");
	for(int i=0;i<11;i++){
 
            int j,bd;
            j=i;
            for(int k=i+1;k<11;k++)
            {
                    bd=strcmp(LastName[j],LastName[k]);
                    if(bd==1) j=k;        /* angka 1 merupakan urut data secara ascending, untuk descending ganti dengan -1 */
                    }
                                if(j!=i){
                             char temp[1][30]; /* Swapping */
                             strcpy(temp[0],LastName[j]);
                             strcpy(LastName[j],LastName[i]);
                             strcpy(LastName[i],temp[0]);}
                    }
	
  	for(int i=0;i<11;i++)
	  {
  		puts(LastName[i]);
		  }
	
	ofstream editedfile;
	editedfile.open("sorted name list.txt");
	    for(int i=1;i<11;i++)
	    {
	    editedfile
		<<LastName[i]<<endl;
		 	
		}
	editedfile.close();
	
}
