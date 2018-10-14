#include<iostream>
using namespace std;

int main()
{
     int job_id[100],no[20];
     float capacity[100],speed[20],starting[10],finish[10],time[100],avg_time[100];
     int a,z=1,i,b,x=0,j,temp;
     float t,total_time=0,mspant=0;
 
     cout<<"enter the no of job:";cin>>a;
     cout<<"enter the no of cpu:";cin>>b;
     cout<<"enter the job length\n";
     for(i=0;i<a;i++)
     {
	 job_id[i]=i+1;
	cout<<"for "<<i+1<<":";
	cin>>capacity[i];
      }
     for(i=0;i<a;i++)
       {
	    for(j=i;j<a;j++)
	    {
	     if(capacity[i]<capacity[j])
	     {
	     temp=capacity[i];
	     capacity[i]=capacity[j];
	     capacity[j]=temp;
	     }
	    }
	 }
      cout<<"enter cpu speed\n";
      for(i=0;i<b;i++)
      {

	     no[i]=i+1;
	     cout<<"for "<<i+1<<":";
	     cin>>speed[i];

      }
       for(i=0;i<b;i++)
     {
	    time[i]=0.0;
	    avg_time[i]=0.0;
	 starting[i]=0.1;

     }
      cout<<"\n"<<"job_id\t"<<"job lenght\t"<<"time\t"<<"cpu id\t"<<"start time\t"<<"finish time\n";
     for(i=0;i<a;i++)
     {
      t=capacity[i]/speed[x];
      time[x]+=t;
      avg_time[x]=time[x]/z;
      finish[x]=(starting[x]+t);
      cout<<job_id[i]<<"\t"<<capacity[i]<<"\t\t"<<t<<"\t"<<(x+1)<<"\t"<<starting[x]<<"\t\t"<<finish[x]<<"\n";
      x++;
     if(x==b)
      {
	  x=0;
	  z++;
	  for(int j=0;j<b;j++)
	   {
	      starting[j]=finish[j];
	   }
      }
   }
   for(i=0;i<b;i++)
   {
    total_time+=time[i];
   cout<<"\ntotal time required by cpu"<<(i+1)<<":"<<time[i];
   cout<<"\naverage response time for cpu  "<<(i+1)<<":"<<avg_time[i];
   }
   cout<<"\nMAKESPAN TIME OF EACH CPU ARE";
   for(i=0;i<b;i++)
   {
     mspant=(time[i]/total_time)*100;
     cout<<"\ncpu "<<i+1<<":"<<mspant;
     if(mspant>=0.0 && mspant<=30.0)
     cout<<"\nunderload";
     if(mspant>30.0 && mspant<=70.0)
     cout<<"\nbalanced";
     if(mspant>70.0 && mspant<=100.0)
     cout<<"\noverload";
     }
  return 0;
}
