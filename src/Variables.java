public class Variables {
    int i=10;
    static int j=20;


}
class D{
    public static void main(String[] args) {
        Variables v1=new Variables();
        System.out.println(Variables.j);
        System.out.println(v1.j);//Static members can be called using class name reference as well as address name reference
    }
}
