#include <unistd.h>


// int man (int argc , char **argv)
// {

//     if(argc >= 2)
//     {

//         int i = 0 ;
//         int r = 0 ;
//         char result[1024] ;

//         while(argv[1][i])
//         {
//             int j = i + 1 ;

//             while(argv[1][i] >= '0' && argv[1][i] <= '9')
//             {
//                 result[r] = argv[1][i] ;
//                 write(1,&result[r] ,1);
//                 i++ ;
//                 r++;
//             }
//             while(argv[1][i] == '\n' || argv[1][i] == '\t' || argv[1][i] == ' ')
//             {
//                 result[r] = argv[1][i] ;
//                 write(1, &result[r] ,1);
//                 i++;
//                 r++;
//             }
//             while(argv[1][i] >= 'a' && argv[1][i] <= 'z' || argv[1][i] >= 'A' && argv[1][i] <='Z')
//             {
//                 while( ( argv[1][i] >= 'a' && argv[1][i] <= 'z') && ( argv[1][j] >= 'A' && argv[1][j] <= 'Z' ) && argv[1][j] != '\0' )
//                 {
//                     result[r] = argv[1][i];
//                     write(1,&result[r],1);
//                     r++;

//                     result[r] = '_';
//                     write(1,&result[r],1);
//                     r++;

//                     i++;
//                 }
//                     if(argv[1][j] >= 'A' && argv[1][j] <= 'Z' )
//                     {
//                         result[r] = argv[1][i] + 32 ;
//                         write(1, &result[r] ,1);
//                         r++;
//                        i++;
//                     }

//                     result[r] = argv[1][i];
//                     write(1, &result[r] ,1);
//                     r++;
//                     i++;
//             }
//         }
//     }


//     return 0 ;
// }


int main(int argc , char **argv)
{
    int i = 0 ;

    if(argc >= 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                write(1,"_",1);
                char lower = argv[1][i] + 32 ;
                write(1,&lower,1);
                i++ ;
            } else {
                write(1,&argv[1][i],1);
                i++;
            }
        }
    }
    write(1,"\n",1);
}
