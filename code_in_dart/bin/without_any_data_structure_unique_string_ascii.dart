//!  Time Complexity: O(N)
//!  Space Complexity: O(N)

bool isUniqueChars(String str) {
  int checker = 0;
  String lowerStr = str.toLowerCase();

  int aValue = 'a'.codeUnits[0];
  int zValue = 'z'.codeUnits[0];

  for (var i = 0; i < lowerStr.length; i++) {
    int charCode = lowerStr.codeUnits[i];

    if (charCode >= aValue && charCode <= zValue) {
      int val = charCode - aValue;
      if ((checker & (1 << val)) > 0) {
        return false;
      }
      checker |= (1 << val);
    }
  }
  return true;
}

void main(List<String> args) {
  String strInvalid = "Invalid Unique";
  String strValid = "valid";

  print("is Valid? ${isUniqueChars(strValid)}");
  print("----------------------------------");
  print("is Valid? ${isUniqueChars(strInvalid)}");
}
