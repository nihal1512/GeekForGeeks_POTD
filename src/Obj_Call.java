public class Obj_Call {
    public static void main(String[] args) {
       test1 p1=new test1();
        p1.Hey();//No of times you call methods it will equal no of times
        p1.Hey();
        p1.Hey();
    }

}
    class test1{
    public void Hey(){
        System.out.println("hey");
    }
}