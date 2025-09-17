//!  Time Complexity: O(N)
//!  Space Complexity: O(1)

void isUnique(String str) {
  List<bool> isUnique = List.generate(127, (_) => false);

  for (int i = 0; i < str.length; i++) {
    if (isUnique[str.codeUnits[i]]) {
      print("Found a Not Unique at $i Char: ${str[i]}");
      return;
    } else {
      isUnique[str.codeUnits[i]] = true;
    }
  }
  print("String only Contains unique Values");
}

void main(List<String> arguments) {
  String strInvalid = "Invalid Unique";
  String strValid = "valid";

  isUnique(strValid);
  print("----------------------------------");
  isUnique(strInvalid);
}
