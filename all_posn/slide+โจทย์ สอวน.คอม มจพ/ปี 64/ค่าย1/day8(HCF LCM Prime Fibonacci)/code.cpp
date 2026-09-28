#include <iostream>
using namespace std;
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ Fibonacci
int Fibonacci(int num)   
{
	if(num == 0)
	{
		return 0;
	}
	else if(num == 1)
	{
		return 1;
	}
	else
	{
		return( Fibonacci(num-1) + Fibonacci(num-2) );
	}
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ permute
//int size = 5;
//int Array[100];
//void permute(int j)
//{
//   	if (j == size)
//   	{	
//		for(int i=0 ; i < size ; i++)
//		{
//			cout<<Array[i]<<" ";
//		}
//		cout<<endl;
// 	}
//   	else
//   	{
//       for (int i = j; i < size; i++)
//       {
//       		int T = Array[j];
//       		Array[j] = Array[i]; 
//			Array[i] = T;
//
//          	permute(j+1);
//
//			T = Array[j];
//       		Array[j] = Array[i]; 
//			Array[i] = T;
//       }
//   	}
//}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ combination
//int Array[100];
//int size = 10;
//int sub_size = 4;
//void combination(int j,int k)
//{
//    if (k == sub_size)
//    {
//        for (int j = 0 ; j < sub_size ; j++){ cout<<Array[j]<<" "; }
//        cout<<endl;
//        return;
//    }
//    for (int i = j ; (i < size) && ((size - i + 1) > (sub_size - k)) ; i++)
//    {
//		//swap j and i
//		int T = Array[k];
//		Array[k] = Array[i]; 
//		Array[i] = T;
//
//        combination(i+1,k+1);
//
//      	//swap i and j
//		T = Array[k];
//		Array[k] = Array[i]; 
//		Array[i] = T;
//    }
//}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ towerOfHanoi
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        cout <<"Disc "<< n <<" "<< from_rod <<" to " << to_rod<<endl;
        return;
    }
    
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    
    
    cout <<"Disc "<< n << " " << from_rod <<" to " << to_rod << endl;
    
    
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
int main() 
{
//----------------------------------------------------------------- prime_number 
//	int prime_number[4] = { 17973, 713, 1113, 1213 };
//	for (int j=0 ; j < 4 ; j++)
//	{
//		bool use = true;
//		for (int i=2 ; i < prime_number[j] ; i++)
//		{
//			if ( prime_number[j] % i == 0)
//			{
//				cout<<i<<" N"<<endl;
//				use = false;
//				break;   
//			}
//		}
//		if(use)
//		{
//			cout<<"Y"<<endl;
//		}
//	}
//-----------------------------------------------------------------least common multiple 
//	int all_num[5] = { 30, 200, 100, 150, 20  };
//	int min = all_num[0];
//	for (int i = 0 ; i < 5 ; i++)
//   	{
//		if( min > all_num[i] )
//		{
//			min = all_num[i];
//		}
//	}
//	for (int i=min ; i >= 1 ; i--)
//    {	
//		bool set = true;
//		for(int j = 0 ; j < 5 ; j++)
//		{
//			if( all_num[j] % i != 0 )
//			{
//				set = false;
//			}
//		}
//		if(set)
//		{
//			cout<<i<<endl;
//			break;
//		}
//	}
//----------------------------------------------------------------- highest common factor
//	int all_num[5] = { 4, 8, 5, 20, 10};
//	int max = all_num[0];
//	for (int i = 0 ; i < 5 ; i++)
//   	{
//		if( max < all_num[i] )
//		{
//			max = all_num[i];
//		}
//	}
//	for (int i = max ;  ; i++)
//   	{
//		bool set = true;
//		for(int j = 0 ; j < 5 ; j++)
//		{
//			if( i % all_num[j] != 0 )
//			{
//				set = false;
//			}
//		}
//		if(set)
//		{
//			cout<<i<<endl;
//			break;
//		}
//     }
//----------------------------------------------------------------- factor
//   int num = 250;
//   for(int i = 1 ; i <= num; i++) 
//   {
//      if (num % i == 0)
//	  {
//		cout << i << " ";
//	  }
//   }
//----------------------------------------------------------------- number of factor
//	int counter[1000][2];
//	int num = 100;
//   	for(int i = 0 ; i < 1000; i++) 
//   	{
//		counter[i][0] = 0;
//   	}
//	int t_num = num;
//	while(1)
//	{
//	   for(int i = 2 ; i <= t_num; i++) 
//	   {
//		   	//
//		   	cout<<i<<" "<<t_num<<endl;
//		   	//
//		   	if(t_num % i == 0)
//		   	{
//				for(int j = 0 ; ; j++) 
//				{
//					if(counter[j][0] == i)
//					{
//						counter[j][1]++;
//						break;
//					}
//					if(counter[j][0] == 0)
//					{
//						counter[j][0] = i;
//						counter[j][1] = 1;
//						break;
//					}
//				}
//				t_num = t_num / i;
//				break;
//		   	}
//	   }
//	   if(t_num == 1){ break; }
//	}
//------------------------------------------------------
//    int all = counter[0][1]+1;
//    for(int i = 1 ; i < 1000; i++) 
//    {
//		if(counter[i][0] == 0){	break;	}
//		all = all * (counter[i][1]+1);
//    }
//    cout<<all<<endl;
//-----------------------------------------------------------------Fibonacci
//	cout<<Fibonacci(10);
//-----------------------------------------------------------------Mod Number
//	int b = 17;
//	int p = 341;
//	int m = 5;
//	int i1 = b;
//	int i2 = b*b;
//	int i3 = b*b*b;
//	int i4 = b*b*b*b;
//	int r[] = { i4%10, i1%10, i2%10, i3%10 }; //beware i % 4 == 0 is select 4
//	int i = p % 4;
//	cout<<r[i] % m<<endl;
//-----------------------------------------------------------------
//	int b = 7;
//	int p = 1942;
//	int i1 = b;
//	int i2 = b*b;
//	int i3 = b*b*b;
//	int i4 = b*b*b*b;
//	int r1[] = { i4%10, i1%10, i2%10, i3%10 }; //beware i % 4 == 0 is select 4
//	int r2[] = { (i4%100)/10, (i1%100)/10, (i2%100)/10, (i3%100)/10 }; //beware i % 4 == 0 is select 4
//	int i = p % 4;
//	cout<<r1[i]<<"\n"<<r2[i]<<endl;
//-----------------------------------------------------------------
//	for(int i=0;i<100;i++){ Array[i] = i+1;}
//	permute(0);
//-----------------------------------------------------------------
//	for(int i=0;i<100;i++){ Array[i] = i+1;}
//	combination(0,0);
//-----------------------------------------------------------------
	towerOfHanoi(3, 'A', 'C', 'B');
    return 0;
}
