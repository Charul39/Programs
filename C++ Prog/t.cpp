#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,i,j,p,c=0;
        cin >> n >> k;
        char m[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin >> m[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(m[i][j]=='P')
                {
                    for(p=j+1;p<=j+k && p<n;p++)
                    {
                        if(m[i][p]=='T')
                        {
                            cout << i << "," << p << endl;
                            c++;
                            m[i][p] = '0';
                        }
                    }
                    for(p=j-1;p>=j-k && p>=0;p--)
                    {
                        if(m[i][p]=='T')
                        {
                            cout << i << "," << p << endl;
                            c++;
                            m[i][p] = '0';
                        }
                    }
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
