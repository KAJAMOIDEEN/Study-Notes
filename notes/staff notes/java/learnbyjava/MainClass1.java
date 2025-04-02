class Outside {

  public class Inside {
  }
}

public class MainClass1 {
  public static void main(String[] arg) {
    Outside outer = new Outside();
    Outside.Inside inner = outer.new Inside();
  }
}