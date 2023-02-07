#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N = 0;
        int K;
        int x, y = 0;
        int count = 0;

        cin >> N >> K >> x >> y;

        int a,b = 0;

        if (x == y)
        {
            // while (x != N || y != N)
            // {
            //     x += 1;
            //     y += 1;
            // }
            std::cout << N << " " << N << endl;
        }

        // else
        // {
        //     for (int i = 0; i < K; i++)
        //     {
        //         if (x > y)
        //         {
        //             for (int i = 0; i < N; i++)
        //             {
        //                 x += 1;
        //                 y += 1;

        //                 if (x == N)
        //                     break;
        //             }
        //             count += 1;
        //             if (count == K)
        //                 break;
        //             for (int i = 0; i < N; i++)
        //             {
        //                 y += 1;
        //                 x -= 1;
        //                 if (y == N)
        //                     break;
        //             }
        //             count += 1;
        //             if (count == K)
        //                 break;
        //             for (int i = 0; i < N; i++)
        //             {
        //                 y -= 1;
        //                 x -= 1;

        //                 if (x == 0)
        //                     break;
        //             }
        //             count += 1;
        //             if (count == K)
        //                 break;
        //             for (int i = 0; i < N; i++)
        //             {
        //                 x += 1;
        //                 y -= 1;

        //                 if (y == 0)
        //                     break;
        //             }
        //             count += 1;
        //             if (count == K)
        //                 break;
        //         }

        //         else
        //         {
        //             for (int i = 0; i < N; i++)
        //             {
        //                 x += 1;
        //                 y += 1;

        //                 if (y == N)
        //                     break;
        //             }
        //             count += 1;
        //             if (count == K)
        //                 break;
        //             for (int i = 0; i < N; i++)
        //             {
        //                 y += 1;
        //                 x -= 1;
        //                 if (x == N)
        //                     break;
        //             }
        //             count += 1;
        //             if (count == K)
        //                 break;
        //             for (int i = 0; i < N; i++)
        //             {
        //                 y -= 1;
        //                 x -= 1;

        //                 if (y == 0)
        //                     break;
        //             }
        //             count += 1;
        //             if (count == K)
        //                 break;
        //             for (int i = 0; i < N; i++)
        //             {
        //                 x += 1;
        //                 y -= 1;

        //                 if (x == 0)
        //                     break;
        //             }
        //             count += 1;
        //             if (count == K)
        //                 break;
        //         }
        //     }

        else if (x>y)
        {
            if (K%4==1)
            {
                a = N;
                b = y + N - x;
            }

            else if (K%4==2)
            {
                a = N - x + y;
                b = N;
            }

            else if (K%4==3)
            {
                a = 0;
                b = x-y;
            }

            else
            {
                {
                    a = x-y;
                    b = 0;
                }
            }
            
        }

            std::cout << a << " " << b << endl;
        // }
    }
    return 0;
}