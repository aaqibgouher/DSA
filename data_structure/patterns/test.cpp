#include<iostream>

using namespace std;

int main() {

    // pattern 1
    // * * * *
    // * * * *
    // * * * *
    // * * * *

    // int i, j, row, col;

    // cout<<"enter row and column"<<endl;
    // cin>>row>>col;
    
    // for(i=1;i<=row;i++) {
    //     for(j=1;j<=col;j++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //pattern 2
    // * * * *
    // *     *
    // *     *
    // * * * *
    // int i, j, row, col;

    // cout<<"enter row and column"<<endl;
    // cin>>row>>col;
    
    // for(i=1;i<=row;i++) {
    //     for(j=1;j<=col;j++) {
    //         if(i==1 || i==row || j==1 || j==col) {
    //             cout<<"* ";
    //         }else cout<<"  ";
    //     }
    //     cout<<endl;
    // }

    // patter 3
    // * * * * *
    // * * * * 
    // * * *
    // * *
    // *
    // int i, j, n;

    // cout<<"enter trianlge side"<<endl;
    // cin>>n;
    
    // for(i=n;i>=1;i--) {
    //     for(j=i;j>=1;j--) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // pattern 4
    //       *
    //     * *
    //   * * *
    // * * * *

    // int i, j, n;

    // cout<<"enter trianlge side"<<endl;
    // cin>>n;
    
    // for(i=1;i<=n;i++) {
    //     for(j=1;j<=n;j++) {
    //         if(j<=n-i) {
    //             cout<<"  ";
    //         }else {
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // pattern 5
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4

    // int i, j, n;

    // cout<<"enter trianlge side"<<endl;
    // cin>>n;
    
    // for(i=1;i<=n;i++) {
    //     for(j=1;j<=i;j++) {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // pattern 6 (floyds triangle)
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    // int i, j, n,count=1;

    // cout<<"enter trianlge side"<<endl;
    // cin>>n;
    
    // for(i=1;i<=n;i++) {
    //     for(j=1;j<=i;j++) {
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    // pattern 7 (butterfly)
    // *             *
    // * *         * *
    // * * *     * * *
    // * * * * * * * *
    // * * * * * * * *
    // * * *     * * *
    // * *         * *
    // *             *

    // int i, j, n;

    // cout<<"enter trianlge side"<<endl;
    // cin>>n;
    
    // for(i=1;i<=n;i++) {
    //     for(j=1;j<=i;j++) {
    //         cout<<"* ";
    //     }
    //     for(j=1;j<=2*n-2*i;j++) {
    //         cout<<"  ";
    //     }
    //     for(j=1;j<=i;j++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // // image of the upper pattern
    // for(i=n;i>=1;i--) {
    //     for(j=i;j>=1;j--) {
    //         cout<<"* ";
    //     }
    //     for(j=1;j<=2*n-2*i;j++) {
    //         cout<<"  ";
    //     }
    //     for(j=1;j<=i;j++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    // pattern 8 (inverted pattern)
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    // int i, j,n;

    // cout<<"enter the triagle size:"<<endl;
    // cin>>n;

    // for(i=n;i>=1;i--) {
    //     for(j=1;j<=i;j++) {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // pattern 9(0-1 pattern)
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1

    // int i, j, n;

    // cout<<"enter triangle side:"<<endl;
    // cin>>n;

    // for(i=1;i<=n;i++) {
    //     for(j=1;j<=i;j++) {
    //         if(i % 2 != 0 && j % 2 != 0 || i %  2 == 0 && j % 2 == 0) {
    //             cout<<"1 ";
    //         }
    //         else{
    //             cout<<"0 ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // pattern 10 (rhombus pattern)

    //    * * * * *
    //   * * * * *
    //  * * * * *
    // * * * * * 

    // int i, j, n;

    // cout<<"enter the side of rhombus:"<<endl;
    // cin>>n;

    // for(i=1;i<=n;i++) {
    //    // space
    //    for(j=1;j<=n-i;j++) {
    //        cout<<"  ";
    //    }
    //    // rhombus
    //    for(j=1;j<=n;j++) {
    //        cout<<"* ";
    //    }
    //    cout<<endl;
    // }

    // pattern 11
    //    1
    //   1 2
    //  1 2 3
    // 1 2 3 4

    // int i, j, n, count=1;

    // cout<<"enter the triangle size:"<<endl;
    // cin>>n;

    // for(i=1;i<=n;i++) {
    //     for(j=1;j<=n-i;j++) {
    //         cout<<" ";
    //     }
    //     for(j=1;j<=i;j++) {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //pattern 12 (palindromic patter)
    //     1
    //   2 1 2
    // 3 2 1 2 3

    // int i, j, n, count=1;

    // cout<<"enter the triangle size:"<<endl;
    // cin>>n;

    // for(i=1;i<=n;i++) {
    //     for(j=1;j<=n-i;j++) {
    //         cout<<"  ";
    //     }
    //     count = i;
    //     int flag=0;
    //     for(j=1;j<=2*i-1;j++) {
    //         if(count > 1 && !flag) {
    //             cout<<count<<" ";
    //             count--;
    //         }
    //         else if(count > 1 && flag) {
    //             cout<<count<<" ";
    //             count++;
    //         }
    //         else {
    //             cout<<count<<" ";
    //             count++;
    //             flag=1;
    //         }
            
    //     }    
    //     cout<<endl;
    // }

    // pattern 13 (star pattern)
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *

    // int i, j, n;

    // cout<<"enter star number:"<<endl;
    // cin>>n;

    // for(i=1;i<=n;i++) {
    //     // space
    //     for(j=1;j<=n-i;j++) {
    //         cout<<"  ";
    //     }
    //     for(j=1;j<=2*i-1;j++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(i=n;i>=1;i--) {
    //     // space
    //     for(j=1;j<=n-i;j++) {
    //         cout<<"  ";
    //     }
    //     for(j=1;j<=2*i-1;j++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}