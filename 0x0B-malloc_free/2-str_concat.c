char *str_concat(char *s1, char *s2) {
  // Check if either string is NULL
  if (s1 == NULL) {
    s1 = "";
  }
  if (s2 == NULL) {
    s2 = "";
  }

  // Get the lengths of the two strings
  int len1 = strlen(s1);
  int len2 = strlen(s2);

  // Allocate memory for the new string
  char *strout = malloc(sizeof(char) * (len1 + len2 + 1));

  // If the allocation failed, return NULL
  if (strout == NULL) {
    return NULL;
  }

  // Copy the first string into the new string
  for (int i = 0; i < len1; i++) {
    strout[i] = s1[i];
  }

  // Copy the second string into the new string
  for (int i = 0; i < len2; i++) {
    strout[i + len1] = s2[i];
  }

  // Add a NULL terminator to the end of the new string
  strout[len1 + len2] = '\0';

  // Return the new string
  return strout;
}
