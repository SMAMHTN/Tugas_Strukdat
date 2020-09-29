/***************************************************************/
/*                                                             */
/*    Nama File   : driverTabel.h                              */
/*    Deskripsi   : Driver Abstract Data Type Tabel            */
/*                                                             */
/***************************************************************/

#include "tabel.h"
#include <stdio.h>
 
int main(){/*
Program Utama*/
/*Kamus Lokal*/ 
   TabInt T,Y,A;

/*Algoritma*/
   CreateEmpty(&T);
   printf("Indek Efektif CreateEmpty(TabInt* T)=%d\n", T.NEff);
   printf("IsIdxValid(TabInt T, IdxType i)=%d\n", IsIdxValid(T,2000));

   printf("IsIdxEff(TabInt T, IdxType i)=%d\n", IsIdxEff(T,2));
   printf("IsEmpty(TabInt T)=%d\n", IsEmpty(T));
   printf("IsFull(TabInt T)=%d\n", IsFull(T));
   PrintTabel(T);
   IsiTabel(&T,10);
   PrintTabel(T);
   printf("ValMax(TabInt T)=%d\n", ValMax(T));
   printf("ValMin(TabInt T)=%d\n", ValMin(T));
   printf("IdxValMax(TabInt T)=%d\n", IdxValMax(T));
   printf("IdxValMin(TabInt T)=%d\n", IdxValMin(T));
   printf("NBElmt (TabInt T) = %d\n", NBElmt(T));
   printf("IdxLast (TabInt T) = %d\n\n", IdxLast(T));
   
   CreateEmpty(&Y);
   IsiTabel(&Y,10);
   PrintTabel(Y);
   printf("NBElmt (TabInt Y) = %d\n", NBElmt(Y));
   printf("IdxLast (TabInt Y) = %d\n\n", IdxLast(Y));
   printf("(TabInt X) IsEqual (TabInt Y) = %d\n",IsEqual(T,Y));
   printf("Search 6 in (TabInt Y) with SearchIdx = %d\n",SearchIdx(Y,6));
   printf("Search 6 in (TabInt Y) with SearchBool = %d\n",SearchBool(Y,6));
   printf("IsSimetris (TabInt Y) = %d\n",IsSimetris(Y));
   printf("\n");
   printf("(TabInt Y) Normal \n");
   PrintTabel(Y);
   Y=CopyTabInvers(T,Y);
   printf("\n");
   printf("(TabInt Y) after CopyTabInvers (TabInt T)  \n");
   PrintTabel(Y);
   Y=CopyTab(T,Y);
   printf("\n");
   printf("(TabInt Y) after CopyTab (TabInt T)  \n");
   PrintTabel(Y);
   return 0;
} 