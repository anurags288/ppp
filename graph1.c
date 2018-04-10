

#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX 20
class AdjacencyMatrix
{

    private:

        int n;
	public:

    	int adj[MAX][MAX];
    public:

        AdjacencyMatrix(int nin)

        {
		int n=nin;
            for (int i = 0; i < n; i++)

            {


                for(int j = 0; j < n; j++)

                {

                    adj[i][j] = 0;

                }

            }

        }



        void inputedEdge(int start, int end)

        {

            if( start > n || end > n || start < 0 || end < 0)

            {

                cout<<"Invalid edge!\n";

            }

            else

            {

                adj[start - 1][end - 1] = 1;

            }

        }

        void display()

        {

            int i,j;

            for(i = 0;i < n;i++)

            {

                for(j = 0; j < n; j++)

                    cout<<adj[i][j]<<"  ";

                cout<<endl;

            }

        }

};

int main()

{

    int vertices, max_edges, start, end;

    cout<<"Enter number of vertices: ";

    cin>>vertices;

    AdjacencyMatrix obj(vertices);
    int ch;
    cout<<"enter 1 for directed graph";
    cout<<"enter 2 for undirected graph";
    cin>>ch;
    switch(ch)
	{
		case 1:
			{
			    max_edges = vertices * (vertices - 1);

			    for (int i = 0; i < max_edges; i++)

    				{

			        cout<<"Enter edge ( negative integers to exit): ";

			        cin>>start>>end;

			        if((start<0) && (end<0))

			            break;

			        obj.inputedEdge(start, end);

				   }

			    obj.display();
			break;
			}
		case 2:
			{
				max_edges = vertices * (vertices - 1)/2;

			    for (int i = 0; i < max_edges; i++)

    				{

			        cout<<"Enter edge (negative integers to exit): ";

			        cin>>start>>end;

			        if((start <0) && (end<0))

			            break;

			        obj.inputedEdge(start, end);

				   }

			    obj.display();
			break;
			}
			default:
			cout<<"wrong choice";
		}
    return 0;

}
