public class Person {

  private int age;
  private String firstName;
  private String middleName;

  public int getAge() {
    return age;
  }

  public void setAge(int age) {
    this.age = age;
  }

  public String getFirstName() {
    return firstName;
  }

  public void setFirstName(String firstName) {
    this.firstName = firstName;
  }

  public String getMiddleName() {
    return middleName;
  }

  public void setMiddleName(String middleName) {
    this.middleName = middleName;
  }

  public String display() {
    return "Wiek:" + age + ", Imie: " + firstName + ", Drugie imie: " + middleName;

  }

}
