#include <iostream>
#include <cstdio>
#define MAX 101
#define SHIP_EXISTS -1
#define SHIP_ALIVE 1

using namespace std;

int matrix[MAX][MAX], dfsMatrix[MAX][MAX], grid;
bool flag;


void drawGraph()
{
    string str = "", temp;

///Put char in the grid
    for(int i=0; i<grid; i++)
    {
        cin >> temp;
        str = str + temp;
    }

    int index = 0;

    for(int i=0; i<grid; i++)
    {
        for(int j=0; j<grid; j++, index++)
        {
            matrix[i][j] = str[index];
            ///If the ship exists
            if(matrix[i][j] == 'x' || matrix[i][j] == '@')
                dfsMatrix[i][j] = SHIP_EXISTS;
            else
                dfsMatrix[i][j] = 0;
        }
    }
}


void DFS(int x, int y)
{
    ///if there is X, the ship will work
    if(matrix[x][y] == 'x')
    {
        flag = true;
        dfsMatrix[x][y] = SHIP_ALIVE;
    }

    ///Check if the other parts of the ship is damaged or not
    if(x-1 >= 0 && dfsMatrix[x-1][y] == SHIP_EXISTS)     ///let, mat[2][2] === mat[1][2]
    {
        DFS(x-1, y);        ///call recursively and continue traversing
    }

    if(x+1 < grid && dfsMatrix[x+1][y] == SHIP_EXISTS)   ///mat[3][2]///
    {
        DFS(x+1, y);
    }

    if(y-1 >= 0 && dfsMatrix[x][y-1] == SHIP_EXISTS)    ///mat[2][1]///mat[1][2]=>mat[1][1]
    {
        DFS(x,y-1);
    }

    if(y+1 < grid && dfsMatrix[x][y+1] == SHIP_EXISTS)  ///mat[2][3]///
    {
        DFS(x,y+1);
    }

}


int main()
{
    int test, shipCount;

    scanf("%d", &test);

    for(int i=1; i <= test; i++)
    {
        scanf("%d", &grid);

        drawGraph();    ///draw the graph

        shipCount = 0;

        for(int i=0; i<grid; i++)
        {
            for(int j=0; j<grid; j++)
            {
                ///Check if the ship is in perfect condition or not
                if( (matrix[i][j] == 'x' || matrix[i][j] == '@') && dfsMatrix[i][j] == SHIP_EXISTS)
                {
                    flag = false;   ///possibly we may get @ , so we need to check it's surroundings
                    DFS(i,j);
                    if(flag == true)
                        shipCount++;
                }
            }
        }
        printf("Case %d: %d\n", i, shipCount);
    }
    return 0;
}
