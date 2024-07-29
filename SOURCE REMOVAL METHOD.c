# include <stdio.h>
# include <stdlib.h>


int main(void){

    int i, j;
    int k, n;
    int a[10][10];      // adjacency matrix

    int indeg[10] = {0};        // number of incoming edges
    int flag[10] = {0};         // checked or not

    int count=0;                // count value for sorting vertices


    printf("Enter the no of vertices: ");
    scanf("%d",&n);

    printf("Enter the adjacency matrix:\n");
    for(i=0;i<n;i++){
        printf("Enter row %d\n",i+1);
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);       // enter the adjacency matrix
    }


    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            indeg[i]+=a[j][i];      // number of incoming edges updated



    printf("\nThe topological order is:");



    while(count<n-1){
        for(k=0;k<n;k++){

            if((indeg[k]==0) && (flag[k] ==0))      // zero incoming edges && not sorted yet
            {
                printf("%d ", k+1);
                flag[k]=1;      //checked

                for(i=0;i<n;i++){
                    if(a[k][i]==1){
                        a[k][i]=0;              // delete the sorted vertice's outgoing edges
                        indeg[k]--;             // subtract indeg since the outgoind edge is deleted
                    }
                }

                count++;                        // update the iteration count
                break;                          // break the for loop and start a new one
            }
        }
    }

}
