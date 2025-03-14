#include <iostream>
using namespace std ;


class Task1 
{
	public :
		Task1()	
		{
			cout<<"@ Task1 constructor \n";
		}
		
		void draw_function()
		{
			cout<<"----Task is to Draw ----\n";
		}
		
		
		~Task1()	
		{
			cout<<"@ Task1 destructor \n";
		}
};//concrete class

class Task1_1 
{
	public :
		Task1_1()	
		{
			cout<<"@ Task1_1 constructor \n";
		}	
		void adobe_function()
		{
			cout<<"----Task is to open Adobe ----\n";
		}
		~Task1_1()	
		{
			cout<<"@ Task1_1 destructor \n";
		}
};
class parent_task1  : public Task1 , Task1_1
{
	public :
		void call_all_tasks()
		{
			draw_function() ;
			adobe_function() ;
//			virtual void draw_function() ;
//			virtual void adobe_function() ;
//			Virtual should be outside the class declarations 
		}
};

class Task2  
{
	public :
		Task2()	
		{
			cout<<"@ Task2 constructor \n";
		}
		
		void calculator_function()
		{
			cout<<"----Task is to open Calculator ----\n";
		}
		
		
		~Task2()	
		{
			cout<<"@ Task2 destructor \n";
		}
}; //concrete class

class Task2_1 
{
	public :
		Task2_1()	
		{
			cout<<"@ Task2_1 constructor \n";
		}	
		void camera_function()
		{
			cout<<"----Task is to open Camera ----\n";
		}
		~Task2_1()	
		{
			cout<<"@ Task2_1 destructor \n";
		}
};
class parent_task2  : public Task2, public Task2_1  // interface 
{
	public :
		void call_all_tasks()
		{
			calculator_function() ;
			camera_function() ;
//			virtual void draw_function() ;
//			virtual void adobe_function() ;
//			Virtual should be outside the class declarations 
		}
		
};
class factory 
{
	public :
		parent_task2 * parent_task_2 ()
		{
			return new parent_task2() ;
		}
		parent_task1 * parent_task_1 ()
		{
			return new parent_task1();
		}
		
};

int main()
{
	cout<<"Hi ..............\n";
	
	cout <<"------------------\n";
	factory * fact = new factory();
	parent_task1 * ptr = fact->parent_task_1();
	cout<<"......................\n";
	ptr->draw_function();
	cout<<"......................\n";
	ptr->call_all_tasks();
	
	cout<<"...........................\n";
	parent_task2 * ptr_1 = fact->parent_task_2();
	cout<<"......................\n";
	ptr_1->camera_function();
	cout<<"......................\n";
	ptr_1->call_all_tasks();
//	ptr->adobe_function();
//	ptr->call_all_tasks();	

	
}
