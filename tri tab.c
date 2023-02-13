/*
#include <stdio.h>
#include <stdlib.h>


void echange(int *pa, int *pb){

    int t = *pb;
    *pb = *pa;
    *pa = t;
     
}


void tri_croissant(int *p1, int *p2){




    if(*p1>*p2){
    
        echange(p1,p2);

    }
}

void tri_3(int *p1, int *p2, int *p3){

    tri_croissant(p1,p2);

    tri_croissant(p2,p3);
    tri_croissant(p1,p2);





}

int main() {
   int a, b, c;
  
   printf("Saisissez les valeurs de a, b et c :\n");
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);

   printf("Avant echange : a = %d, b = %d\n",a, b);
   echange(&a,&b);
   printf("Apres echange : a = %d, b = %d\n",a, b);
  
   tri_croissant(&a,&b);
   printf("Par ordre croissant : a = %d, b = %d\n", a, b);

   tri_3(&a,&b,&c);
   printf("Apres tri : a = %d, b = %d, c = %d\n",a, b, c);
  
   return 0;
}

*/

/*
#include <stdio.h>

void min_max(int *a, int *pmin, int *pmax){
    if(*pmin>*a){  
        *pmin = *a;
    }
    else if(*pmax<*a){
        *pmax = *a;
    }
 
}


void stats (int *pa, int *pb, int *pc, int *pd, float *pmoy, int *pmin, int *pmax) {
       if(*pa<=0){
    
    *pmin = -1;
    *pmax = -1;
    *pmoy = -1.0;
   } 
   else{


    
*/
/*
#include "stdio.h"



#define N 4
int main() {
int i;
int tab[N] = {1, 3, 5, 7};
int *tab2;
tab2 = tab;
tab2[1] = 2;
for (i = 0; i < N; i++) {
printf("%d\t", tab[i]);
}
printf("\n");
return 0;
}
*/
/*
#include <stdio.h>

float moy_temp(float *t, int jour) {
    int i;
    float moy=0.0;
    for(i=0;i<jour;i++){
        moy += t[i];
    }
   
    return(moy/jour*1.0);
    
}

float moy_temp_gel(float t[], int jour){
    int i;
    float res[31];

    int j = 0;
    for(i=0;i<jour;i++){
        if(t[i]<0){
            res[j]=t[i];
            j++;
            
        }
        
    }
 
    if(j == 0){
        return(0);

    }
    else{
        return(moy_temp(res,j));
    }
   

}

int main() {
   float tab[31];
   float moy_gel=0;
   int i, nbj;
   
   scanf("%d", &nbj);
   for (i = 0; i < nbj; i++) {
      scanf("%f", &tab[i]);
   }
   printf("temperature moyenne sur les %d derniers jours : %.2f\n",nbj, moy_temp(tab,nbj));
   moy_gel = moy_temp_gel(tab,nbj);
   if (moy_gel!=0) {
      printf("temperature moyenne sur les jours de gel : %.2f\n", moy_gel);
   }
   else {
      printf("Aucune temperature au-dessous de zero.\n");
   }
   return 0;
}


*/
#include <stdio.h>
int indiceInsert(int tab[], int el, int nb, int taille){
  
 
    
    if(nb==taille){
        return(-1);
    }

    int i;
    for(i=0;i<taille;i++){
        if(el==tab[i]){
            return(-1);
        }
        else if(el<tab[i]){
           

            return(i);
        }

    }
    
    return(nb);



}

int insertElt(int tab[], int val, int *nbEl, int taille){
    int k = indiceInsert(tab,val,*nbEl,taille);
    if(k==-1){
        return(0);
    }



    int temp1[6];
    int temp2[6];
    int res[6];

    int i = 0;
    for(i=0;i<*nbEl;i++){
        temp1[i]=tab[i];
     //   printf("\ntemp1 rang %d: %d",i,temp1[i] );
       
    }

    printf("\ni: %d, bv%d",i, *nbEl);
    if(i==(taille)){
        tab[i]=val;
        //printf("\ntab[%d]=%d",i,tab[i]);
       // printf("ciao");
        *nbEl= *nbEl+1;
        return(1);

    }

    
    temp2[*nbEl]= val;
    printf("\nval: %d", temp2[*nbEl]);
    for(i = (*nbEl+1);i<(taille);i++){
        
        
        temp2[i]=tab[i];
        printf("\ntemp2avant: %d", tab[i]);
        
    }

    i  = 0;
    *nbEl= *nbEl+1;
    return(1);
    
// emplacement à la place 4 de 10 dans {3,5,7,9}



    

}

void affiche_tab(int tab[], int taille) {
	int i;
    for (i = 0; i < taille; i++) {
        printf("%d  ", tab[i]);
    }
    printf("\n");
}

int main() {
   int tab[6];
   int i, inser_OK, nbEl, val;
   
   scanf("%d", &nbEl);
   for (i = 0; i < nbEl; i++) {
      scanf("%d", tab + i);
   }
   scanf("%d", &val);
  
   inser_OK = insertElt(tab, val, &nbEl, 6);
   printf("insertion OK ? %d\n", inser_OK);
   affiche_tab(tab, nbEl);
   return 0;
}

/*
int main(){
    int k[5]={3,5,7,9};
    printf("test: %d",indiceInsert(k,6,4,4));
    return(0);
}

*/