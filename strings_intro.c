void strings_intro_main() {
	//Static initialization..
	char string[] = { 'A', 'l', 'l', 'a', 'h', 'a', 'b', 'a', 'd', '\0' };
	printf("%s\n", string);
	int i = 0;
	for (i = 0; i < strlen(string); i++) {
		printf("%c", *(string + i));
	}
	//Dynamic initialization..
	char *string_pointer = (char*) malloc(sizeof(char) * 10);
	string_pointer = "New york";
	printf("%s", string_pointer);

}
