#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int  i, j, lastans=0, index, index_j;
    int n, q;
    //cout<<"enter q:";
    cin>>n;
    cin>>q;
    int a[q][3];
    //cout<<"enter q*3 array: ";
    for(i=0;i<q;i++)
    {
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    //cout<<"enter n: ";
    //cin>>n;
    int s[n][n], count_z=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            s[i][j]=0;
        }

    }
    j=0;
    int size_s=0;
    for(i=0;i<q;i++)
    {

                //cout<<"i: "<<i<<"\n";


                if(a[i][0]==1){
                index = ((a[i][1]^lastans)%n);
                //cout<<"index: "<<index<<"\n";
                //cout<<"s[index][j]: "<<s[index][j]<<"\n";

                if(s[index][j]==0){
                    s[index][j]=a[i][2];
                     //cout<<"s[index][j]: "<<s[index][j]<<"\n";

                }
                else{
                    j=j+1;
                    s[index][j]=a[i][2];
                }

            }

            else{
                    index = ((a[i][1]^lastans)%n);
                    for(j=0;j<n;j++){
                        if(s[index][j]!=0){
                            count_z = count_z+1;
                        }
                        else{
                           count_z = count_z+0;
                        }
                    }
                    index_j = a[i][2]%count_z;
                    lastans = s[index][index_j];
                    count_z=0;
                     cout<<lastans<<"\n";
            }

    }
                        /*for(i=0;i<n;i++){
                        for(j=0;j<n;j++){
                            cout<<s[i][j];
                        }
                    cout<<"\n";
                    }*/


return 0;
}
