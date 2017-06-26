// Write your MyBook class here
class MyBook : public Book{
    int price;
    public: 
     MyBook(string title, string author, int price):Book(title, author){
         //super(title, author);
         this->price=price;
     }
    void display(){
    cout<<"Title: "<<title<<"\n";
    cout<<"Author: "<<author<<"\n";
    cout<<"Price: "<<price<<"\n";
}
};

    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    
    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here

    
// End class
