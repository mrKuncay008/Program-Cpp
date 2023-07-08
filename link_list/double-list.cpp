#include <iostream>
using namespace std;

struct node
{
	int data;
	node *lanjut;
	node *balik;
} *head, *tail;

void init() {
	head = NULL;
	tail = NULL;
}

class Double_list
{
public:
	void create_list(int n);
	void add_begin();
	void add_pos(int n, int pos);
	void display();
	void ulang();
};

int main()
{
	int count;
		node *s;
		init();

		int pilih, pos;
		Double_list dl;

	while(1) {
		cout << "---- Program Double_list ----- \n";
		cout << "1. Buat list \n";
		cout << "2. add-begin \n";
		cout << "3. add-pos \n";
		cout << "4. display \n";
		cout << "5. Ulang \n";
		cout << "6. Exit \n";
		cout << "Masukan Pilihan: ";

		cin >> pilih;
			switch(pilih)
			{
			case 1:
				dl.create_list(11);
				dl.create_list(22);
				dl.create_list(33);
				dl.create_list(44);
				break;			
			case 2:
				dl.add_begin();
				break;
			case 3:
			dl.add_pos(100,6);
			break;
			case 4:
				dl.display();
				break;
			case 5:
			    dl.ulang();
			     break;
			case 6:
				return 0;
			default:
				cout<<"Error!! Coba lagi \n";

			}

			s = head;
			count = 0;

			while(s != NULL) {
				count++;
				s = s -> lanjut;
			}
			cout << "\t\t No. dari Node = " << count << endl;
	}
	return 0;
}

void Double_list::create_list(int n) 
{
	struct node *nodebaru;
	nodebaru = new node;
	nodebaru -> data = n;

	if (head == NULL)
	{
		head = nodebaru;
		nodebaru -> balik = NULL;
		nodebaru -> lanjut = NULL;
		tail = nodebaru;
	}
	else {
		nodebaru -> balik = tail;
		tail -> lanjut = nodebaru;
		nodebaru -> lanjut = NULL;
		tail = nodebaru;
	}
}

void Double_list:: add_begin() 
{
	if (head == NULL)
	{
		cout << "Tida element yang di buat" << endl;
		return;
	}
	node *temp = new node;
	int n;

	cout << "Masukan Nilai: ";
	cin >> n;

	temp -> data = n;
	temp -> balik = NULL;
	temp -> lanjut = head;
	head -> balik = temp;
	head = temp;
	cout << "Nilai Sucessfull .... \n";
}

void Double_list::add_pos(int n,int pos)
  {
  	
  	node *temp,*s;
	  temp=new node;
	  temp->data=n;
  	s=head;
 int count=1, flag=1;
 	if(pos==1)
 	 {
 	 	cout<<"try another pos: \n";
 	 	return;
	  }
	   else
	   {
	   	while(count!=pos-1)
	   	{
	   		s=s->lanjut;
	   		
	   		if(s==NULL)
	   		{
	   			flag=0;
	   			break;
			   }
			   count++;
		   }
		   if(flag==1)
		   {
		   	temp->lanjut=s->lanjut;
		   	s->lanjut->balik=temp;
		   	s->lanjut=temp;
		   	temp->balik=s;
		   	 cout<<"Masukan Pos: "<<pos<<" is Succesfull.. \n";
		   	 cout<<"While loop running( Traverse ) "<<count<<" Kali \n";
		   }
		else
		 cout<<"Pos tidak di temukan: \n";   
	   }

  }

 void Double_list::display()
  {
  	node *q;
  	 if(head==NULL)
  	 {
  	 	cout<<" list Kosonog.. \n";
  	 	return;
	   }
	   q=head;
	   cout<<" Double Linked list adalah \n";
	   while(q!=NULL)
	    {
	    	cout<<q->data<<" <--> ";
	    	q=q->lanjut;
		}
  }
  
  void Double_list::ulang()
  {
  	node *r;
  	 if(tail==NULL)
  	 {
  	 	cout<<"list Kosong: \n";
  	 	return;
	   }
	else
	{
		r=tail;
	 while(r!=NULL)
	 {
	 	cout<<r->data<<" <--> ";
	    
	 	r=r->balik;
	 	
	 }
	 	cout<<"Di ulang sucessful: \n";
	}
 }
