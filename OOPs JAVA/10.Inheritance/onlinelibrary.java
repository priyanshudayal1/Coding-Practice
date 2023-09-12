class Library{
    char avlBooks[]=new char[100];
    char issuedBooks[]=new char[100];
    public void issueBook(){
        System.out.println("You have issued your book successfully");

    }

    public void showAvailbleBooks(char avlBooks[]){
        for(char i:avlBooks+){
            System.out.print(i+" ");
        }
    }

    public void returnBook(){

        System.out.println("Your book has been returned to library.");
    }



}

public class onlinelibrary{
    public static void main(String[] args) {
        
    }
}