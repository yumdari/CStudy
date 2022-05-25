char* my_strcat(char* pd, char* ps) {
	int idx = 0;
	while (*(pd + idx) != '\0') {
		idx++;
	}
	while (*ps != '\0') {
		*(pd + idx) = *ps;
		idx++;
		ps++;
	}
	*(pd + idx) = '\0';
	return pd;
}