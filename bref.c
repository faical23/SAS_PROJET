#include<stdio.h>

    void vote_presedent(int N , int v)
    {

        // arrys of presedent
        char presedent[N][30];
        // arrays of voteur
        char voteur[v][30];
        //// arrays of 0 vote a every presedent
        char starting[N];
        int vote[v]; /// arrays of stocking les vote
        int index = 0;  /// variable stocky every vote a chaque loops.

        //// partie add les presedent
        
        for(int i = 0 ; i < N ; i++)
        {
            printf("add presedent : ");
            scanf("%s" , presedent[i]); //// stockage les presedent in arrays presedent[]
            starting[i]=0;
        }

        ///// partie add voteur 

        for(int i = 0 ; i < v; i++)
        {
            printf("add voteur : ");
            scanf("%s" , voteur[i]); //// stockage les voteur in arrays presedent[]
        }
      
        /////: partie de premier vote

            void parte_vote()
            {

                for(int i = 0 ; i < v; i++)
                {
                    printf("ur have this presedent vote in ur presedent  : \n");  
                    for(int i = 0 ; i < N; i++)
                        {
                            int k = i+1;  // for start in 1
                            printf("%i ==> %s\n" , k , presedent[i]); /// chaque loop we show hem all presedent
                        }
                    printf("\n\n\n ur CIN is : %s  chose number of ur presedent  ?  : " , voteur[i]);
                   scanf("%i" , &vote[i]); ///  stockage des vote in arrays vote[]

                    index = vote[i]-1; /// stockage  vote every voteur in j; and vote[i]-1 = pour starting value-1 IN THE ARRAYS
                    starting[index]++;          /// go to the index j and incrument the value of arrays starting in this ndex;

                }

                // show all vote we have
                for(int i = 0 ; i < v; i++)
                {
                    printf("- %i -" , vote[i]);
                }
                // show total  vote of evevry presedent
                printf("\nall vote of every presedent\n");
                for(int i = 0 ; i < N; i++)
                {
                    printf("%s  -> %i \n" , presedent[i], starting[i]);
                }

                /// show les vote pour percentage % of every presedent
                 printf("\nles perentage vote a chaque presedent : \n");
                for(int i = 0 ; i < N; i++)
                {
                    float result = (float)starting[i]/v*100;
                    printf("%s  -> %.2f%% \n" , presedent[i], result);
                }

            }
            parte_vote();


            






                    
 /*     
        /// show les vote

        int stockage_number_vote[N];  // arrays for stockage total of vote evvery presedent
        int n = 1; /// pour strted from 1 if n++ because we have a problem if started with 0
        int size = v; // pour don't touch v
        printf("this is all vote aviable : \n");
        for(int i = 0 ; i < size ; i++)
        {
            for(int j = i+1 ; j < size ; j++)
            {
                if(vote[i] == vote[j])
                {
                    // Delete the current duplicate element 
                    for(int k=j ; k < size ; k++)
                    {
                        vote[k] = vote[k + 1];
                    }

                    // Decrement size after removing duplicate element 
                    size--;

                    // If shifting of elements occur then don't increment j 
                    j--;
                    n++;
                }
            }
            printf("%i -> %s \n", n , presedent[i]);
            stockage_number_vote[i] = n; // stockage number of vote in arrays
            n = 1;
        }

            for(int i = 0 ; i <N ;i++)
            {
                printf("- %i -",stockage_number_vote[i]); // show all hvote we have
            }
            printf("\n");

        for(int i = 0 ; i <N ;i++)
        {
            printf("%s number vote : %i \n",presedent[i] , stockage_number_vote[i]); // show all presedent with her votes
        }

        //// script show index of the presedent we should removeted in the arrays

            int mn;
            int index = 0;
            mn = stockage_number_vote[0]; /// mn le prmier value in rhis arrays

            for(int i=1; i < N; i++)
            {

                if(stockage_number_vote[i] < mn) /// we do comparaison between this arrays and show the minnumun 
                {
                    mn = stockage_number_vote[i];
                    index = i; // the index he incrument
                }
            }
            printf("\n");
            printf("Minimum vote presedent  is %i and the presedent weshould removeted is  : %s", mn , presedent[index]);
            printf("\n");


*/

                 
    }



int main()
{



    vote_presedent(6,15);

    return 0;
}